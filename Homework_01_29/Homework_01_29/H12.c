#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 4
#define COL 5
//寻找递增矩阵中的某个元素
//int d = 0;
//int search_num(int* p, int row, int col, int num)
//{
//	int a = row;
//	int b = 0;
//	for (int i = 0; i < row; i++)
//	{
//		if (*(p + i * col) > num)
//		{
//			a = i;
//			break;
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		if (*((p + col - 1) + i * col) < num)
//		{
//			b = i;
//			break;
//		}
//	}
//	for (int i = b; i < a; i++)
//	{
//		int left = 0;
//		int right = col - 1;
//		while (left < right)
//		{
//			int center = (left + right) / 2;
//			if (*(p + i * col + center) > num)
//				right = center - 1;
//			else if(*(p + i * col + center) < num)
//				left = center + 1;
//			else
//			{
//				printf("该数存在，下标为：%d %d\n", i, center);
//				d = 1;
//				break;
//			}
//		}
//		if (left == right && *(p + i * col + left) == num)
//		{
//			printf("该数存在，下标为：%d %d\n", i, left);
//			d = 1;
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][COL] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7, 4,5,6,7,8 };
//	int num = 0;
//	printf("请输入要查找的数字：");
//	scanf("%d", &num);
//	search_num(arr, ROW, COL, num);
//	if (d == 0)
//		printf("该数不存在...");
//	return 0;
//}