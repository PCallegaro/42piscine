/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:03:36 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/23 14:34:58 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	numerosimp;
	int	cont;

	numerosimp = 1;
	cont = 0;
	while (nb > 0)
	{
		nb = nb - numerosimp;
		numerosimp += 2;
		cont++;
	}
	if (nb < 0)
		return (0);
	return (cont);
}

// int main(void)
// {
// 	printf("%d\n", ft_sqrt(196));
// }