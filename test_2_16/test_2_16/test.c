#include <stdio.h>
//�ӷ�����
int Add(int x, int y)
{
	int z = x + y;
	return z;//���x��y�ĺ�
}
int main()
{
	int a = 0, b = 0;
	//����
	scanf("%d%d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}