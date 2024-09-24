/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:00:25 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/02 02:20:44 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	nb = 7;
// 	if (ft_is_prime(nb) == 1)
// 		printf("Number %i is a prime number \n", nb);
// 	else
// 		printf("Number %i is not a prime number\n", nb);
// 	return (0);
// }
