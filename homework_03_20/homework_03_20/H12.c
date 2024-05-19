//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int** arr = (int**)malloc(sizeof(int*) * 3);
//	for (int i = 0; i < 3; i++)
//		*(arr + i) = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#define NUM 2
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#include<string.h>
//struct Node {
//	int  num;
//	char name[20];
//	int year;
//	int math;
//	int chinese;
//	int english;
//	int all;
//	struct Node* next;
//};
//typedef struct Node Node;
//typedef struct Node* Link;
////打印表头
//void print()
//{
//	printf("1.输入学生信息\n");
//	printf("2.显示学生信息\n");
//	printf("3.修改学生信息\n");
//	printf("4.删除学生信息\n");
//	printf("5.退出系统\n");
//
//}
////创建链表并写入数据
//void write1(Link head)
//{
//	int i = 0;
//	if (NULL == head)
//		return;
//	Link q;
//	Link p;
//	p = q = head;
//	while (i < NUM)
//	{
//		p = (Link)malloc(sizeof(Node));
//		printf("请输入学号\n");
//		scanf("%d", &p->num);
//		printf("请输入姓名\n");
//		scanf("%s", p->name);
//		printf("请输入年龄\n");
//		scanf("%d", &p->year);
//		printf("请输入数学，语文，英语成绩\n");
//		scanf("%d", &p->math);
//		scanf("%d", &p->chinese);
//		scanf("%d", &p->english);
//		printf("请输入总成绩\n");
//		scanf("%d", &p->all);
//		p->next = NULL;
//		q->next = p;
//		q = p;
//		i++;
//	}
//}
////链表写入文件
//void fprint(Link head)
//{
//	if (head == NULL)
//		return;
//	Link p;
//	p = head;
//	FILE* pf = fopen("D:/text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	while (p->next != head)
//	{
//		fprintf(pf, "%d %s %d %d %d %d %d", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
//		p = p->next;
//	}
//	fclose(pf);
//}
////显示在控制台上
//void out(Link head)
//{
//
//	Link p, q;
//	p = q = head;
//	FILE* pf = fopen("D:/test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	while (p->next != NULL)
//	{
//		fprintf(stdout, "%d %s %d %d %d %d %d", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
//		q = p;
//		p = p->next;
//	}
//}
////读取文件
//void read(Link head)
//{
//	Link p, q;
//	p = q = head;
//	FILE* pf = fopen("D:/test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	while (p->next != NULL)
//	{
//		fprintf(pf, "%d %s %d %d %d %d %d", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
//	}
//}
//		
//	int main()
//	{
//			int i = 0;
//			int num;
//			Link head = (Link)malloc(sizeof(Node));
//			do
//			{
//				print();
//				scanf("%d", &i);
//				switch (i)
//				{
//				case 1:
//					write1(head);
//					fprint(head);
//					break;
//				case 2:
//					read(head);
//					out(head);
//					printf("\n");
//					break;
//				}
//			} while (i != 5);
//			//system('cls');
//			return 0;
//	}

#define _CRT_SECURE_NO_WARNINGS 1
#define NUM 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int  num;
    char name[20];
    int year;
    int math;
    int chinese;
    int english;
    int all;
    struct Node* next;
};

typedef struct Node Node;
typedef struct Node* Link;

// 打印表头
void print() {
    printf("1. 输入学生信息\n");
    printf("2. 显示学生信息\n");
    printf("3. 修改学生信息\n");
    printf("4. 删除学生信息\n");
    printf("5. 退出系统\n");
}

// 创建链表并写入数据
void write1(Link head) {
    int i = 0;
    if (NULL == head)
        return;
    Link q = head;
    while (q->next != NULL) {
        q = q->next;
    }
    while (i < NUM) {
        Link p = (Link)malloc(sizeof(Node));
        if (p == NULL) {
            perror("malloc");
            exit(1);
        }
        printf("请输入学号\n");
        scanf("%d", &p->num);
        printf("请输入姓名\n");
        scanf("%s", p->name);
        printf("请输入年龄\n");
        scanf("%d", &p->year);
        printf("请输入数学，语文，英语成绩\n");
        scanf("%d", &p->math);
        scanf("%d", &p->chinese);
        scanf("%d", &p->english);
        p->all = p->math + p->chinese + p->english;
        p->next = NULL;
        q->next = p;
        q = p;
        i++;
    }
}

// 链表写入文件
void fprint(Link head) {
    if (head == NULL || head->next == NULL)
        return;
    Link p = head->next;
    FILE* pf = fopen("D:/test.txt", "w");
    if (pf == NULL) {
        perror("fopen");
        return;
    }
    while (p != NULL) {
        fprintf(pf, "%d %s %d %d %d %d %d\n", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
        p = p->next;
    }
    fclose(pf);
}

// 显示在控制台上
void out(Link head) {
    if (head == NULL || head->next == NULL)
        return;
    Link p = head->next;
    while (p != NULL) {
        printf("%d %s %d %d %d %d %d\n", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
        p = p->next;
    }
}

// 读取文件
void read(Link head) {
    if (head == NULL)
        return;
    FILE* pf = fopen("D:/test.txt", "r");
    if (pf == NULL) {
        perror("fopen");
        return;
    }
    Link q = head;
    while (q->next != NULL) {
        q = q->next;
    }
    while (!feof(pf)) {
        Link p = (Link)malloc(sizeof(Node));
        if (p == NULL) {
            perror("malloc");
            exit(1);
        }
        if (fscanf(pf, "%d %s %d %d %d %d %d", &p->num, p->name, &p->year, &p->math, &p->chinese, &p->english, &p->all) == 7) {
            p->next = NULL;
            q->next = p;
            q = p;
        }
        else {
            free(p);
        }
    }
    fclose(pf);
}

int main() {
    int i = 0;
    Link head = (Link)malloc(sizeof(Node));
    if (head == NULL) {
        perror("malloc");
        return 1;
    }
    head->next = NULL;
    do {
        print();
        scanf("%d", &i);
        switch (i) {
        case 1:
            write1(head);
            fprint(head);
            break;
        case 2:
            read(head);
            out(head);
            printf("\n");
            break;
        }
    } while (i != 5);
    // 释放链表内存
    Link p = head;
    while (p != NULL) {
        Link temp = p;
        p = p->next;
        free(temp);
    }
    return 0;
}