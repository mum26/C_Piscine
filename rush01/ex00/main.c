/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:53:19 by sishige           #+#    #+#             */
/*   Updated: 2024/02/18 23:26:02 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

#include "atoi.c"
#include "error_check.c"
#include "permutation.c"
#include <unistd.h>

void	init_permutation(int *permutation, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		permutation[i] = i + 1;
		i++;
	}
}

void	init_map(int map[][SIZE], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	visible_count(int *row, int size)
{
	int	max_height;
	int	visible;
	int	i;

	max_height = row[0];
	visible = 1;
	i = 1;
	while (i < size)
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

void	visible_counts(int *nums, int *row, int size)
{
	int	rev_row[SIZE];
	int	i;

	i = 0;
	while (i < size)
	{
		rev_row[i] = row[i];
		i++;
	}
	reverse(rev_row, 0, 3);
	nums[0] = visible_count(row, size);
	nums[1] = visible_count(rev_row, size);
}

int	check_hint(int *hint, int visible)
{
	if (*hint == visible)
		return (1);
	return (0);
}

int	check_row_hint(int *hints, int *visibles)
{
	int	check;
	int	i;

	check = 0;
	i = 0;
	while (i < 2)
	{
		if (!(check_hint(&hints[i], visibles[i])))
			return (0);
		i++;
	}
	return (1);
}

int	is_safe(int map[][SIZE], int *permutation)
{
	int	row;
	int	i;

	i = 0;
	while (i < SIZE)
	{
		row = 0;
		while (row < SIZE)
		{
			if (map[row][i] != 0 && map[row][i] == permutation[i])
				return (0);
			row++;
		}
		i++;
	}
	return (1);
}

void	cpy_permutation(int *dest, int *source, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = source[i];
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int map[SIZE][SIZE];
	int row_hints[SIZE][2];
	int col_hints[SIZE][2];
	int permutation[SIZE];
	int visibles[2];
	int i, permutationFound;

	int number[16];
	atoi(argv[1], number);
	henkan(number, row_hints, col_hints);
	if (error_check(argc, number))
	{
		write(1, "Error\n", 6);
		return (0);
	};

    init_map(map, SIZE);

    i = 0;
    while (i < SIZE)
    {
        init_permutation(permutation, SIZE);
        permutationFound = 0;

        while (!permutationFound)
        {
            visible_counts(visibles, permutation, SIZE);

            if (check_row_hint(row_hints[i], visibles) && is_safe(map, permutation))
            {
                cpy_permutation(map[i], permutation, SIZE);
                permutationFound = 1; // 適切な順列が見つかった
            }
            else
            {
                if (!next_permutation(permutation, SIZE))
                {
                    // 全ての順列を試し、適切なものが見つからなかった場合
                    break; // 次の行に進むための処理を中断
                }
            }
        }

        if (!permutationFound)
        {
            write(1, "error!!", 7);
            return 0; // 適切な順列が見つからなかった場合、エラーを出力して終了
        }

        i++; // 次の行に進む
    }

    // mapの出力
    print_array(map[0], SIZE);
    write(1, "\n", 1);
    print_array(map[1], SIZE);
    write(1, "\n", 1);
    print_array(map[2], SIZE);
    write(1, "\n", 1);
    print_array(map[3], SIZE);
    write(1, "\n", 1);

    return 0;
}
