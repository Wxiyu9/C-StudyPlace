//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
////Ä£ÄâÊµÏÖmemcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	int i = 0;
//	char* dest1 = (char*)dest;
//	char* src1 = (char*)src;
//	for (i = 0; i < count; i++)
//	{
//		*(dest1 + i) = *(src1 + i);
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,11,11,11,11,11 };
//	my_memcpy(arr1, arr2, 16);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}