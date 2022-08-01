#include<stdio.h>
int main()
{	
	int a = 0;
	double b = 0.0;
	double c = 0.0;
	int i = 1;
	for (a = 1; a <= 100; a++)
	{
		c = 1.0 / a;
		b = b + c * i;
		i = -i;
	}
	printf("%f\n", b);
	return 0;
}