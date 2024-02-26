/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:41:12 by sishige           #+#    #+#             */
/*   Updated: 2024/02/26 12:51:44 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}

//#include <libc.h>
//
//__attribute__((destructor))
//static void destructor() {
//    system("leaks -q a.out");
//}
//
//#include <stdio.h>
//int	main(void)
//{
//	int	*range;
//	int	min;
//	int	max;
//	int	size;
//	int	i;
//
//	min = 3;
//	max = 10;
//	size = ft_ultimate_range(&range, min, max);
//	i = 0;
//	printf("size:%d\n", size);
//	while (i < size)
//	{
//		printf("range[%d] = %d\n", i, range[i]);
//		++i;
//	}
//	free (range);
//	return (0);
//}
