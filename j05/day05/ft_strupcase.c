char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /* goes through every char in array till it reaches \0 */ 
	{
		if (str[i] >= 'a') && (str[i] <= 'z') /* if char is an alphabetical letter in lowercase - it will be transformed to uppercase */
			str[i] = str[i] - 32; /* between a and A in ASCII table is 32 symbols. 1st goes BIG letters */
		i++;
	}
	return (str);
}