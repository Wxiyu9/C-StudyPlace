#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��ӡ����ͼ��
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
////�ӷ�����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;//���x��y�ĺ�
//}
//int main()
//{
//	int a = 0, b = 0;
//	//����
//	scanf("%d%d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//void Test(int x, int y)
//{
//	printf("x�ĵ�ַΪ��%p\n", &x);
//	printf("x��ֵ��%d\n", x);
//	printf("y�ĵ�ַΪ��%p\n", &y);
//	printf("y��ֵ��%d\n", y);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a�ĵ�ַΪ��%p\n", &a);
//	printf("a��ֵ��%d\n", a);
//	printf("b�ĵ�ַΪ��%p\n", &b);
//	printf("b��ֵ��%d\n", b);
//	Test(a, b);
//	return 0;
//}


 
//#include <stdio.h>
////�ж��Ƿ�Ϊ����
//int LeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
////�ж�����
//int Day(int year, int month)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month];
//	if (LeapYear(year) && month == 2)//Ƕ�׵��ã���Day�����е�����LeapYear����
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
//    return p1 - p;  //ָ�� - ָ��
//}
//int main()
//{
//    int a = 0;
//    printf("%d", my_strlen(&a));
//    return 0;
//}
