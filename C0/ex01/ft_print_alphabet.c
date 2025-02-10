/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:18:42 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/15 15:24:32 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c++ < 122)
		write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1);
// }
