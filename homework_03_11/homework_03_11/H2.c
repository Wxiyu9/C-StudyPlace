//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////模拟实现strstr函数
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* p1 = (char *)str1;
//	char* s1, * s2;
//	if (!*str2)
//		return (char *)str1;
//	while (*p1)
//	{
//		s1 = p1;
//		s2 = (char *)str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return p1;
//		p1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = { "abccccdefg" };
//	char str2[] = { "cdef" };
//	char* ret = my_strstr(str1, str2);
//	printf("%s", ret);
//	return 0;
//}
 
// 
// 
// 
//#include <stdio.h>
////函数地址 -- &Add
////函数地址 -- Add
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("&Add = %p\n", &Add);
//	printf("Add  = %p\n", Add);
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	int i = 0;
//	char str[] = "I am SuperMan";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (islower(c))
//			str[i] = toupper(c);
//		i++;
//	}
//	printf("%s", str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = "I am a student.";
//	char str2[10] = { 'I', 'a', 'm', '\0' };
//	printf("str1->%d\n", strlen(str1));
//	printf("str2->%d\n", strlen(str2));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = "I am wwangxu";
//	printf("strcpy(str1, str2)->%s\n", strcpy(str1, str2));
//	printf("str1->%s\n", str1);
//	printf("str2->%s\n", str2);
//	return 0;
//}


//
//int main()
//{
//	char str1[20] = "And I am a boy.";
//	char str2[40] = "I am wwangxu.";
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	strcat(str2, str1);
//	printf("追加后\n");
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	return 0;
//}
 
 
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = "I am wwangxu.";
//	char str2[20] = "I am awangxu.";
//	char str3[20] = "I am zwangxu.";
//	char str4[20] = "I am wwangxu.";
//	printf("str1与str2比较结果：%d\n", strcmp(str1, str2));
//	printf("str1与str3比较结果：%d\n", strcmp(str1, str3));
//	printf("str1与str4比较结果：%d\n", strcmp(str1, str4));
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = "I am awangxu.";
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	strncpy(str1, str2, 20);
//	printf("拷贝后\n");
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = "And I am a boy.";
//	char str2[40] = "I am wwangxu.";
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	strncat(str2, str1, 5);
//	printf("追加后\n");
//	printf("str1 -> %s\n", str1);
//	printf("str2 -> %s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = "I am wwangxu.";
//	char str2[20] = "I am wwangxa.";
//	char str3[20] = "I aa wwangxu.";
//	char str4[20] = "I az wwangxu.";
//	printf("str1与str2比较结果：%d\n", strncmp(str1, str2, 5));
//	printf("str1与str3比较结果：%d\n", strncmp(str1, str3, 5));
//	printf("str1与str4比较结果：%d\n", strncmp(str1, str4, 5));
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "I am wwangxu.";
//	char* pch;
//	pch = strstr(str, "wwangxu");
//	strncpy(pch, "wwangfu", 7);
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "192.155.23.54";
//	char* delim = ".";
//	char* str = NULL;
//	for (str = strtok(arr, delim); str != NULL; str = strtok(NULL, delim))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr,arr + 5, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "I am wwangxu.";
//	printf("%s\n", str);
//	memset(str, '*', 5);
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[] = "I am wwangxu";
//	char str2[] = "I am not wwangxu";
//	printf("str1和str2比较4个字节的结果：%d\n", memcmp(str1, str2, 4));
//	printf("str1和str2比较6个字节的结果：%d\n", memcmp(str1, str2, 6));
//	printf("str2和str1比较6个字节的结果：%d\n", memcmp(str2, str1, 6));
//	return 0;
//}

//#include <stdio.h>
//int check()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//结构体类型创建
//struct Student
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//};
//
//int main()
//{
//	结构体变量的创建和初始化
//	struct Student a = { "张三", 20, "男", "20232022" };
//	创建了类型为struct Student的变量a
//	return 0;
//}

//struct Student
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}a, b, c;//结构体变量创建
//
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//struct Text
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Text p = { 1,2 };
//	printf("x:%d\ny:%d\n", p.x, p.y);
//	//p.x访问成员x
//	//p.y访问成员y
//	return 0;
//}
//
//#include <stdio.h>
//
//struct Text
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Text p = { 1,2 };
//	struct Text* pp = &p;
//	pp->x = 4;
//	(*pp).y = 5;
//		printf("x=%d\ny=%d\n", pp->x, pp->y);
//	return 0;
//}
//
//#include <stdio.h>
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//
//#include <stdio.h>
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d1;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	int data[100];
//	int num;
//};
////传值调用
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////传址调用
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { { 1,2,3,4 }, 30 };
//	print1(s);
//	print2(&s);
//}
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;//二进制：1010
//	s.b = 12;//二进制：1100
//	s.c = 3;//二进制：11
//	s.d = 4;//二进制：100
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//scanf("%d", &s.a)//这是错误的
//
//	//正确用法
//	int i = 0;
//	scanf("%d", &i);
//	s.a = i;
//	printf("%d", s.a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float B = 26941.0;
//	float U = 0.0;
//	float pi = 3.1415926;
//	float D = 0.06796;
//	while (scanf("%f", &U) != EOF)
//	{
//		float a = B * pi * D;
//		float b = U / a;
//		printf("%f\n", b);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//union Un
//{
//	short a[6];
//	int o;
//	int b;
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(union Un));
//	printf("%p\n%p", (&u.a), (&u.i));
//	return 0;
//}