/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:51:03 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/24 19:47:02 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c] && (i + c + 1) < size)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	if (size > i)
		return (i + ft_strlen(src));
	return (size + ft_strlen(src));
}

int main()
{
	char str1 [100] = "123456789";
	char str2 [] = "abcdef";
	char str3 [100] = "1234567";
    char str4 [] = "abcdefgh";
	
	printf("%u | %s\n", ft_strlcat(str1, str2, 3), str1);
	printf("%lu | %s\n", strlcat(str3, str4, 3), str3);
}