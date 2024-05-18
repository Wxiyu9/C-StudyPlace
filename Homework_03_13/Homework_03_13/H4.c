//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
////Ä£ÄâÊµÏÖmemmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest <= src || (char*)dest >= (char*)src + count)
//	{
//		int i = 0;
//		char* dest1 = (char*)dest;
//		char* src1 = (char*)src;
//		for (i = 0; i < count; i++)
//			*(dest1 + i) = *(src1 + i);
//	}
//	else
//	{
//		(char*)dest = (char*)dest + count - 1;
//		(char*)src = (char*)src + count - 1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			(char*)dest = (char*)dest - 1;
//			(char*)src = (char*)src - 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}