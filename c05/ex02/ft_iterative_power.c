/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:15:18 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 12:23:51 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	num;
//
//	num = ft_iterative_power(3, 2);
//	printf("%d", num);
//	return (0);
//}
