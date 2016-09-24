nclude <stdio.h>

int main(void)
{
	int a,b;

	a=3;
	b=15;

	printf("%d, %d\n", a, b);

	ft_swap(&a, &b);

	printf("%d, %d\n", a, b);

	return(0);
}
