#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//��һ�������Ķ�����λ������λ��ż��λ����

#define SWAP(num) (num) = ((((num) & 0xAAAAAAAA) >> 1) | (((num) & 0x55555555) << 1))

//0xAAAAAAAA �� 1010 1010 1010 1010 1010 1010 1010 1010
//(num) & 0xAAAAAAAA �ǽ� num ��ż��λ�ҵ�

//0x5555555555555555 �� 0101 0101 0101 0101 0101 0101 0101 0101
//(num) & 0x55555555 �ǽ� num ������λ�ҵ�

//��ż��λ������һλ��������λ������һλ��Ȼ��ͨ�������㽫�����ϲ�

int main()
{
	int a = 100;
	char arr[64];
	char arr2[64];
	printf("%d\n", a);
	_itoa(a, arr, 2);
	SWAP(a);
	_itoa(a, arr2, 2);
	printf("%d\n", a);
	printf("%s\n", arr);
	printf("%s\n", arr2);
	return 0;
}