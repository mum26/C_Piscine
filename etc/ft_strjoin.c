#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

int	ft_strlen(char *str)
{

	}

#include <string.h>

// 使用関数：strlen, strcat, memset

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	sep_len;
	int	len;
	int	i;

	sep_len = strlen(sep);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += strlen(strs[i]);
		if (i++ < size)
			len += sep_len;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_memset(result, '\0', size);
	i = 0;
	while (i < size)
	{
		strcat(result, strs[i++]);
		if (i < size)
			strcat(result, sep);
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char *strs[] = {"metyanko", "tukareta", ":D"};
	int	size;
	char *sep = " ";
	char *result;

	size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	return (0);
}
