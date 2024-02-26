/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:21:00 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 11:21:03 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("(abc, abc) = %d\n", ft_strncmp("abc", "abc", 2)); // 返り値は 0
	printf("(abc, abe) = %d\n", ft_strncmp("abc", "abe", 3)); // 負の整数を返す
	printf("(abd, abc) = %d\n", ft_strncmp("abd", "abc", 3)); // 正の整数を返す
	printf("(abc, ab) = %d\n", ft_strncmp("abc", "ab", 4));  // 正の整数を返す
	return (0);
}
*/
