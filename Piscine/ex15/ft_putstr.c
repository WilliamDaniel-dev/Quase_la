/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:13:38 by coder             #+#    #+#             */
/*   Updated: 2022/08/27 22:17:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}	
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}i

int	main()
{
	char *ptr;
	
	char	str[ ] = "William Daniel";

	ptr = str;
	ft_putstr(ptr);
	ft_putchar('\n');
}*/
