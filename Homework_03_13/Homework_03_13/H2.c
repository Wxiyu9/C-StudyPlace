//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
////ģ��ʵ��strncat
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
//	int* p = (int*)malloc(num * sizeof(int));//��̬�ڴ�����
//	if (p == NULL)//�ж��Ƿ�����ɹ�
//		return 1;
//	int i = 0;
//	//ʹ�ö�̬�ڴ�
//	for (i = 0; i < num; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ��ڴ�
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
//	//���붯̬�ڴ�
//	int* ptr = (int*)malloc(100);
//	
//	//�ж��Ƿ�����ɹ�
//	if (ptr == NULL)
//		return 1;
//	
//	//ʹ������Ŀռ�
//	//...
//
//	//������̬�ڴ��С
//	
//	//1.ֱ��ʹ�ô�������ַ���շ���ֵ
//	ptr = realloc(ptr, 200);
//
//	//2.ʹ���м�������շ���ֵ
//	int* p = (int*)realloc(ptr, 300);
//	if (p == NULL)//�ж��Ƿ�����ɹ�
//		return 1;
//	ptr = p;
//	return 0;
//}
//#include <stdlib.h>
//void test1()
//{
//	int* p = (int*)malloc(40);
//	//������ʧ�ܣ��򷵻ؿ�ָ�룬û�н����жϾ�ֱ�ӽ�����
//	*p = 2;
//	free(p);
//}
//void test2()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//ֻ�ܴ��������ͣ�����Խ�������
//	*(p + 5) = 3;
//	free(p);
//}
//void test3()
//{
//	int a = 0;
//	int* p = &a;
//	//�Ƕ�̬�����ڴ�
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
//	//������p���ٽṹ���С�Ŀռ�
//	struct Sarr* p = (struct Sarr*)malloc(sizeof(struct Sarr));
//	//ָ�������С
//	p->i = 20;
//	//�����鿪�ٿռ�
//	p->p_a = (struct Sarr*)malloc(p->i * sizeof(int));
//	int i = 0;
//	//ʹ������
//	for (i = 0; i < 20; i++)
//	{
//		p->p_a[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p->p_a[i]);
//	}
//	//�ͷŶ�̬�ڴ�
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
	//����int a[];
};

int main()
{
	printf("%zd\n", sizeof(struct Sarr));
	return 0;
}
#endif