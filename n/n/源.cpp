#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	int n = 0;
	int m = 0;
	int j = 0;
	int t = 0;
	int q = 0;
	scanf("%d", &n);
	int number = n;
	char arr[1000][64];
	int arr1[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int u = 0; u < 64; u++)
		{
			scanf("%c", &arr[i][u]);
		}
		getchar();
	}
	for (j; j < n; j++)
	{
		for (int r = j + 1; r < n; r++)
		{
			int t = 0;
			for (int m = 0; m < 64; m++)
			{
				if (arr[j][m] == arr[r][m])
				{
					t++;
				}
			}
			if (t == 64)
			{
				arr1[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == 0)
			q++;
	}
	printf("%d", q);
	return 0;
}