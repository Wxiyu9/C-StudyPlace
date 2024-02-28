#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////二分查找
//int bin_search(int arr[], int sz, int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] > key)
//		{
//			right = middle - 1;
//		}
//		else if (arr[middle] == key)
//		{
//			return middle;
//		}
//		else 
//		{
//			left = middle + 1;
//		}
//	}
//	if (arr[left] == key)
//		return left;
//	else
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("输入你要寻找的数：");
//	scanf("%d", &key);
//	if (bin_search(arr, sz, key) == -1)
//	{
//		printf("未找到此数...");
//	}
//	else
//	{
//		printf("找到了，此数的下标为：%d", bin_search(arr, sz, key));
//	}
//	return 0;
//}
//#include <stdio.h>
//int Fact(int n)
//{
//	int num = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int result = Fact(n);
//	printf("%d", result);
//	return 0;
//}
//#include <stdio.h>
//int num = 0;//最少步数
//void Hanoi(int n, char A, char B, char C)//本质是将A移到C的函数
//{
//	if (n == 1)//限制条件：只有一个盘的情况
//	{
//		printf("%c-->%c\n", A, C);//将圆盘从A柱移动到C柱
//		num++;//每走一步加一
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);//将上方(n-1)个盘从A柱移动到B柱
//		printf("%c-->%c\n", A, C);//将第n个盘移动到C柱
//		num++;//每走一步加一
//		Hanoi(n - 1, B, A, C);//将上方(n-1)个盘从B柱移动到C柱
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入盘数：");
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	printf("最少需要%d步", num);
//	return 0;
//}
//#include <stdio.h>
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c ", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c ", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
 

//汉诺塔问题模拟
#include <stdio.h>
int num = 0;//最少步数
void Hanoi(int n, char A, char B, char C)//本质是将A移到C的函数
{
	if (n == 1)//限制条件：只有一个盘的情况
	{
		printf("%c-->%c\n", A, C);//将圆盘从A柱移动到C柱
		num++;//每走一步加一
	}
	else
	{
		Hanoi(n - 1, A, C, B);//将上方(n-1)个盘从A柱移动到B柱
		printf("%c-->%c\n", A, C);//将第n个盘移动到C柱
		num++;//每走一步加一
		Hanoi(n - 1, B, A, C);//将上方(n-1)个盘从B柱移动到C柱
	}
}
int main()
{
	int n = 0;
	printf("请输入盘数：");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("最少需要%d步", num);
	return 0;
}