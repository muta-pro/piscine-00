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

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 7;
// 	b = 4;
// 	printf("Before\ta=%i\tb=%i\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After\ta=%i\tb=%i\n", a, b);
// }
