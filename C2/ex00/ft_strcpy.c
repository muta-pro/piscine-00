/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/22 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = {"Hello"};
// 	char	dest[sizeof(src)];

// 	int	i = 0;
// 	while (src[i] != 0)
// 	{
// 		printf("%c", src[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_strcpy(dest, src);
// 	i = 0;
// 	while (dest[i] != 0)
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
