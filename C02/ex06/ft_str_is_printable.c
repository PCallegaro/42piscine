/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:27:42 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/17 16:16:11 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i <= 127]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//int main(void)
//{
//	char dest[] = "11 ";
//	printf("%d\n", ft_str_is_printable(dest));
//}
