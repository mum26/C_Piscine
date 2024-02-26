/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:18:12 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/25 18:18:13 by yuhashim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_allnum(char	*arg)
{
	while (*arg)
	{
		if (*arg < '0' || *arg > '9')
			return (0);
		arg++;
	}
	return (1);
}

int	check_arg(char *arg)
{
	if (!*arg || !is_allnum(arg) || (*arg == '0' && *(arg + 1)))
		return (1);
	return (0);
}
