#include <unistd.h>

int		match(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 3)
		return (0);
	i = match(argv[1], argv[2]);
	ft_putchar(i + '0');
	return (0);
}
