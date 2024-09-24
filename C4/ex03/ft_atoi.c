/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:51:01 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/28 15:58:44 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	int	sign_count;

	sign = 1;
	sign_count = 0;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	if (sign_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "  --+-+1234rrr33";
// 	int			num = ft_atoi(str);
// 	printf("%d\n", num);
// 	return (0);
// }
