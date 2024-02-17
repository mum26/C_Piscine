#define NULL ((void *)0)

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while(str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int	is_lower;
	char	string[16] = "A";

	is_lower = ft_str_is_alpha(string);
	if (is_lower)
		printf("only lower");
	else
		printf("not only lower");
	return (0);
}
*/
