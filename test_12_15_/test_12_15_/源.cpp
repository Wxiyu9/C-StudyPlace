#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
////计算公约数
//int main()
//{
//	int a, b, max, i;
//	scanf("%d %d", &a, &b);
//	if (a >= b) {
//		i = b;
//	}
//	else
//	{
//		i = a;
//	}
//
//
//	for (i; i != 0; i--)
//	{
//		if (a % i == 0 && b % i == 0) {
//			int max = i;
//			printf("%d", max);
//			break;
//		}
//	}
//	return 0;
//}
////打印素数
//#include<stdio.h>
//#include<math.h>
//int num(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int n = 100; n <= 200; n++)
//	{
//		if (num(n) == 1)
//			printf("%d ", n);
//	}
//	return 0;
//}
int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        char arr[20][20] = { ' ' };
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = ' ';
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i][i] = '*';
            arr[i][n - i - 1] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}