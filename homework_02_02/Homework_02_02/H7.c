//#define _CRT_SECURE_NO_WARNINGS 1
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
//	int (*arr[5])(int, int) = { 0, add, sub, mul, div };//转移表，将函数指针存放进数组中
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
//			ret = (*(arr[input]))(x, y);//调用函数指针数组中的元素
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
