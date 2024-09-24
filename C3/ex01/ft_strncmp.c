/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:36:25 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/27 16:19:37 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char) s2[i]);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("Heey", "Heya", 2));
// 	printf("%d\n", ft_strncmp("Heey", "Heya", 5));
// 	printf("%d\n", ft_strncmp("Heey", "Hello", 2));
// 	printf("%d\n", ft_strncmp("Heey", "", 2));
// 	printf("%d\n", ft_strncmp("Niiiiiice", "Heya", 7));
// 	printf("%d\n", ft_strncmp("", "Heya", 10));
// 	printf("%d\n", ft_strncmp("", "", 0));
// }
