/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanikaw <jtanikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 01:56:24 by jtanikaw          #+#    #+#             */
/*   Updated: 2024/02/20 19:41:06 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	atoi(char *str, int *numbers)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
			str++;
		sign = 1;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		num = 0;
		while (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (*str - '0');
			str++;
		}
		numbers[count] = num * sign;
		count++;
	}
}
i
/*
void	henkan(int number[], int row_hint[][2], int col_hint[][2])
{
	col_hint[0][0] = number[0];
	col_hint[0][1] = number[4];
	col_hint[1][0] = number[1];
	col_hint[1][1] = number[5];
	col_hint[2][0] = number[2];
	col_hint[2][1] = number[6];
	col_hint[3][0] = number[3];
	col_hint[3][1] = number[7];
	row_hint[0][0] = number[8];
	row_hint[0][1] = number[12];
	row_hint[1][0] = number[9];
	row_hint[1][1] = number[13];
	row_hint[2][0] = number[10];
	row_hint[2][1] = number[14];
	row_hint[3][0] = number[11];
	row_hint[3][1] = number[15];
}
*/
