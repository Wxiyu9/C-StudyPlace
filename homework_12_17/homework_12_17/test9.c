//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////初始化数组
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
////打印数组
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////逆置数组
//void reverse(int arr[], int sz)
//{
//	for (int i = 0; i <= (sz - 1) / 2; i++)
//	{
//		int a = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = a;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}