#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define FILE_NAME "student_records.txt"

// ѧ����Ϣ�ṹ��
typedef struct {
    char name[50];
    int id;
    float score;
} Student;

// ȫ�ֱ���
Student students[MAX_STUDENTS];
int numStudents = 0;

// ��������
void displayMainMenu();
void addStudent();
void queryStudent();
void saveData();
void loadData();
void clearBuffer();
void waitForKeyPress();
void loadDataOption();

int main() {
    int choice;

    while (1) {
        displayMainMenu(); // ��ʾ���˵�
        scanf("%d", &choice);
        clearBuffer();

        switch (choice) {
        case 1:
            addStudent(); // ¼��ѧ����Ϣ
            break;
        case 2:
            queryStudent(); // ��ѯѧ����Ϣ
            break;
        case 3:
            saveData(); // �������ݵ��ļ�
            break;
        case 4:
            loadDataOption(); // ��ȡ�ļ��е�����
            break;
        case 5:
            printf("�˳�����\n");
            saveData(); // ���˳�ǰ�������ݵ��ļ�
            return 0;
        default:
            printf("��Ч��ѡ����������롣\n");
            break;
        }
    }

    return 0;
}

void displayMainMenu() {
    system("cls"); // ����
    printf("ѧ���ɼ�����ϵͳ\n");
    printf("1. ¼��ѧ����Ϣ\n");
    printf("2. ��ѯѧ����Ϣ\n");
    printf("3. �������ݵ��ļ�\n");
    printf("4. ��ȡ�ļ��е�����\n");
    printf("5. �˳�����\n");
    printf("��ѡ�����ѡ��: ");
}

void addStudent() {
    char continueInput;

    do {
        if (numStudents >= MAX_STUDENTS) {
            printf("ѧ����Ϣ�Ѵ����ޣ��޷�������ӡ�\n");
            waitForKeyPress();
            return;
        }

        printf("������ѧ������: ");
        fgets(students[numStudents].name, sizeof(students[numStudents].name), stdin);
        students[numStudents].name[strcspn(students[numStudents].name, "\n")] = '\0'; // ȥ�����з�

        printf("������ѧ��ѧ��: ");
        scanf("%d", &students[numStudents].id);
        clearBuffer();

        printf("������ѧ���ɼ�: ");
        scanf("%f", &students[numStudents].score);
        clearBuffer();

        numStudents++;
        printf("ѧ����Ϣ¼��ɹ���\n");

        printf("�Ƿ����¼��? (y/n): ");
        continueInput = getchar();
        clearBuffer();

    } while (continueInput == 'y' || continueInput == 'Y');

    waitForKeyPress();
}

void queryStudent() {
    int searchId;
    printf("������Ҫ��ѯ��ѧ��ѧ��: ");
    scanf("%d", &searchId);
    clearBuffer();

    int found = 0;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].id == searchId) {
            printf("����: %s\n", students[i].name);
            printf("ѧ��: %d\n", students[i].id);
            printf("�ɼ�: %.2f\n", students[i].score);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���ѧ������Ϣ��\n");
    }
    waitForKeyPress();
}

void saveData() {
    FILE* fp = fopen(FILE_NAME, "w");
    if (fp == NULL) {
        printf("�޷����ļ�����д�롣\n");
        waitForKeyPress();
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].id, students[i].score);
    }

    fclose(fp);
    printf("�����ѳɹ����浽�ļ���\n");
    waitForKeyPress();
}

void loadData() {
    FILE* fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("�޷����ļ����ж�ȡ��\n");
        return;
    }

    numStudents = 0;
    while (fscanf(fp, "%s %d %f", students[numStudents].name, &students[numStudents].id, &students[numStudents].score) != EOF) {
        numStudents++;
    }

    fclose(fp);
    printf("�����Ѵ��ļ����ء�\n");
}

void loadDataOption() {
    loadData(); // ���ü������ݺ���
    waitForKeyPress();
}

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void waitForKeyPress() {
    system("pause"); // �ȴ��û��������
}
