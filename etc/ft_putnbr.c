#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	char buffer[12];
	int	i;

	if (num == -2147483648)
		write(1, "-2147483648", 11);
	if (!num)
		write(1, "0", 1);
	i = 0;
	if(num < 0)
	{
		buffer[i++] = '-';
		num = -num;
	}
	while (0 < num)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}
	buffer[i] = '\0';
	if (buffer[0] == '-')
		ft_putchar(buffer[0]);
	while(0 < --i)
		ft_putchar(buffer[i]);
}

int	main(void)
{
	int num = 1191910;
	ft_putnbr(num);
}
