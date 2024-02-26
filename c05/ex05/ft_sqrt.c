/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:25:12 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 12:27:59 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		start;
	int		end;
	double	mid;
	double	square;

	if (nb < 0)
		return (0);
	if (!nb || nb == 1)
		return (nb);
	start = 1;
	end = nb / 2;
	while (start <= end)
	{
		mid = (start + end) / 2;
		square = mid * mid;
		if (square == nb)
			return (mid);
		if (square < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	num;
//
//	num = 49;
//	printf("num:%d sqrt:%d\n", num, ft_sqrt(num));
//	return (0);
//}
