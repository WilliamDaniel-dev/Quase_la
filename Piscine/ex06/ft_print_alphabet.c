/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:49:10 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 04:37:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	al;

	al = 'a';
	while (al <= 'z')
	{
		ft_putchar(al);
		al ++;
	}
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_print_alphabet();
	return(0);
}*/
