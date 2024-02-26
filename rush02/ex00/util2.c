/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:56:26 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/25 21:26:46 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0'))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*p;
	char	*rp;
	int		len;

	len = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	rp = p;
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (rp);
}

char	*ft_strndup(char *src, int n)
{
	char	*p;
	char	*rp;
	int		i;

	p = (char *)malloc(sizeof(char) * (n + 1));
	rp = p;
	i = 0;
	while (*src && i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	*p = '\0';
	return (rp);
}

void	*copy_memory(void *dest, const void *src, size_t n)
{
	char		*copy_dest;
	const char	*copy_src;
	size_t		i;

	if (!dest || !src)
		return (NULL);
	copy_dest = dest;
	copy_src = src;
	i = 0;
	while (i < n)
	{
		copy_dest[i] = copy_src[i];
		i++;
	}
	return (dest);
}

char	*find_str_head(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
