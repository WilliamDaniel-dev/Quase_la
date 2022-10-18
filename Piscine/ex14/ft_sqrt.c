/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:37:21 by coder             #+#    #+#             */
/*   Updated: 2022/08/27 21:12:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (count > 0)
	{
		while (count * count <= nb)
		{
			if (count * count == nb)
				return (count);
			else if (count >= 46341)
				return (0);
			count++;
		}
	}
	return (0);
}

/*int	main()
{
	printf("-42 = %d \n", ft_sqrt(-42));
	printf("25 = %d \n", ft_sqrt(25));
	printf("46341 = %d \n", ft_sqrt(46341));
	printf("49 = %d \n", ft_sqrt(49));


}*/
