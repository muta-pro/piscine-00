/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litang <litang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:18:42 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/29 13:49:03 by litang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if ( nb == -2148473648)
		{
			ft_putchar('2');
			nb = 148473648;
		}
			else
				nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int main(void)
{
	ft_putnbr(0);
	ft_putnbr(123);
	ft_putnbr(-12);
	ft_putnbr(-2147483648);
}
