/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:40:07 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 22:15:52 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

/*
int	main(void)
{
	int	num;

	num = -2147483648;
	ft_putnbr(num);
	write(1, "\n", 1);
	num = 214783647;
	ft_putnbr(num);
	write(1, "\n", 1);
	num = 0;
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
*/
