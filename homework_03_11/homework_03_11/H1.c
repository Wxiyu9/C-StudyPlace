#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////模拟实现strcmp函数
//
int my_strcmp(char p1[], char p2[])
{
	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	if (*p1 == '\0' && *p2 == '\0')
		return 0;
	else if (*p1 > *p2)
		return 1;
	else
		return -1;
}
int main()
{
	char s1[] = "abcd";
	char s2[] = "abcd";
	char s3[] = "abbd";
	char s4[] = "abed";
	printf("%d\n", my_strcmp(s1, s2));
	printf("%d\n", my_strcmp(s1, s3));
	printf("%d\n", my_strcmp(s1, s4));
	return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(10, sizeof(int));
//	if (p == NULL)
//		return 1;
//	*p = 2;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	FILE* pf;
//	//打开文件
//	pf = fopen("test.txt", "r");
//	//判断是否打开成功
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//使用文件
//	
//	//写入数据
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//fwrite(arr, sizeof(int), sz, pf);
//
//	// 读取文件內容
//	fread(arr2, sizeof(int), 5, pf);
//	
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//};
//int main()
//{
//	struct Stu s;
//	FILE* pf;
//	//打开文件
//	pf = fopen("test.txt", "r");
//
//	//判断是否打开成功
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//使用文件 - 从文件中读取数据并赋值给实参
//	fscanf(pf, "%s %s %d", s.name, s.sex, &(s.age));
//	printf("%s %s %d", s.name, s.sex, s.age);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char str[30];
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//验证是否打开成功
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写入
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//判断读取结束的原因
//	if (feof(pf))
//	{
//		printf("遇到文件末尾，读取正常结束\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");//读取失败，异常结束，报错
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////定义常量
//#define MAX 1000
////为 register 关键字起一个简短的名字
//#define reg register	
////用更形象的符号来替换一种实现
//#define do_forever for(;;)  
////若定义的 stuff 过长，可将內容分
////为几行写，每行最后通过续行符\连接
//#define DEBUG_PRINT printf("file:%s\nline:%d \
//							\ndate:%s\ntime:%s\n",\
//							__FILE__,__LINE__,\
//							__DATE__,__TIME__)
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", MAX);
//	DEBUG_PRINT;
//	return 0;
//}

//#include <stdio.h>
//#define SQUARE( x ) x * x
//
//int main()
//{
//	int a = 2;
//	int b = SQUARE(a + 1);
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 9;
//	//scanf("%d", &a);
//#if a > 5
//	printf("hello");
//#elif a == 5
//	printf("world");
//#else
//	printf("haha");
//#endif
//	return 0;
//}
