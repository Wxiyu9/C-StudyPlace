#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int t = 0;
	int arr[1000] = { 0 };
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < t; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i] * arr[i] - arr[i] + 2);
		else
			printf("1 ");
	}
	return 0;
}