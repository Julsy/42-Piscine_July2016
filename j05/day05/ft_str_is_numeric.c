int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /* goes through every char in array till it reaches \0 */ 
	{
		if (!((str[i] >= '0') && (str[i] <= '9'))) /* ! before brackets means NOT */
			return (0);
		i++;
	}
	return (1);
}