#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	int arr[1000][4] = { 0 };
	int arr1[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int u = 0; u < 4; u++)
		{
			scanf("%d", &arr[i][u]);
			getchar();
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int u = 0; u < 4; u++)
		{
			if (arr[i][u] > 255 || arr[i][u] < 0)
			{
				arr1[i] = 1;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == 0)
			num++;
	}
	printf("%d", num);
	return 0;
}