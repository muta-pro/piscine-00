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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 44;
// 	b = 21;
// 	printf("Before\ta=%i\tb=%i\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("After\ta=%i\tb=%i\n", a, b);
// }
