/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/24 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			dest[10];
// 	char			src[] = "Gde si brate moj!";
// 	unsigned int	len = ft_strlcpy(dest, src, sizeof(dest));

// 	printf("Copied string %s\n", dest);
// 	printf("Lenght of src: %u\n", len);
// 	return (0);
// }
