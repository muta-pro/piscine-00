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

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	swap;
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		swap = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = temp;
				swap = 1;
			}
			j++;
		}
		if (!swap)
			break ;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {33, 11, 44, 1, 7};
// 	int	size = sizeof (tab) / sizeof (tab[0]);
// 	int	i = 0;

// 	ft_sort_int_tab(tab, size);
// 	printf("Array in ascending order:\n");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }