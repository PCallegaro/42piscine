/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:13:56 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/24 14:39:28 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ra;
	int	swap;

	i = 0;
	ra = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab [ra];
		tab [ra] = swap;
		i++;
		ra--;
	}
}

// int main(void)
// {
// 	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_rev_int_tab(n, 10);

// 	printf("ARRAY INVERTIDO:\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("pos %d = valor %d\n", i, n[i]);
// 	}

// 	printf("\n");
// }