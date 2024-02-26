/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:43:17 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 15:39:48 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len < size)
	{
		i = 0;
		while (src[i] && (dest_len + i) < (size - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char			dest[20] = "ABCDE";
	char			src[] = "1234567";
	unsigned int	size;
	unsigned int	result1;

	size = 19;
	result1 = ft_strlcat(dest, src, size);
	printf("%s: %u\n", dest, result1);
	return (0);
}
*/
