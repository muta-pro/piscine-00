/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/26 17:20:37 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
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

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int	n = 5;
// 	char	src[] = "Kurosava";
// 	char	dest[] = "akakakakaka";
// 	unsigned int	i;

// 	i = 0;
// 	while (src[i] != 0)
// 	{
// 		printf("%c", src[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_strncpy(dest, src, n);
// 	i = 0;
// 	while (dest[i] != 0 && i < n)
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
