/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 19:00:28 by sishige           #+#    #+#             */
/*   Updated: 2024/02/16 19:56:56 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num)
{
	char	c;

	if (!num)
		return ;
	c = (num % 10) + '0';
	print_num(num / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (!nbr)
	{
		write(1, "0", 1);
	}
	print_num(nbr);
}

/*
int	main(void)
{
	int	num;

	num = 0;
	ft_putnbr(num);
	return (0);
}
*/
