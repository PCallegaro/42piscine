/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:35:29 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/23 14:34:22 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * nbr;
		i++;
	}
	return (nb);
}

// int main(void)
// {
// 	int power;
// 	int nb;

// 	nb = 3;
// 	power = 3;
// 	printf("%d\n", ft_iterative_power(nb, power));
// 	return (0);
// }