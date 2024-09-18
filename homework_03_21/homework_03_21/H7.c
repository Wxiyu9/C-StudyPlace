//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////文件操作相关函数练习
//typedef struct Student
//{
//	char name[20];
//	int age;
//	int id;
//	int grade;
//}Stu;
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	Stu s1 = { "张三",17,23102044,98 };
//	Stu s2 = { "李四",18,23102024,89 };
//	fprintf(pf, "%s %d %d %d\n", s1.name, \
//		s1.age, s1.id, s1.grade);
//	fprintf(pf, "%s %d %d %d\n", s2.name, \
//		s2.age, s2.id, s2.grade);
//	fclose(pf);
//	pf = NULL;
//
//	//打开文件
//	FILE* pf2 = fopen("test.txt", "r");
//	if (pf2 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char ch = 0;
//	int sz = 21;
//	fseek(pf2, sz * 1, SEEK_SET);
//	while ((ch = fgetc(pf2)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

////排序指针数组
//
//#include <stdio.h>
//#include <string.h>
//
//void StrCom(char* name[4])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (strcmp(name[j], name[j + 1]) > 0)
//			{
//				char* p = name[j];
//				name[j] = name[j + 1];
//				name[j + 1] = p;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	char* name[4] = { "Follow", "Great", "FORTRAN", "Computer" };
//	StrCom(name);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链表节点结构
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
//// 创建新节点
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("内存分配失败\n");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// 插入新节点到链表
//Node* insertNode(Node* head, int data) {
//    Node* newNode = createNode(data);
//    if (head == NULL) {
//        head = newNode;
//    }
//    else {
//        Node* temp = head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//    return head;
//}
//
//// 输出链表
//void printList(Node* head) {
//    Node* temp = head;
//    while (temp != NULL) {
//        printf("%d -> ", temp->data);
//        temp = temp->next;
//    }
//    printf("NULL\n");
//}
//
//int main() {
//    Node* head = NULL; // 初始化链表头指针
//
//    // 插入节点
//    insertNode(head, 1);
//    insertNode(head, 2);
//    insertNode(head, 3);
//    insertNode(head, 4);
//
//    // 输出链表
//    printList(head);
//
//    // 释放内存
//    Node* temp;
//    while (head != NULL) {
//        temp = head;
//        head = head->next;
//        free(temp);
//    }
//
//    return 0;
//}