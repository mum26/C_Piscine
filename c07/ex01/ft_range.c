/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:33:20 by sishige           #+#    #+#             */
/*   Updated: 2024/02/26 13:45:48 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
		range[i++] = min++;
	return (range);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	*range;
//	int	min;
//	int	max;
//	int	size;
//	int	i;
//
//	min = 1;
//	max = 2;
//	range = ft_range(min, max);
//	size = max - min;
//	i = -1;
//	if (!range)
//		printf("range = NULL\n");
//	while (++i < size)
//		printf("range[%d] = %d\n", i, range[i]);
//	return (0);
//}
