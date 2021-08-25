/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:54:50 by peantoni          #+#    #+#             */
/*   Updated: 2021/08/17 16:26:49 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*head;

	head = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
			&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')
			&& *str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (head);
}

//int main(void)
//{
//	char c[] = "oi tudo bem? 42lisboa oi-oi-oi";
//	printf("%s\n", ft_strcapitalize(c));
//}