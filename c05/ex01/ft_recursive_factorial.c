/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:02:42 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 18:59:50 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	if (1 < nb)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	num;
//
//	num = -1;
//	printf("num:%d, fact:%d\n", num, ft_recursive_factorial(num));
//	return (0);
//}
