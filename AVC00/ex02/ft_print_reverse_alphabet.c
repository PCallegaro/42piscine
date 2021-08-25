/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:14:22 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/13 14:02:06 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	char	a;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		write(1, &z, 1);
		--z;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
