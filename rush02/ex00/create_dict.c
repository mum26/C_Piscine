/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:04:53 by fkimijim          #+#    #+#             */
/*   Updated: 2024/02/25 21:26:29 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dict	*allocate_dict_array(int num_line)
{
	return (malloc(sizeof(t_dict) * (num_line + 1)));
}

void	free_array(char *content, t_dict *dict_arr, int i)
{
	int	j;

	free(content);
	j = -1;
	while (++j < i)
	{
		free(dict_arr[j].key);
		free(dict_arr[j].value);
	}
	free(dict_arr);
}

void	process_key_value_pair(t_dict *dict_arr, char *current_line, int *i,
		char *content)
{
	char	*colon;
	char	*temp_key;

	colon = find_str_head(current_line, ':');
	if (colon != NULL)
	{
		*colon = '\0';
		temp_key = ft_strdup(skip_space(current_line));
		if (find_invalid_key(dict_arr, *i, temp_key) == 1)
		{
			free(temp_key);
			free_array(content, dict_arr, *i);
			write(2, "Dict Error\n", 11);
			return ;
		}
		else
		{
			dict_arr[*i].key = temp_key;
			dict_arr[*i].value = ft_strdup(skip_space(colon + 1));
			dict_arr[*i].digit = count_digits(dict_arr[*i].key);
			(*i)++;
		}
	}
}

void	parse_lines_and_populate_dict(char *content, t_dict *dict_arr,
		int *dict_size)
{
	int		num_line;
	char	*current_line;
	char	*next_line;
	int		i;

	i = 0;
	num_line = count_lines(content);
	current_line = content;
	while (i < num_line)
	{
		next_line = find_str_head(current_line, '\n');
		if (next_line != NULL)
			*next_line = '\0';
		process_key_value_pair(dict_arr, current_line, &i, content);
		if (next_line != NULL)
			current_line = next_line + 1;
		else
			break ;
	}
	dict_arr[i].key = 0;
	*dict_size = i;
}

t_dict	*read_dict(const char *file_path, int *dict_size)
{
	char	*content;
	int		num_line;
	char	*ptr;
	t_dict	*dict_arr;

	content = open_and_read_file(file_path);
	if (!content)
		return (NULL);
	num_line = count_lines(content);
	ptr = content;
	*dict_size = num_line;
	dict_arr = allocate_dict_array(num_line);
	if (!dict_arr)
	{
		free(content);
		return (NULL);
	}
	parse_lines_and_populate_dict(content, dict_arr, dict_size);
	free(content);
	return (dict_arr);
}
