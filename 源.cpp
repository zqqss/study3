#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int aa = a;
		 a = b;
		 b = aa;
     }
	if (a < c)
	{
		int bb = a;
		a = c;
		c = bb;
     }
	if (b < c)
	{
		int cc = b;
		b = c;
		c = cc;
	 }
	printf("%d %d %d", a, b, c);
	return 0;
}