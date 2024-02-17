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

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	reverse(int *array, int start, int end)
{
	while(start < end)
	{
		swap(&array[start], &array[end]);
		start++;
		end--;
	}
}

void generate_permutations(int *array, int size, int start, int end) {
    if (start == end) {
	print_array(array, size);
        write(1, "\n", 1);
    } else {
        for (int i = start; i <= end; i++) {
            swap(&array[start], &array[i]);
            generate_permutations(array, size, start + 1, end);
            swap(&array[start], &array[i]); // 元に戻す
        }
    }
}

int	main(void)
{
	int	array[] = {1, 2, 3, 4};
	int	size = 4;

	generate_permutations(array, size, 0, size - 1);
	return (0);
}
