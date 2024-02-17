#define NULL ((void *)0)

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == NULL)
		return (1);
	i = 0;
	while(str[i] != '\0')
	{
		if (!( ('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z') ))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int	is_alpha;
	char	string[16] = "";

	is_alpha = ft_str_is_alpha(string);
	if (is_alpha)
		printf("only alpha");
	else
		printf("not only alpha");
	return (0);
}
*/
