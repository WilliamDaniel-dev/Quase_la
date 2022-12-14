/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pipe_data_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:42:41 by etomiyos          #+#    #+#             */
/*   Updated: 2022/10/12 17:22:09 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init_fd_data(t_pipex *p, char *argv[])
{
	outfile_fd(p, argv);
	infile_fd(p, argv);
}

void	outfile_fd(t_pipex *p, char *argv[])
{
	p->outfd = open(argv[p->argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (p->outfd < 0)
		exit(1);
}

void	infile_fd(t_pipex *p, char *argv[])
{
	p->infd = open(argv[1], O_RDONLY);
	if (p->infd < 0)
	{
		if (!access(argv[1], F_OK))
		{
			p->infd = open("/dev/null", O_RDONLY);
			exit(0);
		}
		write(1, "bash: ", 6);
		write(1, argv[1], ft_strlen(argv[1]));
		write(1, ": ", 2);
		write(1, NO_FILE, ft_strlen(NO_FILE));
		exit(1);
	}
}

void	fd_memory_allocate(t_pipex *p)
{
	int	i;

	i = 0;
	while (i < p->pipe_number)
	{
		p->array_fd[i] = ft_calloc(sizeof(int), 2);
		i++;
	}
}

void	init_pipe_values(t_pipex *p)
{
	int	i;
	int	value;

	i = 0;
	value = -5;
	while (i < p->pipe_number)
	{
		value = pipe(p->array_fd[i]);
		if (value == -1)
			perror("pipe:");
		i++;
	}
}
