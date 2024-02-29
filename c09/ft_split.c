/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:42:27 by sishige           #+#    #+#             */
/*   Updated: 2024/02/28 23:22:30 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//char	**ft_split(char *str, char *charset)
//{
//	int	i;
//	int	j;
//
//	if (str == NULL)
//		return (NULL);
//	i = -1;
//	while(str[++i] != '\0');
//	{
//		j = -1;
//		while(charset[++j] != '\0' && !to_split)
//			if (ft_strcmp(str[i], charset[j]))
//			{
//				to_split = 1;
//				split_cnt
//			}
//	}
//}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello,world,!!";
	char	charset[] = " +_,.\n";
	int	i;
	int	j;
	int	start;
	int	split_cnt;
	char	**strs;

	// 有効な区切り文字数をカウント start
	split_cnt = 0;
	start = 0;
	i = -1;
	while(str[++i] != '\0')
	{
		j = -1;
		while(charset[++j] != '\0')
			if (str[i] == charset[j])
			{
				if (i - start > 0)
					split_cnt++;
				start = i + 1;
				break ;
			}
	}
	split_cnt++;
	// end

	int cnt = split_cnt;
	int n = -1;
	// strs のヒープを確保 start
	strs = (char **)malloc(sizeof(char *) * (split_cnt + 1));
	if (strs == NULL)
		return (0 /*NULL*/);
	// end

	// strs[n] にstr[i] ~ (i - start)文字コピーする start
	i = 0;
	start = 0;
	while (0 < split_cnt)
	{
		j = -1;
		while (charset[++j] != '\0')
			if (str[i] == charset[j])
			{
				if (i - start > 0)
				{
					strs[++n] = (char *)malloc(sizeof(char) * (i - start + 1));
					if (strs[n] == NULL)
					{
						free (strs);
						return (0 /*NULL*/);
					}
					strs[n][0] = '\0';
					strs[n] = strncpy(strs[n], &str[start], i - start);
				}
				split_cnt--;
				start = i + 1;
				break ;
			}
		i++;
	}
	strs[n][i - start] = 0;
	// end

	i = 0;
	while (i < cnt)
		printf("%s\n", strs[i++]);
	return (0);
}

