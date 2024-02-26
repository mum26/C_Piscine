/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:52:17 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 17:37:06 by sishige          ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	ft_putstr(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
