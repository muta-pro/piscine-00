/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/23 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 123 || str[i] < 96)
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

// 	printf("%i\n", ft_str_is_lowercase ("ok!"));
// 	printf("%i\n", ft_str_is_lowercase ("alo"));
// }
