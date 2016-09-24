int		main(int argc, char **argv)
{
	int i;

	i = 1; /* i=0 is a position of a program name */
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}

}