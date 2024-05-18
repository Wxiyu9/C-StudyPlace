//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////交换函数
//void swap(void * x, void * y, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		char* p1 = (char*)x;
//		char* p2 = (char*)y;
//		char p3 = *(p1 + i);
//		*(p1 + i) = *(p2 + i);
//		*(p2 + i) = p3;
//	}
//}
////整型比较函数
//int compare_int(const void* x, const void* y)
//{
//	return (*((int*)x) - *((int*)y));
//}
////模拟qsort函数
//void my_bubble(void* p, int sz, int a, int (*compare) (const void*, const void*))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (compare((char*)p + a * j, (char*)p + a * (j + 1)) > 0)
//			{
//				swap((char*)p + a * j, (char*)p + a * (j + 1), a);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,5,3,57,9,436,956,3,4,7,48 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble(arr, sz, sizeof(int), compare_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}