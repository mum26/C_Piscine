/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:20:29 by sishige           #+#    #+#             */
/*   Updated: 2024/02/17 21:54:59 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	reverse(int array[], int start, int end)
{
	while(start < end)
	{
		swap(&array[start], &array[end]);
		start++;
		end--;
	}
}

int	next_permutation(int array[], int size)
{
	int	i;
	int	j;

	i = size - 2;
	while(i >= 0 && array[i] >= array[i + 1])
		i--;

	if (i < 0)
	{
		return (0);
	}

	j = size - 1;
	while(array[j] <= array[i])
	{
		j--;
	}
	swap(&array[i], &array[j]);

	reverse(array, i + 1, size - 1);

	return 1;
}

void	print_array(int *array, int size)
{
	int a;
	if(!size)
		return ;
	else
		print_array(array, --size);
	a = array[size] + '0';
	write(1, &a, 1);
}

int	main(void)
{
	int	array[] = {1, 2, 3, 4};
	int	size = 4;
	int	has_next;

	has_next = 1;
	print_array(array, size);
	printf("\n");
	
	while(next_permutation(array, size))
	{
		print_array(array, size);
		write(1, "\n", 1);
	}
	return (0);
}
