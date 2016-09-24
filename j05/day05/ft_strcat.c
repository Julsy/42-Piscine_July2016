char		*ft_strcat(char *dest, char *src)
{
	int i;
	int q;

	i = 0;
	q = 0;
	while (dest[i] != '\0') /* goes through every char in array till it reaches \0 to find its lengh */ 
		i++;
	while (src[q] != '\0')
	{
		dest[i] = src[q]; /* adds src array to the dest array, \0 stays at the end of the sourse */
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}

/* 
if dest = suslik\0
source = pika\0
output: suslikpika\0 