#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////�ļ���������
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
//���ĸ�

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
//// ����ˮ����Ϣ�ṹ��
//typedef struct Fruit {
//    char name[20];
//    double price;
//    struct Fruit* next;
//} Fruit;
//
//// �����µ�ˮ�����
//Fruit* createFruit(char* name, double price) {
//    Fruit* newFruit = (Fruit*)malloc(sizeof(Fruit));
//    strcpy(newFruit->name, name);
//    newFruit->price = price;
//    newFruit->next = NULL;
//    return newFruit;
//}
//
//// ���ˮ��������
//void addFruit(Fruit** head, char* name, double price) {
//    Fruit* newFruit = createFruit(name, price);
//    newFruit->next = *head;
//    *head = newFruit;
//}
//
//// ����ˮ��
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
//// ɾ��ˮ��
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
//        return; // û���ҵ���ˮ��
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
//// ��ӡ����
//void printFruits(Fruit* head) {
//    Fruit* current = head;
//    while (current != NULL) {
//        printf("ˮ��: %s, �۸�: %.2f\n", current->name, current->price);
//        current = current->next;
//    }
//}
//
//int main() {
//    Fruit* head = NULL;
//    char name[20];
//    double price;
//
//    // ����ˮ����Ϣ
//    while (1) {
//        printf("������ˮ������(���� 'End' ����): ");
//        scanf("%s", name);
//        if (strcmp(name, "End") == 0) {
//            break;
//        }
//        printf("���������: ");
//        scanf("%lf", &price);
//        addFruit(&head, name, price);
//    }
//
//    // ���Ҳ����� pear ��Ϣ
//    if (findFruit(head, "pear") != NULL) {
//        printf("�ҵ� pear��ɾ������\n");
//        deleteFruit(&head, "pear");
//    }
//    else {
//        printf("û���ҵ� pear���������\n");
//        addFruit(&head, "pear", 0.0); // ���� pear �Ľ���Ϊ 0.0
//    }
//
//    // ��ӡ����
//    printf("��ǰˮ������:\n");
//    printFruits(head);
//
//    // �ͷ�����
//    Fruit* current = head;
//    while (current != NULL) {
//        Fruit* next = current->next;
//        free(current);
//        current = next;
//    }
//
//    return 0;
//}

