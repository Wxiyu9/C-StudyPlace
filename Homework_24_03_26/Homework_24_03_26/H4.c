#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//将一个整数的二进制位的奇数位和偶数位交换

#define SWAP(num) (num) = ((((num) & 0xAAAAAAAA) >> 1) | (((num) & 0x55555555) << 1))

//0xAAAAAAAA 是 1010 1010 1010 1010 1010 1010 1010 1010
//(num) & 0xAAAAAAAA 是将 num 的偶数位找到

//0x5555555555555555 是 0101 0101 0101 0101 0101 0101 0101 0101
//(num) & 0x55555555 是将 num 的奇数位找到

//将偶数位向右移一位，将奇数位向左移一位，然后通过或运算将他俩合并

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