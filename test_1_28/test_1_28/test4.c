#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 0;
//
//	while (scanf("%d", &a) != EOF)
//	{
//		int Sn = 0;
//		for (int i = 0; i < 5; i++)
//			Sn += pow(10, i) * a * (5 - i);
//		printf("%d\n", Sn);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int fun1(int *p)
//{
//	int a00 = *p;
//	int a01 = *(p + 1);
//	int a02 = *(p + 2);
//	int a10 = *(p + 3);
//	int a11 = *(p + 4);
//	int a12 = *(p + 5);
//	int a20 = *(p + 6);
//	int a21 = *(p + 7);
//	int a22 = *(p + 8);
//	int num = a00 * a11 * a22 + a01 * a12 * a20 + 
//		a10 * a21 * a02 - a20 * a11 * a02 - 
//		a21 * a12 * a00 - a10 * a01 * a22;
//	return num;
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int res = fun1(arr);
//	printf("%d\n", res);
//	return 0;
//}
//
//#include <stdio.h>
////输入函数 
//void Input(int arr[256], int n)
//{
//	printf("请输入数组>>");
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
////选择法排序函数
//void Sort(int arr[256], int n)
//{
//	int i = 0;
//	int q = 0;
//	for (i; i < n - 1; i++)
//	{
//		int max = arr[i];
//		int j = i + 1;
//		for (j; j < n; j++)
//		{
//			if (arr[j] > max)
//			{
//				max = arr[j];
//				q = j;
//			}
//		}
//		if (arr[i] != max)
//		{
//			int a = arr[i];
//			arr[i] = arr[q];
//			arr[q] = a;
//		}
//
//	}
//}
////输出函数 
//void Print(int arr[256], int n)
//{
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[256];
//	int n = 0;
//	printf("你要输入几个数？>>");
//	scanf("%d", &n);
//	Input(arr, n);
//	Sort(arr, n);
//	Print(arr, n);
//	return 0;
//}

//自定义函数实现对一个有序数组进行插入操作，保证插入后的数组依然有序。主函数调用。
//要求：1）共自定义2个函数，分别对数组进行插入和输出。
//2）数组、待插数据在主函数中定义和赋值。

//#include <stdio.h>
////插入数据
//void Inter(int arr[10], int size, int n)
//{
//	arr[size - 1] = n;
//	int i = 0;
//	for (i; i < size - 1; i++)
//	{
//		int j = 0;
//		for (j; j < size - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//
////输出函数
//void Print(int arr[10], int size)
//{
//	int i = 0;
//	for (i; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
// }
//int main()
//{
//	int arr[10] = { 2,3,4,5,6,7,8,9,11 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要插入的数据：");
//	int n = 0;
//	scanf("%d", &n);
//	Inter(arr, size, n);
//	Print(arr, size);
//	return 0;
//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	//指针数组，每个元素都是一个指向一维数组的地址
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			//可理解为(parr[i])[j]
//			//例如parr[1][3]
//			//parr[1][3] == (parr[1])[3] == arr2[3] == 5
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char str1[] = "hellw world!";
//	char str2[] = "hellw world!";
//	const char* str3 = "hellw world!";
//	const char* str4 = "hellw world!";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//#include <stdio.h>
//void Print(int arr[2][3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[2][3] = { {1,2,3}, {2,3,4}};
//	Print(arr, 2, 3);
//	return 0;
//}
//#include <stdio.h>
//
//void Print(int(*p)[3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[2][3] = { {1,2,3}, {2,3,4} };
//	Print(arr, 2, 3);
//	return 0;
//}
//#include <stdio.h>
////函数地址 -- &Add
////函数地址 -- Add
////函数类型 -- int (int x, inty)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数指针变量定义
//	int (*p1)(int, int) = Add;
//	//函数指针变量使用
//	printf("%d\n", (*p1)(3, 4));
//	printf("%d\n", p1(5, 1));
//	return 0;
//}

////计算器的一般实现
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf("   1:add         2:sub   \n");
//		printf("   3:mul         4:div   \n");
//		printf("     0:exit              \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*arr[5])(int, int) = { 0, add, sub, mul, div };
//	do
//	{
//		printf("*************************\n");
//		printf("   1:add         2:sub   \n");
//		printf("   3:mul         4:div   \n");
//		printf(" 0:exit                  \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("输入操作数：");
//			scanf("%d%d", &x, &y);
//			ret = *(arr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("程序退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}

#include <stdio.h>
//函数地址 -- &Add
//函数地址 -- Add
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("&Add = %p\n", &Add);
	printf("Add  = %p\n", Add);
	return 0;
}