int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	is_alpha = 1;
	i = 0;
	while(str[i] != '\0' && is_alpha)
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
	char	string[16] = "Hell";

	is_alpha = ft_str_is_alpha(string);
	if (is_alpha)
		printf("only alpha");
	else
		printf("not only alpha");
	return (0);
}
*/
