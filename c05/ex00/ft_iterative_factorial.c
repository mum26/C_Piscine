/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:54:31 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 19:00:16 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	result = 1;
	while (0 < nb)
		result *= nb--;
	return (result);
}

//#include <stdio.h>
// int	main(void)
//{
//	printf("%d", ft_iterative_factorial(4));
//	return (0);
//}
