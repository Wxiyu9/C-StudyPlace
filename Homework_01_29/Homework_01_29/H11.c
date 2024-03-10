//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////判断一个字符串是否为另一个字符串左旋产生的，是为1，否为0
//void my_print(char* p, int sz)
//{
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%c ", *(p + a));
//	}
//	printf("\n");
//}
//int Str(char* p1, char* p2, int sz)
//{
//	int result = 0;
//	int j = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		if (*(p1 + i) == *(p2 + j))
//		{
//			result++;
//			j++;
//		}
//		else
//			result = 0;
//	}
//	int c = result;
//	for (int b = 0; b < sz - c - 1; b++)
//	{
//		if (*(p1 + b) == *(p2 + b + c))
//		{
//			result++;
//		}
//		else
//			result = 0;
//	}
//	if (result == sz - 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char s1[] = { "I am a bug" };
//	char s2[] = { "bugI am a " };
//	int sz1 = sizeof(s1) / sizeof(s1[0]);
//	int sz2 = sizeof(s2) / sizeof(s2[0]);
//	if (sz1 == sz2)
//	{
//		printf("%d ", Str(s1, s2, sz1));
//	}
//	else
//		printf("%d", 0);
//	return 0;
//}