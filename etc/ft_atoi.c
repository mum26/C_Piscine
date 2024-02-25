#include <ctype.h>
int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	while (isspace(*str))
		str++;
	sign = 1;
	while(*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "\n\t+++----+++----12345adr67890";
	printf("%d", ft_atoi(str));
	return (0);

}
