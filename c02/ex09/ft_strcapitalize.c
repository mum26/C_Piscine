/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:17:42 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 23:29:53 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	ft_strlowcase(str);
	new_word = 1;
	i = 0;
	while (str[i])
	{
		if (new_word && 'a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
			continue ;
		}
		if (!(0 < str[i - 1] && str[i - 1] < 48 && 'a' <= str[i]
				&& str[i] <= 'z'))
		{
			i++;
			continue ;
		}
		str[i] -= 32;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
