/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:10:36 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 22:14:51 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	sign_count;
	int	num;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	sign_count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	sign = 1;
	if (sign_count % 2 != 0)
		sign = -1;
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	num[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(num));
	return (0);
}
*/
