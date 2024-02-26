/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:08:02 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/25 20:08:06 by yuhashim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_exist_dkey(char *key, t_dict *dict)
{
	while (dict->key)
	{
		if (ft_strcmp(key, dict->key) == 0)
			return (1);
		dict++;
	}
	return (0);
}

int	is_exist_ddigit(int digit, t_dict *dict)
{
	while (dict->key)
	{
		if (dict->digit == digit)
			return (1);
		dict++;
	}
	return (0);
}

int	check_key1(t_dict *dict)
{
	char	key[2];

	key[0] = '0';
	key[1] = 0;
	while (key[0] <= '9')
	{
		if (!is_exist_dkey(key, dict))
			return (1);
		key[0]++;
	}
	return (0);
}

int	check_key2(t_dict *dict)
{
	char	key[3];

	key[0] = '1';
	key[1] = '0';
	key[2] = 0;
	while (key[1] <= '9')
	{
		if (!is_exist_dkey(key, dict))
			return (1);
		key[1]++;
	}
	key[0] = '2';
	key[1] = '0';
	key[2] = 0;
	while (key[0] <= '9')
	{
		if (!is_exist_dkey(key, dict))
			return (1);
		key[0]++;
	}
	return (0);
}

int	check_dict(t_dict *dict)
{
	int		digit;

	if (check_key1(dict) || check_key2(dict) || !is_exist_dkey("100", dict))
		return (1);
	digit = 4;
	while (digit <= 37)
	{
		if (!is_exist_ddigit(digit, dict))
			return (1);
		digit += 3;
	}
	return (0);
}
