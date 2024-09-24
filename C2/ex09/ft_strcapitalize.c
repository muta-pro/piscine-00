/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:32 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/22 11:27:58 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int		check_alphanumeric(char c);

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	check_alphanumeric(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (2);
	else if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowcase(str);
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != 0)
	{
		if (check_alphanumeric(str[i - 1]) == 0
			&& check_alphanumeric(str[i]) == 2)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

//  #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "salut, kurosaWa! ! 420cinema fourty-Twenty: yes+?";

// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// }
