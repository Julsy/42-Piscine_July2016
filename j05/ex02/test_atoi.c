#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char *str = "-123nakjn";

	printf("1: %d\n", atoi(str));
	printf("2: %d\n", ft_atoi(str));
	return (0);
}