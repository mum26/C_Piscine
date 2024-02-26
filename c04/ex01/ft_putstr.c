/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:57:16 by sishige           #+#    #+#             */
/*   Updated: 2024/02/20 22:16:55 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

/*
int	main(void)
{
	char	str[] = "Hello world :D";

	ft_putstr(str);
	return (0);
}
*/
