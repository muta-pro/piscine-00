/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:09:23 by imutavdz          #+#    #+#             */
/*   Updated: 2024/08/27 15:53:55 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*strstr(const char *haystack, const char *needle);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "Ona voli Kurosavu";
// 	char	to_find[] = "Kurosavu";

// 	printf("%s\n", ft_strstr(str, to_find));
// }
