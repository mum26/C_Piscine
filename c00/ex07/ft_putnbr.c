#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	buffer[12];
	int	sign;
	int	i;

	i = 0;
	if(nbr < 0)
		sign = 1;
	else
		sign = 0;
	if(nbr < 0)
	{
		buffer[i++] = '-';
		nbr = -nbr;
	}
	while(nbr > 0)
	{
		buffer[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	buffer[i] = '\0';
	if(buffer[0] == '-')
		write(1, &buffer[0], 1);
	while(sign <= i)
		write(1, &buffer[i--], 1);
}

int	main(void)
{
	int num;

	num = 42;
	ft_putnbr(num);
	return (0);
}
