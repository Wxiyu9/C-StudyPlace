#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�жϵ�ǰ�����Ǵ���ֽ�����С���ֽ���

int Fun()
{
	int a = 1;
	if ((char)a)
		return 1;
	else
		return 0;
}
int main()
{
	printf("%d", Fun());
	return 0;
}