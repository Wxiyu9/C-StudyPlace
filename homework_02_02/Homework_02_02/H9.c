#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ÕÒµ¥Éí¹·2
void search(int* arr, int sz)
{
	int sea[256] = { 0 };
	for (int i = 0; i < sz; i++)
	{
		if (sea[i] == 1)
		{
			continue;
		}
		else
		{
			for (int j = 0; j < sz; j++)
			{
				if (i != j)
				{
					if (arr[i] == arr[j])
					{
						sea[i] = 1;
						sea[j] = 1;
					}
				}

			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (sea[i] == 0)
			printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,5,4,3,2,1,8,9,33,22,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	search(arr, sz);
	return 0;
}