//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////Ä£ÄâÊµÏÖatoi
//int my_atoi(const char * str)
//{
//	int num = 0;
//	int mi = 0;
//	int arr[255] = { 0 };
//	while (*str)
//	{
//		if (mi != 0 && !(*str > 48 && *str < 58))
//			break;
//		if (*str > 48 && *str < 58)
//		{
//			arr[mi] = (int)(*str) - 48;
//			mi++;
//		}
//		str++;
//	}
//	int i = 0;
//	int o = 1;
//	for (i = 0; i < mi; i++)
//	{
//		num = arr[mi - i - 1] * o + num;
//		o *= 10;
//	}
//	return num;
//}
//int main(void)
//{
//	printf("%i\n", my_atoi(" 123junk"));
//	printf("%i\n", my_atoi("0"));
//	printf("%i\n", my_atoi("0042"));
//	printf("%i\n", my_atoi("0x2A")); 
//	printf("%i\n", my_atoi("junk")); 
//	return 0;
//}