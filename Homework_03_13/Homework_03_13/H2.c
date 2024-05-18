//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
////模拟实现strncat
//char* my_strncat(char* dest, const char* sor, size_t num)
//{
//	assert(dest && sor);
//	char* str = dest;
//	while (*(++dest));
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*(dest + i) = *(sor + i);
//	}
//	*(dest + num) = '\0';
//	return str;
//}
//int main()
//{
//	char str1[20] = "I am big";
//	char str2[20] = "world apple";
//	my_strncat(str1, str2, 7);
//	printf("%s\n", str1);
//	return 0;
//}

#if 0
//int Fun(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return Fun(x - 1) * x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fun(n);
//	printf("!%d = %d\n", n, ret);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[256] = { 0 };
//	int* p = (int*)malloc(num * sizeof(int));//动态内存申请
//	if (p == NULL)//判断是否申请成功
//		return 1;
//	int i = 0;
//	//使用动态内存
//	for (i = 0; i < num; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放内存
//	free(p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
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
//#include <stdlib.h>
//
//int main()
//{
//	//申请动态内存
//	int* ptr = (int*)malloc(100);
//	
//	//判断是否申请成功
//	if (ptr == NULL)
//		return 1;
//	
//	//使用申请的空间
//	//...
//
//	//调整动态内存大小
//	
//	//1.直接使用待调整地址接收返回值
//	ptr = realloc(ptr, 200);
//
//	//2.使用中间变量接收返回值
//	int* p = (int*)realloc(ptr, 300);
//	if (p == NULL)//判断是否调整成功
//		return 1;
//	ptr = p;
//	return 0;
//}
//#include <stdlib.h>
//void test1()
//{
//	int* p = (int*)malloc(40);
//	//若开辟失败，则返回空指针，没有进行判断就直接解引用
//	*p = 2;
//	free(p);
//}
//void test2()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//只能存放五个整型，所以越界访问了
//	*(p + 5) = 3;
//	free(p);
//}
//void test3()
//{
//	int a = 0;
//	int* p = &a;
//	//非动态开辟内存
//	free(p);
//}
//int main()
//{
//	test3();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Sarr
//{
//	int i;
//	int a[0];
//};
//
//int main()
//{
//	struct Sarr* p = (struct Sarr*)malloc(sizeof(struct Sarr) + 20 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		p->a[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p->a[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Sarr
//{
//	int i;
//	int* p_a;
//};
//
//int main()
//{
//	//给变量p开辟结构体大小的空间
//	struct Sarr* p = (struct Sarr*)malloc(sizeof(struct Sarr));
//	//指定数组大小
//	p->i = 20;
//	//给数组开辟空间
//	p->p_a = (struct Sarr*)malloc(p->i * sizeof(int));
//	int i = 0;
//	//使用数组
//	for (i = 0; i < 20; i++)
//	{
//		p->p_a[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p->p_a[i]);
//	}
//	//释放动态内存
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}

#include <stdio.h>

struct Sarr
{
	int i;
	int a[0];
	//或者int a[];
};

int main()
{
	printf("%zd\n", sizeof(struct Sarr));
	return 0;
}
#endif