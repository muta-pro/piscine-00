/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:27:47 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/26 22:49:17 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = ", bro!";

// 	printf("dest: %s\n", dest);
// 	printf("src: %s\n", src);
// 	ft_strcat(dest, src);
// 	printf("result: %s\n", dest);
// }
