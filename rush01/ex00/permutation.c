/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:20:29 by sishige           #+#    #+#             */
/*   Updated: 2024/02/18 17:00:38 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int *array, int size)
{
	int	a;

	if (!size)
		return ;
	else
		print_array(array, --size);
	a = array[size] + '0';
	write(1, &a, 1);
	if (size < SIZE - 1)
		write(1, " ", 1);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	reverse(int *array, int start, int end)
{
	while (start < end)
	{
		swap(&array[start], &array[end]);
		start++;
		end--;
	}
}

int	next_permutation(int *array, int size)
{
	int	i;
	int	j;

	i = size - 2;
	while (i >= 0 && array[i] >= array[i + 1])
		i--;
	if (i < 0)
	{
		return (0);
	}
	j = size - 1;
	while (array[j] <= array[i])
	{
		j--;
	}
	swap(&array[i], &array[j]);
	reverse(array, i + 1, size - 1);
	return (1);
}

void	generate_permutations(int *array, int size, int start, int end)
{
	if (start == end)
	{
		print_array(array, size);
		write(1, "\n", 1);
	}
	else
	{
		for (int i = start; i <= end; i++)
		{
			swap(&array[start], &array[i]);
			generate_permutations(array, size, start + 1, end);
			swap(&array[start], &array[i]);
		}
	}
}

/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4};
	int	size;

	size = 4;
	print_array(array, size);
	write(1, "\n", 1);
	next_permutation(array, size);
	print_array(array, size);
	write(1, "\n", 1);
	return (0);
}
*/
