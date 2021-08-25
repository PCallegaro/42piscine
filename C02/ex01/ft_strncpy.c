/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:19:45 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/17 16:00:15 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//int	main(void)
//{
//	char dest[] = "Pedro";
//	char src[] = "pedro";
//	int n = 2;
//	ft_strncpy(dest, src, n);
//	printf("%s\n%s\n", src, dest);
//	return (0);
//}
