#define NULL ((void *)0)

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while(str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
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
	char	string[16] = "";

	is_lower = ft_str_is_alpha(string);
	if (is_lower)
		printf("only upper");
	else
		printf("not only upper");
	return (0);
}
*/
