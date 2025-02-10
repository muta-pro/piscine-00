/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:00:00 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/15 23:14:31 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	if (i < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
}
*/