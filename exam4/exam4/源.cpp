#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int q = 0;
	scanf("%d", &n);
	char name_arr[1000][11];
	int num_arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%11s", &name_arr[i]);
		scanf("%d", &num_arr[i]);
		getchar();
	}
	int max = 0;
	for (int i = 1; i < n; i++)
	{	
		if (num_arr[max] < num_arr[i])
		{
			max = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (num_arr[i] == num_arr[max])
			q++;
	}

	if (q > 1)
		printf("wake up, Third!\n");
	else
		printf("%s\n", name_arr[max]);
	return 0;
}