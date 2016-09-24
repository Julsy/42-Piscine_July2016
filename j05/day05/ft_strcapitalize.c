char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] >= 'a') && (str[i] <= 'z')) /* Check if it's the 1st letter in the array */
			str[i] = str[i] - 32;
		else if ((str[i] >= 'a') && (str[i] <= 'z') && ((str[i - 1] == ' ')) /* str[i + 2] will pick 3rd char in array */
			str[i] = str[i] - 32;
		i++;
	}
	return (0);
}
