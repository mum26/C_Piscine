#define NULL ((void *)0)

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while(str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}


#include <stdio.h>
int	main(void)
{
	char string[] = "ABCDEFGXYZ";
	ft_strupcase(string);
	printf("%s", string);
	return (0);
}
