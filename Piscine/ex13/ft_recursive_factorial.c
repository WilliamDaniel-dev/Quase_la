/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:30:50 by coder             #+#    #+#             */
/*   Updated: 2022/08/27 23:33:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial (nb -1));
}

/*int	main()
{
	printf("9! = %d\n", ft_recursive_factorial (9));
	printf("42 = %d\n", ft_recursive_factorial (42));
	printf("-42 = %d\n", ft_recursive_factorial (-42));
	printf("0 = %d\n", ft_recursive_factorial (0));
	printf("1 = %d\n", ft_recursive_factorial (1));
}*/
