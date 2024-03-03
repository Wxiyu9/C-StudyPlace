#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//调整奇数偶数顺序
int* AdjustPosition(int* p, int sz)
{
	int adjust[10000] = { 0 };
	int n = 0;
	int m = sz - 1;
	for (int i = 0; i < sz; i++)
	{
		if (*(p + i) % 2 == 1)
		{
			adjust[n] = *(p + i);
			n++;
		}
		else
		{
			adjust[m] = *(p + i);
			m--;
		}
	}
	return adjust;
}
void Print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 11,26,35,47,58,69,75,832,94,101 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = AdjustPosition(arr, sz);
	Print(p, sz);
	return 0;
}