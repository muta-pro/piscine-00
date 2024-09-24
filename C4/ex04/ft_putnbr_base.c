/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:48:07 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/28 17:37:11 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_negative(int nbr)
{
	if (nbr < 0)
		return (1);
	else
		return (0);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	error_test(int lenght, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (j < lenght)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (lenght <= 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenght;

	lenght = ft_strlen(base);
	if (error_test(lenght, base) == 1)
		return ;
	if (is_negative(nbr) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / lenght, base);
			return ;
		}
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < lenght)
		ft_putchar(base[nbr]);
	if (nbr >= lenght)
	{
		ft_putnbr_base(nbr / lenght, base);
		ft_putnbr_base(nbr % lenght, base);
	}
}

// int main(void)
// {
// 	int	nbr = -2147483648;
// 	char	*base = "01";

// 	ft_putnbr_base(nbr, base);
// 	printf("\n");
// 	return (0);
// }
