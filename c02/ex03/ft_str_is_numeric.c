#define NULL ((void *)0)

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str == NULL)
		return (1);
	i = 0;
	while(str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int	is_num;
	char	string[16] = "";

	is_num = ft_str_is_numeric(string);
	if (is_num)
		printf("only number");
	else
		printf("not only number");
	return (0);
}
*/
