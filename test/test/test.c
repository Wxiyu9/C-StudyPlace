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

// ��ӡ��ͷ
void print() {
    printf("1. ����ѧ����Ϣ\n");
    printf("2. ��ʾѧ����Ϣ\n");
    printf("3. �޸�ѧ����Ϣ\n");
    printf("4. ɾ��ѧ����Ϣ\n");
    printf("5. �˳�ϵͳ\n");
}

// ��������д������
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
        printf("������ѧ��\n");
        scanf("%d", &p->num);
        printf("����������\n");
        scanf("%s", p->name);
        printf("����������\n");
        scanf("%d", &p->year);
        printf("��������ѧ�����ģ�Ӣ��ɼ�\n");
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

// ����д���ļ�
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

// ��ʾ�ڿ���̨��
void out(Link head) {
    if (head == NULL || head->next == NULL)
        return;
    Link p = head->next;
    while (p != NULL) {
        printf("%d %s %d %d %d %d %d\n", p->num, p->name, p->year, p->math, p->chinese, p->english, p->all);
        p = p->next;
    }
}

// ��ȡ�ļ�
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
    // �ͷ������ڴ�
    Link p = head;
    while (p != NULL) {
        Link temp = p;
        p = p->next;
        free(temp);
    }
    return 0;
}