/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/22 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "KUROSaWA! ";

// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// }
