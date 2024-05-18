#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////打印菱形图案
//#define N 13
//int unnum(int x)
//{
//	if (x >= 0)
//		return x;
//	else
//		return -x;
//}
//int main()
//{
//	char arr[N][N] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		for (int r = 0; r < N; r++)
//		{
//			arr[i][r] = '*';
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		int a = unnum(N / 2 - i);
//		for (int r = 0; r < a; r++)
//		{
//			arr[i][r] = ' ';
//			arr[i][N - r - 1] = ' ';
//		}
//
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int r = 0; r < N; r++)
//		{
//			printf("%c", arr[i][r]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int line = 7;
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 

//#include <stdio.h>
////加法函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;//输出x，y的和
//}
//int main()
//{
//	int a = 0, b = 0;
//	//输入
//	scanf("%d%d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//void Test(int x, int y)
//{
//	printf("x的地址为：%p\n", &x);
//	printf("x的值：%d\n", x);
//	printf("y的地址为：%p\n", &y);
//	printf("y的值：%d\n", y);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a的地址为：%p\n", &a);
//	printf("a的值：%d\n", a);
//	printf("b的地址为：%p\n", &b);
//	printf("b的值：%d\n", b);
//	Test(a, b);
//	return 0;
//}


 
//#include <stdio.h>
////判断是否为闰年
//int LeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
////判断天数
//int Day(int year, int month)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month];
//	if (LeapYear(year) && month == 2)//嵌套调用：在Day函数中调用了LeapYear函数
//		day++;
//	return day;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int d = Day(year, month);
//	printf("%d", d);
//	return 0;
//}
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 9;
//	int b = 4;
//	int num = Add(a, b);
//		printf("%d", num);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(int* p)
//{
//    int* p1 = p + 1;
//    return p1 - p;  //指针 - 指针
//}
//int main()
//{
//    int a = 0;
//    printf("%d", my_strlen(&a));
//    return 0;
//}
