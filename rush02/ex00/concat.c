/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:05:38 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/25 11:05:39 by yuhashim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*concat(char *dest, char *str, char *sep)
{
	char	*result;

	result = word_join(dest, str, sep);
	free(dest);
	return (result);
}

char	*concat_isfirst(char *dest, char *str, char *sep, t_di *di)
{
	t_dict	*p;

	p = search_dict(str, 0, di->dict);
	if (di->is_first)
		dest = concat(dest, p->value, "");
	else
		dest = concat(dest, p->value, sep);
	return (dest);
}

char	*concat_1digit(char *dest, char *str, char *sep, t_di *di)
{
	char	*tmp;

	tmp = ft_strndup(str, 1);
	if (tmp[0] != '0')
		dest = concat_isfirst(dest, tmp, sep, di);
	free(tmp);
	return (dest);
}

char	*concat_2digits(char *dest, char *str, char *sep, t_di *di)
{
	char	*tmp;

	tmp = ft_strndup(str, 2);
	if (tmp[0] != '0')
	{
		if (tmp[0] == '1' || tmp[1] == '0')
			dest = concat_isfirst(dest, tmp, sep, di);
		else
		{
			tmp[1] = '0';
			dest = concat_isfirst(dest, tmp, sep, di);
			di->is_first = 0;
			dest = concat_1digit(dest, (str + 1), sep, di);
		}
	}
	else
		dest = concat_1digit(dest, (str + 1), sep, di);
	free(tmp);
	return (dest);
}

char	*concat_3digits(char *dest, char *str, char *sep, t_di *di)
{
	char	*tmp;
	t_dict	*p;

	tmp = ft_strndup(str, 1);
	if (tmp[0] != '0')
	{
		dest = concat_1digit(dest, str, sep, di);
		p = search_dict("", 3, di->dict);
		dest = concat(dest, p->value, sep);
		di->is_first = 0;
	}
	free(tmp);
	dest = concat_2digits(dest, str + 1, sep, di);
	return (dest);
}
