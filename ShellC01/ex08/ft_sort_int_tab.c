/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:59:15 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/24 14:39:25 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}

// int main(void)
// {
// 	int n[10] = {0, 1, 4, 3, 7, 5, 6, 2, 9, 8};
// 	ft_sort_int_tab(n, 10);
// 	printf("ARRAY INVERTIDO:\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("pos %d = valor %d\n", i, n[i]);
// 	}
// 	printf("\n\n\n");
// }
