/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:34:15 by sishige           #+#    #+#             */
/*   Updated: 2024/02/25 21:26:41 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*word_join(char *str1, char *str2, char *sep)
{
	char	*result;
	size_t	length;

	length = ft_strlen(str1);
	length += ft_strlen(str2);
	length += ft_strlen(sep);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	ft_memset(result, '\0', length + 1);
	result = ft_strcat(result, str1);
	result = ft_strcat(result, sep);
	result = ft_strcat(result, str2);
	result[length] = '\0';
	return (result);
}
