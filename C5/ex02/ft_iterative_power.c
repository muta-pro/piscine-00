/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:52:08 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/02 00:05:48 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nb = 2;
// 	int	power = 2;

// 	printf("result %d\n", ft_iterative_power(nb, power));
// }
