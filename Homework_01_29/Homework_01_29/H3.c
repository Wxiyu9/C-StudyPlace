//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////Ã°ÅÝÉýÐò
//void my_bubble(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int b = 0;
//				b = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = b;
//			}
//		}
//	}
//}
//void my_print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 3,7,1,7,7,1,73,9,0,45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble(arr, sz);
//	my_print(arr, sz);
//	return 0;
//}