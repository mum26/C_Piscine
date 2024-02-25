#include <stdio.h>
int main(int argc, char **argv)
{
	int	i;
	i = 0;
	argv++;
	while (i++ < argc - 1)
		printf("%s\n", *argv++);
	return (0);
}
