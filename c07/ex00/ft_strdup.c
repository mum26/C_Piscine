/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:40:15 by sishige           #+#    #+#             */
/*   Updated: 2024/02/26 12:58:23 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, src);
	return (result);
}

//#include <libc.h>
//
//__attribute__((destructor))
//static void destructor() {
//    system("leaks -q a.out");
//}

//#include <stdio.h>
//int	main(void)
//{
//	char	str[] = "Hello world :D";
//	char	*p_str;
//
//	p_str = ft_strdup(str);
//	printf("str\t= %s\n", str);
//	if (p_str != NULL)
//		printf("p_str\t= %s\n", p_str);
//	else
//		printf("p_str\t= NULL\n");
//
//	free (p_str);
//	return (0);
//}
