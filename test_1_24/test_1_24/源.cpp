#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (x >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int num = Fib(n);
		printf("%d\n", num);
		printf("\n");
	}
	return 0;
}