/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 00:57:22 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/02 01:59:53 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}

// int	main(void)
// {
// 	int	number = -2147483648;
// 	printf("Square of %i is %i \n", number, ft_sqrt(number));
// 	return (0);
// }
