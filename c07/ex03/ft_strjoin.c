/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:36:25 by sishige           #+#    #+#             */
/*   Updated: 2024/02/26 13:43:56 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < length)
		ptr[i++] = (unsigned char)c;
	ptr[i] = '\0';
	return (b);
}

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char	*dest, char	*src)
{
	size_t	i;
	char	*p_dest;

	if (dest == NULL || src == NULL)
		return (0);
	p_dest = dest;
	while (*p_dest != '\0')
		p_dest++;
	i = 0;
	while (src[i] != '\0')
		*(p_dest++) = src[i++];
	*p_dest = '\0';
	return (dest);
}

// used fanc: strlen, strcat, memset, malloc
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i++ < size - 1)
			length += ft_strlen(sep);
	}
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_memset(dest, '\0', length);
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i++ < size - 1)
			dest = ft_strcat(dest, sep);
	}
	dest[length] = '\0';
	return (dest);
}

//int	count_strs(char **strs)
//{
//	size_t	i;
//	if (strs == NULL)
//		return (0);
//
//	i = 0;
//	while (strs[i] != NULL)
//		i++;
//	return (i);
//}
//
//#include <stdio.h>
//int	main(void)
//{
//	char *strs[] = {"Hello", "world", "!!", NULL};
//	char *sep = " ";
//	char *p_str;
//	int	size;
//
//	size = count_strs(strs);
//	p_str = ft_strjoin(size, strs, sep);
//	printf ("%s\n", p_str);
//	free (p_str);
//	return (0);
//}
