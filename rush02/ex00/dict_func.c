/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:59:07 by fkimijim          #+#    #+#             */
/*   Updated: 2024/02/25 21:27:12 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_digits(char *num)
{
	int	length;
	int	count;
	int	i;

	length = ft_strlen(num);
	if (length <= 1)
		return (0);
	count = 0;
	i = 1;
	while (i < length)
	{
		if (num[i++] == '0')
			count++;
		else
			return (0);
	}
	return (count + 1);
}

int	find_invalid_key(t_dict *dict_arr, int num_line, char *key)
{
	int	i;

	i = 0;
	while (i < num_line)
	{
		if (ft_strcmp(dict_arr[i].key, key) == 0)
			return (1);
		i++;
	}
	return (0);
}

char	escape_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
		|| c == '\f');
}

char	*skip_space(char *str)
{
	char	*tail;

	while (*str && escape_space(*str))
		str++;
	if (*str == '\0')
		return (str);
	tail = str + ft_strlen(str) - 1;
	while (tail > str && escape_space(*tail))
		tail--;
	*(tail + 1) = '\0';
	return (str);
}
