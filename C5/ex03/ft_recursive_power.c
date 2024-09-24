/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 00:07:12 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/02 00:36:59 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

// int	main(void)
// {
// 	printf("3^-4 is %d\n", ft_recursive_power(3, -4));
// 	printf("2^5 is %d\n", ft_recursive_power(2, 5));
// 	printf("5^0 is %d\n", ft_recursive_power(5, 0));
// 	printf("0^0 is %d\n", ft_recursive_power(0, 0));
// 	return (0);
// }
