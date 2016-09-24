int		ft_str_is_printable(char *str)
{
	while (str[0] != '\0') /* goes through every char in array till it reaches '\0' */ 
	{
		if ((str[0] >= 32) && (str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}