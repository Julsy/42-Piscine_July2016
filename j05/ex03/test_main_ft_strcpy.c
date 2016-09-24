#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	int i;

	char str[] = "ABC";
	char str2[6];
	char str4[6];
	char *str5 = strcpy(str4, str);
	char *str3 = ft_strcpy(str2, str);

	printf("str2 %s\n", str2);
	printf("str4 %s\n", str4);
	printf("str3 %s\n", str3);
	printf("str5 %s\n", str5);
	i = 0;
	while (i < 6)
	{
		write(1, &str2[i], 1);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		write(1, &str4[i], 1);
		i++;
	}
	printf("\n");
	return (0);
}
