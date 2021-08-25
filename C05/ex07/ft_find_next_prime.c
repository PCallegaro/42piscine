/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:24:15 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/23 14:35:37 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d\n", ft_find_next_prime(20));
// 	printf("%d\n", ft_find_next_prime(2147481111));
// 	printf("%d\n", ft_find_next_prime(8));
// 	printf("%d\n", ft_find_next_prime(14));
// 	printf("%d\n", ft_find_next_prime(85745));
// }