//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////打印n阶杨辉三角
//
////阶乘
//int Fac(int x)
//{
//	if (x == 0)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入阶数：");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			int num = Fac(i) / (Fac(j) * Fac(i - j));
//			printf("%d ", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}