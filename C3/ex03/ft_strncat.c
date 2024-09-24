/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:34:10 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/26 23:08:35 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0 && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			dest[] = "Hello";
// 	char			src[] = ", bro!";
// 	unsigned int	nb = 4;

// 	printf("dest: %s\n", dest);
// 	printf("src: %s\n", src);
// 	printf("nb: %d\n", nb);
// 	ft_strncat(dest, src, nb);
// 	printf("result: %s\n", dest);
// }
