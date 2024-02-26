/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:02:22 by fkimijim          #+#    #+#             */
/*   Updated: 2024/02/25 21:27:02 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*copy_memory(void *dest, const void *src, size_t n);

int	open_file(const char *file_path)
{
	int	fd;

	fd = open(file_path, O_RDONLY);
	return (fd);
}

char	*read_file(int fd)
{
	char	*content;
	int		total_bytes;
	int		byte_num;
	char	dict[BUF_SIZE];

	content = malloc(BUF_SIZE);
	if (!content)
		return (NULL);
	content[0] = '\0';
	total_bytes = 0;
	byte_num = read(fd, dict, BUF_SIZE - 1);
	while (byte_num > 0)
	{
		if (total_bytes + byte_num >= BUF_SIZE)
		{
			write(2, "Error\n", 6);
			free(content);
			return (NULL);
		}
		copy_memory(content + total_bytes, dict, byte_num);
		total_bytes += byte_num;
		content[total_bytes] = '\0';
		byte_num = read(fd, dict, BUF_SIZE - 1);
	}
	return (content);
}

int	count_lines(const char *content)
{
	int			num_line;
	const char	*ptr;

	num_line = 0;
	ptr = content;
	while (*ptr)
	{
		if (*ptr == '\n')
			num_line++;
		ptr++;
	}
	return (num_line);
}

char	*open_and_read_file(const char *file_path)
{
	int		fd;
	char	*content;

	fd = open_file(file_path);
	if (fd == -1)
		return (NULL);
	content = read_file(fd);
	close(fd);
	return (content);
}
