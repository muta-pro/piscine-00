/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__ft                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/15 15:26:11 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 44;
// 	b = 6;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("A is %i, B is %i, div is %i, over is %i\n", a, b, div, mod);
// }
