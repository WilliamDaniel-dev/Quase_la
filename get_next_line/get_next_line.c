/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:36:11 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/10/18 22:40:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*For this project we have to understand some new things (Of course, depending 
on how far you went in the selection process lists) it is important to understand 
the concept of "statics" that at the end of this comment I will leave a brief summary of it,
it will also be important to learn what this is the File Descriptor (FD). 
This Get Next Line function requests that we print one line at a time using the ENTER (\n) delimiter,
that is, every time our cursor finds a "\n" it will have to return the printed line to the user. 
(Of course we have some conditions that you can find in the PDF).*/
 
#include "get_next_line.h"

/*We use this function to read the entire line that was passed, remembering that this function only 
reads and returns to the gln function the entire line.*/
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


/*The "new_line" function returns the "leftover", that is, everything left after the "\n", 
along with the new reading. Restarting the loop.*/
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

/*This function takes the line that was returned by the "read" function, 
returning up to the "\n".*/
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

/*
For this function to work it will have to call other functions as well because as we know 
the norm does not accept more than 25 lines, so we created 3 different functions which the 
get_next_line function will just call them and return the "line" which will be the line up to
the our delimiter "\n". */
char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	storage = read_fd(fd, storage);
	if (!storage)
		return (NULL);
	line = get_line(storage);
	storage = new_line(storage);
	return (line);
}
