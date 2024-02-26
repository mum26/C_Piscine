/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:58:11 by sishige           #+#    #+#             */
/*   Updated: 2024/02/19 12:35:14 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	buffer[7];
	int		i;
	int		j;

	buffer[5] = ',';
	buffer[6] = ' ';
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			buffer[0] = i / 10 + '0';
			buffer[1] = i % 10 + '0';
			buffer[2] = ' ';
			buffer[3] = j / 10 + '0';
			buffer[4] = j % 10 + '0';
			if (i == 98 && j == 99)
				write(1, buffer, 5);
			else
				write(1, buffer, 7);
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
