/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:52:02 by sishige           #+#    #+#             */
/*   Updated: 2024/02/16 18:52:18 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '9')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				if (num[0] != num[1] && num[1] != num[2])
					write(1, &num, 3);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
					write(1, ", ", 2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
