#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////文件拷贝函数
//void copy_file(FILE* dest, FILE* src)
//{
//	char ch = 0;
//	while ((ch = fgetc(src)) != EOF)
//		fputc(ch, dest);
//}
//int main()
//{
//	FILE* src = fopen("data.txt", "r");
//	FILE* dest = fopen("data_copy.txt", "w");
//	if (!(src && dest))
//	{
//		perror("fopen");
//		return 1;
//	}
//	copy_file(dest, src);
//	fclose(src);
//	fclose(dest);
//	src = dest = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch;
//	scanf("%c", &ch);
//	return 0;
//}
//第四个

//int main()
//{
//    char str1[100];
//    char str2[100];
//    scanf("%s", str1);
//    scanf("%s", str2);
//    char str3[200];
//    int i = 0;
//    int j = 0;
//    char ch = str1[0];
//    for (ch; ch != '\0'; i++)
//    {
//        str3[i] = ch;
//        ch = str1[i + 1];
//    }
//    ch = str2[0];
//    for (ch; ch != '\0'; j++)
//    {
//        str3[i + j] = ch;
//        ch = str2[j + 1];
//    }
//    str3[j + i] = '\0';
//    printf("%s", str3);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 定义水果信息结构体
//typedef struct Fruit {
//    char name[20];
//    double price;
//    struct Fruit* next;
//} Fruit;
//
//// 创建新的水果结点
//Fruit* createFruit(char* name, double price) {
//    Fruit* newFruit = (Fruit*)malloc(sizeof(Fruit));
//    strcpy(newFruit->name, name);
//    newFruit->price = price;
//    newFruit->next = NULL;
//    return newFruit;
//}
//
//// 添加水果到链表
//void addFruit(Fruit** head, char* name, double price) {
//    Fruit* newFruit = createFruit(name, price);
//    newFruit->next = *head;
//    *head = newFruit;
//}
//
//// 查找水果
//Fruit* findFruit(Fruit* head, char* name) {
//    Fruit* current = head;
//    while (current != NULL) {
//        if (strcmp(current->name, name) == 0) {
//            return current;
//        }
//        current = current->next;
//    }
//    return NULL;
//}
//
//// 删除水果
//void deleteFruit(Fruit** head, char* name) {
//    Fruit* current = *head;
//    Fruit* previous = NULL;
//
//    while (current != NULL && strcmp(current->name, name) != 0) {
//        previous = current;
//        current = current->next;
//    }
//
//    if (current == NULL) {
//        return; // 没有找到该水果
//    }
//
//    if (previous == NULL) {
//        *head = current->next;
//    }
//    else {
//        previous->next = current->next;
//    }
//
//    free(current);
//}
//
//// 打印链表
//void printFruits(Fruit* head) {
//    Fruit* current = head;
//    while (current != NULL) {
//        printf("水果: %s, 价格: %.2f\n", current->name, current->price);
//        current = current->next;
//    }
//}
//
//int main() {
//    Fruit* head = NULL;
//    char name[20];
//    double price;
//
//    // 输入水果信息
//    while (1) {
//        printf("请输入水果名称(输入 'End' 结束): ");
//        scanf("%s", name);
//        if (strcmp(name, "End") == 0) {
//            break;
//        }
//        printf("请输入进价: ");
//        scanf("%lf", &price);
//        addFruit(&head, name, price);
//    }
//
//    // 查找并处理 pear 信息
//    if (findFruit(head, "pear") != NULL) {
//        printf("找到 pear，删除它。\n");
//        deleteFruit(&head, "pear");
//    }
//    else {
//        printf("没有找到 pear，添加它。\n");
//        addFruit(&head, "pear", 0.0); // 假设 pear 的进价为 0.0
//    }
//
//    // 打印链表
//    printf("当前水果链表:\n");
//    printFruits(head);
//
//    // 释放链表
//    Fruit* current = head;
//    while (current != NULL) {
//        Fruit* next = current->next;
//        free(current);
//        current = next;
//    }
//
//    return 0;
//}

