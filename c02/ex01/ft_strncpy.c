char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int	is_end;

	is_end = 0;
	i = 0;
	while(i < n)
	{
		if(src[i] == '\0' || is_end)
		{
			dest[i] = '\0';
			is_end = 1;
		} else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char string[] = "Work!";
	char array[10];
	int	num;

	num = 6;
	ft_strncpy(array, string, num);
	printf("%s, %s", string, array);
	return (0);

}
