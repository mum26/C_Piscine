#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	is_revs;
	int	i;

	is_revs = 1;
	while(is_revs)
	{
		is_revs = 0;
		i = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				is_revs = 1;
			}
			i++;
		}
	}
}

int	main(void)
{
	int	array[] = {9, 2, 10, 6, 9999};
	int	size = 5;

	ft_sort_int_tab(array, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
	return (0);
}
