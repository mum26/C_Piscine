/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:09:46 by sishige           #+#    #+#             */
/*   Updated: 2024/02/24 19:10:35 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
}

void	free_dict(t_dict *dict, int dict_size)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}

int	get_arg(int argc, char *argv[], char **num, char **filename)
{
	if (argc < 2 || argc > 3)
		return (1);
	if (argc == 2)
	{
		*num = argv[1];
		*filename = NULL;
	}
	else
	{
		*num = argv[2];
		*filename = argv[1];
	}
	if (check_arg(*num))
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_dict	*dict;
	int		dict_size;
	char	*num;
	char	*filename;
	char	*str;

	if (get_arg(argc, argv, &num, &filename))
		return (print("Error"));
	if (filename)
		dict = read_dict(filename, &dict_size);
	else
		dict = read_dict("numbers.dict", &dict_size);
	if (!dict || check_dict(dict))
		return (print("Dict Error"));
	str = trans(num, " ", dict);
	if (!str)
		return (print("Dict Error"));
	print(str);
	free(str);
	free_dict(dict, dict_size);
	return (0);
}
