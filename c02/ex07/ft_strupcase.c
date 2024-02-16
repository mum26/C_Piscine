#define NULL ((void *)0)

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while(str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char string[] = "Hello!!";
	ft_strupcase(string);
	printf("%s", string);
	return (0);
}
*/
