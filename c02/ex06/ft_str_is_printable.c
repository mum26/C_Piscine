#define NULL ((void *)0)

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while(str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
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
	char	string[16] = "Hello, World\n";

	is_lower = ft_str_is_printable(string);
	if (is_lower)
		printf("only print char");
	else
		printf("not only print char");
	return (0);
}
*/
