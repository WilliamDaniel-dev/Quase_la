/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:01:42 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/10/12 04:17:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_fd(int fd, char *storage)
{
	int		i;
	char	*buf;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	i = 1;
	while (i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[i] = 0;
		storage = ft_strjoin(storage, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	return (storage);
}

static char	*new_line(char *storage)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
	{
		free(storage);
		return (NULL);
	}
	string = malloc(sizeof(char) * (ft_strlen(storage) - i + 1));
	if (!string)
		return (NULL);
	i++;
	j = 0;
	while (storage[i])
		string[j++] = storage[i++];
	string[j] = '\0';
	free(storage);
	return (string);
}	

static char	*get_line(char *storage)
{
	int		count_ln;
	char	*tmp_storage;

	count_ln = 0;
	if (!storage[count_ln])
		return (NULL);
	while (storage[count_ln] && storage[count_ln] != '\n')
		count_ln++;
	tmp_storage = malloc(sizeof(char) * (count_ln + 2));
	if (!tmp_storage)
		return (NULL);
	count_ln = 0;
	while (storage[count_ln] && storage[count_ln] != '\n')
	{
		tmp_storage[count_ln] = storage[count_ln];
		count_ln++;
	}
	if (storage[count_ln] == '\n')
	{
		tmp_storage[count_ln] = storage[count_ln];
		count_ln++;
	}
	tmp_storage[count_ln] = '\0';
	return (tmp_storage);
}

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	storage[fd] = read_fd(fd, storage[fd]);
	if (!storage[fd])
		return (NULL);
	line = get_line(storage[fd]);
	storage[fd] = new_line(storage[fd]);
	return (line);
}
