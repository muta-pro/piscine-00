/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:39:22 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/01 22:50:47 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 3;
// 	printf("result %d\n", ft_recursive_factorial(nb));
// }
