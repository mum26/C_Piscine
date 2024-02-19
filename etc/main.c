/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:53:19 by sishige           #+#    #+#             */
/*   Updated: 2024/02/18 14:52:16 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

#include <unistd.h>
#include "permutation.c"

void	init_permutation(int *permutation, int size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		permutation[i] = i + 1;
		i++;
	}
}

void	init_map(int *map, int size)
{
	int	i;

	i = 0;
	while(i < size)
		init_permutation(&map[i++], size);
}

int	visible_count(int *row, int size)
{
	int	max_height;
	int	visible;
	int	i;
	max_height = row[0];
	visible = 1;
	i = 1;
	while(i < size)
	{
		if (max_height < row[i])
		{
			max_height = row[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	main(void)
{
	int	map[SIZE][SIZE];
//	int hint[SIZE][SIZE];
	int	visible;
	int	i;

	i = 0;
	while(i < SIZE)
		init_permutation(map[i++], SIZE);
	i = 0;
	while(next_permutation(map[0], SIZE) && i < 3)
		i++;

	print_array(map[0], SIZE);
	write(1, "\n", 1);

	visible = visible_count(map[0], SIZE);
	print_array(&visible, 1);
	return (0);
}
