#include <stdio.h>
//加法函数
int Add(int x, int y)
{
	int z = x + y;
	return z;//输出x，y的和
}
int main()
{
	int a = 0, b = 0;
	//输入
	scanf("%d%d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}