/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:07:40 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/23 14:36:20 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	long int	res;

	res = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{	
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}

// int	main(void)
// {
// 	int	n;

// 	n = -1;
// 	printf("%d\n", ft_iterative_factorial(n));
// 	return (0);
// }