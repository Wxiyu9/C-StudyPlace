#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//找凶手
//0假话 1真话
int main()
{
	char killer = 'A';
	for (killer; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
			printf("凶手是%c", killer);
	}
	return 0;
}