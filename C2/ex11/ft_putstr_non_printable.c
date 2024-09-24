/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:44:22 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/24 11:44:41 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	str_is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	first;
	char	last;

	i = 0;
	while (str[i] != 0)
	{
		if (str_is_printable(str[i]) == 1)
		{
			write(1, &str[i], 1);
		}
		else
		{
			first = "0123456789abcdef"[(unsigned char)str[i] / 16];
			last = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, "\\", 1);
			write(1, &first, 1);
			write(1, &last, 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou\ntu vas bien ?";

// 	printf("Original string: %s\n", str);
// 	printf("Transformed string: ");
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
