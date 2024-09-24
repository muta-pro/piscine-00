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

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaps;
	int	i;
	int	temp;

	swaps = size / 2;
	i = 0;
	while (swaps > 0)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = temp;
		i++;
		swaps--;
	}
}

// int	main(void)
// {
// 	int	tab[7] = {2, 4, 5, 7, 9, 9, 8};
// 	int	size;
// 	int	i;

// 	size = sizeof(tab) / sizeof(tab[0]);
// 	i = 0;
// 	printf("Before:\n");
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	printf("After \n");
// 	while (i < size)
// 	{
// 		printf("%d", tab [i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }