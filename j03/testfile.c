#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int a;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;

	a=0;

	ptr=&a;
	ptr2=&ptr;
	ptr3=&ptr2;
	ptr4=&ptr3;
	ptr5=&ptr4;
	ptr6=&ptr5;
	ptr7=&ptr6;
	ptr8=&ptr7;

	printf("%d", ********ptr8);

	********ptr8=42;

	printf("%d", a);
	return(0);
}
