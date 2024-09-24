/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:19:02 by imutavdz          #+#    #+#             */
/*   Updated: 2024/09/01 22:38:16 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 43;
// 	printf("result %d\n", ft_iterative_factorial(nb));
// }
