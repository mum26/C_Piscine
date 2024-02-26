/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:20:46 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 11:20:53 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("(abc, abc) = %d\n", ft_strcmp("abc", "abc")); // 返り値は 0
	printf("(abc, abe) = %d\n", ft_strcmp("abc", "abe")); // 負の整数を返す
	printf("(abd, abc) = %d\n", ft_strcmp("abd", "abc")); // 正の整数を返す
	printf("(abc, ab) = %d\n", ft_strcmp("abc", "ab"));  // 正の整数を返す
	return (0);
}
*/
