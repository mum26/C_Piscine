#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	int str_count;
	char str[] = "Hello!!";
	str_count = ft_strlen(str);
	printf("%s = %d", str, str_count);
	return (0);
}
*/

