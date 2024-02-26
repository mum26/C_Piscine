/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:11:41 by sishige           #+#    #+#             */
/*   Updated: 2024/02/19 21:46:42 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int		is_lower;
	char	string[16] = "Hello, World\n";

	is_lower = ft_str_is_printable(string);
	if (is_lower)
		printf("only print char");
	else
		printf("not only print char");
	return (0);
}
*/
