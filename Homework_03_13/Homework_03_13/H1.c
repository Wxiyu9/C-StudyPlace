//#define _CRT_SECURE_NO_WARNINGS 1
////模拟实现strncpy函数
//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest != NULL && src != NULL);
//	char *ret = dest;
//	size_t i = 0;
//	int o = 0;
//	for (i; i < count; i++)
//	{
//		if (*(src + i) == '\0')
//			o = 1;
//		if (o == 0)
//		{
//			*(dest + i) = *(src + i);
//		}
//		else
//			*(dest + i) = 0;
//	}
//	*(dest + i) = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[] = "I have a pen";
//	my_strncpy(str1, str2, 8);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}