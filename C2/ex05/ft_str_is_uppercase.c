/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/23 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 64 || str[i] > 91)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("KKKO"));
// 	printf("%d\n", ft_str_is_uppercase("KKOo"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// }
