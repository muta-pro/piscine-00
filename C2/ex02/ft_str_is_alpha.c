/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/22 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z' || str[i] < 'A') && (str[i] > 'z' || str[i] < 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Hi"));
// 	printf("%d\n", ft_str_is_alpha("Hi5!"));
// 	printf("%d\n", ft_str_is_alpha(""));
// 	printf("%d\n", ft_str_is_alpha("5"));
// 	return (0);
// }
