#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while(i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
int	main(void)
{
	int	array[7] = {1, 2, 3, 4, 5, 6, 7};
	int	size = 7;

	ft_rev_int_tab(array, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	return (0);
}
*/
