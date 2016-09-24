char		*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int q;

	i = 0;
	q = 0;
	while (dest[i] != '\0') /* goes through every char in array till it reaches \0 to find its lengh */ 
		i++;
	while ((src[q] != '\0') && (q < nb)) /* q - place in the array, src[q] - value of the element */
	{
		dest[i] = src[q];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}

/* 
if dest = suslik\0
source = pika\0
nb = 2
output: suslikpi\0 