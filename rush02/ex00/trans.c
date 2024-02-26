/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:44:03 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/24 13:44:04 by yuhashim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

typedef struct s_dg
{
	int	bdigit;
	int	rdigit;
}	t_dg;

t_dict	*search_dict(char *key, int digit, t_dict *dict)
{
	t_dict	*p;

	p = dict;
	if (digit > 2)
	{
		while (p->key)
		{
			if (digit == p->digit)
				return (p);
			p++;
		}
	}
	else
	{
		while (p->key)
		{
			if (ft_strcmp(key, p->key) == 0)
				return (p);
			p++;
		}
	}
	return (NULL);
}

char	*get_str_first(char **str, char *sep, int rdigit, t_di *di)
{
	char	*result;

	result = (char *)malloc(sizeof(char));
	*result = 0;
	if (rdigit == 1)
		result = concat_1digit(result, *str, sep, di);
	else if (rdigit == 2)
		result = concat_2digits(result, *str, sep, di);
	else if (rdigit == 3)
		result = concat_3digits(result, *str, sep, di);
	*str += rdigit;
	di->is_first = 0;
	return (result);
}

char	*get_str(char *str, char *sep, t_dg *dg, t_dict *dict)
{
	char	*result;
	t_di	di;
	t_dict	*p;

	di.dict = dict;
	di.is_first = 1;
	result = get_str_first(&str, sep, dg->rdigit, &di);
	while (dg->bdigit >= 4)
	{
		if (str[-1] != '0' || str[-2] != '0' || str[-3] != '0')
		{
			p = search_dict("", dg->bdigit, dict);
			if (p == NULL)
				return (NULL);
			result = concat(result, p->value, sep);
		}
		result = concat_3digits(result, str, sep, &di);
		str += 3;
		dg->bdigit -= 3;
	}
	return (result);
}

char	*trans(char *str, char *sep, t_dict *dict)
{
	int		tdigit;
	t_dict	*p;
	t_dg	dg;

	if (ft_strcmp(str, "0") == 0)
	{
		p = search_dict("0", 0, dict);
		if (p == NULL)
			return (NULL);
		return (ft_strdup(p->value));
	}
	tdigit = ft_strlen(str);
	if (tdigit < 4)
	{
		dg.bdigit = 0;
		dg.rdigit = tdigit;
	}
	else
	{
		dg.bdigit = (((tdigit - 4) / 3) * 3) + 4;
		dg.rdigit = tdigit - dg.bdigit + 1;
	}
	return (get_str(str, sep, &dg, dict));
}
