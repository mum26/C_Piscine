#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 33;
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}
*/
