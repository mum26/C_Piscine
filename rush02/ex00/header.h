/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhashim <yuhashim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:35:19 by yuhashim          #+#    #+#             */
/*   Updated: 2024/02/24 13:35:25 by yuhashim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# define BUF_SIZE 10000
// 辞書作成用の構造体
typedef struct s_dict
{
	char	*key;
	char	*value;
	int		digit;
}	t_dict;

typedef struct s_di
{
	t_dict	*dict;
	int		is_first;
}	t_di;

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
char	*ft_strndup(char *src, int n);
char	*word_join(char *str1, char *str2, char *sep);
char	*concat(char *dest, char *str, char *sep);
char	*concat_1digit(char *dest, char *str, char *sep, t_di *di);
char	*concat_2digits(char *dest, char *str, char *sep, t_di *di);
char	*concat_3digits(char *dest, char *str, char *sep, t_di *di);
t_dict	*search_dict(char *key, int digit, t_dict *dict);
char	*trans(char *str, char *sep, t_dict *dict);
t_dict	*read_dict(const char *file_path, int *dict_size);
int		check_arg(char *arg);
int		check_dict(t_dict *dict);

char	*find_str_head(const char *str, int c);
int		count_digits(char *num);
int		find_invalid_key(t_dict *dict_arr, int num_line, char *key);
char	escape_space(char c);
char	*skip_space(char *str);
int		open_file(const char *file_path);
char	*read_file(int fd);
int		count_lines(const char *content);
char	*open_and_read_file(const char *file_path);

#endif
