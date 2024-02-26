/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:00:41 by sishige           #+#    #+#             */
/*   Updated: 2024/02/22 22:16:42 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sort(char **base, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (0 < ft_strcmp(*(base + j), *(base + j + 1)))
				ft_swap((base + j), (base + j + 1));
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (0);
	bubble_sort(argv + 1, argc - 1);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(*(argv + i));
		write(1, "\n", 1);
	}
	return (0);
}
