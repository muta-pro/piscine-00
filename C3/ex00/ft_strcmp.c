/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:04:40 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/26 17:35:45 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("Kurosava", "Kurosava"));
// 	printf("%d\n", ft_strcmp("Kurosava", "Kurosawa"));
// 	printf("%d\n", ft_strcmp("Kurosava", "K"));
// 	printf("%d\n", ft_strcmp("Ku", "Kurosava"));
// 	printf("%d\n", ft_strcmp("", ""));
// 	printf("%d\n", ft_strcmp("", "K"));
// }
