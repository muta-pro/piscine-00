/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:25:49 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/15 15:25:55 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (c-- > 97)
	{
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	write(1, "\n", 1);
// }
