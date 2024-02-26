/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:56:00 by sishige           #+#    #+#             */
/*   Updated: 2024/02/10 16:14:55 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while(i++ < y)
	{
		j = 0;
		while(j < x)
		{
			if(j == 0)
				c = '-';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
	}
}

int main(void)
{
	rush(5, 5);
	return (0);
}
