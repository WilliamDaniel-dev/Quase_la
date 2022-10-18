/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:11:05 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 01:21:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb < 0 || nb >= 17)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		while (nb > 1)
			count *= nb --;
	return (count);
}
/*int	main()
{
	printf("0! = %d \n", ft_iterative_factorial (0));
	printf("-42! = %d \n", ft_iterative_factorial (-42));
	printf("9! = %d \n", ft_iterative_factorial (9));
}*/
