#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////ģ��ʵ��strcmp����
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
//	//���ļ�
//	pf = fopen("test.txt", "r");
//	//�ж��Ƿ�򿪳ɹ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//ʹ���ļ�
//	
//	//д������
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//fwrite(arr, sizeof(int), sz, pf);
//
//	// ��ȡ�ļ�����
//	fread(arr2, sizeof(int), 5, pf);
//	
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	//�ر��ļ�
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
//	//���ļ�
//	pf = fopen("test.txt", "r");
//
//	//�ж��Ƿ�򿪳ɹ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//ʹ���ļ� - ���ļ��ж�ȡ���ݲ���ֵ��ʵ��
//	fscanf(pf, "%s %s %d", s.name, s.sex, &(s.age));
//	printf("%s %s %d", s.name, s.sex, s.age);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//��֤�Ƿ�򿪳ɹ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д��
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//�ж϶�ȡ������ԭ��
//	if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����ȡ��������\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");//��ȡʧ�ܣ��쳣����������
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////���峣��
//#define MAX 1000
////Ϊ register �ؼ�����һ����̵�����
//#define reg register	
////�ø�����ķ������滻һ��ʵ��
//#define do_forever for(;;)  
////������� stuff �������ɽ����ݷ�
////Ϊ����д��ÿ�����ͨ�����з�\����
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
