/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:26:57 by sishige           #+#    #+#             */
/*   Updated: 2024/02/16 20:31:17 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 56;
	b = 11;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}
*/
