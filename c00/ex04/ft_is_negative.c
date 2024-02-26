/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:47:53 by sishige           #+#    #+#             */
/*   Updated: 2024/02/19 12:36:46 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (0 <= n)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
