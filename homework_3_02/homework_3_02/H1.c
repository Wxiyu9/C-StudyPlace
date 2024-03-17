//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <stdio.h>
////比较整型
//int compare_int(const void* x, const void* y)
//{
//	return *((int*)x) - *((int*)y);
//}
//
////比较字符
//int compare_char(const void* x, const void* y)
//{
//	return *((char*)x) - *((char*)y);
//}
//
////比较浮点数
//int compare_float(const void* x, const void* y)
//{
//	return *((float*)x) - *((float*)y);
//}
//
//int main()
//{
//	int Int[] = { 1,6,3,7,3,2,5,9,22,42 };
//	char Char[] = "adfsacv";
//	float Float[] = { 1.3, 4.4, 23.5, 35.6 };
//	int sz_int = sizeof(Int) / sizeof(Int[0]);
//	int sz_char = sizeof(Char) / sizeof(Char[0]);
//	int sz_float = sizeof(Float) / sizeof(Float[0]);
//	qsort(Int, sz_int, sizeof(int), compare_int);
//	qsort(Char, sz_char, sizeof(char), compare_char);
//	qsort(Float, sz_float,sizeof(float), compare_float);
//	return 0;
//}