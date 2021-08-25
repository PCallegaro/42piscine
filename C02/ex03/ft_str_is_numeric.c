/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:45:20 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/17 16:07:51 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '1' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

//int main(void)
//{
//	char dest[] = "11";
//	printf("%d\n", ft_str_is_numeric(dest));
//}
