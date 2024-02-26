/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanikaw <jtanikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:58:32 by jtanikaw          #+#    #+#             */
/*   Updated: 2024/02/18 19:35:58 by jtanikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	error_check(int argc, int number[])
{
	int i;

	i = 0;
	if (argc != 2)
		return (1);
	while (i < 16)
	{
		if (number[1] <= 0 || number[i] >= 5)
			return (1);
		i++;
	}
	return (0);
}