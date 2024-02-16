char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char string[] = "Thank!";
	char array[10];

	ft_strcpy(array, string);
	printf("%s, %s", string, array);
	return (0);
}
*/
