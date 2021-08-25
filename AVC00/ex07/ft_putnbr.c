/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:57:08 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/13 11:30:24 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	max;

	max = 1;
	if (nb < 0 && nb / 10 == 0)
		ft_putchar ('-');
	if (nb < 0)
		max = -1;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar(((nb % 10) * max) + '0');
}
