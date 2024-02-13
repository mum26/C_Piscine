#include <unistd.h>

int	ft_print_comb2(void)
{
	char	buffer[7];
	int		i;
	int		j;

	buffer[5] = ',';
	buffer[6] = ' ';
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			buffer[0] = i / 10 + '0';
			buffer[1] = i % 10 + '0';
			buffer[2] = ' ';
			buffer[3] = j / 10 + '0';
			buffer[4] = j % 10 + '0';
			if (i == 98 && j == 99)
				buffer[5] = '\0';
			write(1, buffer, 6);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
