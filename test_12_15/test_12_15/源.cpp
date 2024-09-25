#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, max, i;
	scanf("%d %d", &a, &b);
	if (a >= b) {
		int i = b;
	}
	else
	{
		int i = a;
	}
		

	for (i; i != 0; i--)
	{
		if (a % i == 0 && b % i == 0) {
			int max = i;
			printf("%d", max);
			break;
		}
	}
	
	return 0;
}