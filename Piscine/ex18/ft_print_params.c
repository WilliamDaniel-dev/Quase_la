/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 03:19:34 by coder             #+#    #+#             */
/*   Updated: 2022/09/04 23:37:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char s);

void	ft_print_params(int argc, char *argv)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < argc && argv[x] != '\0')
	{
		ft_putchar(argv[x]);
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print_params(argc, argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
