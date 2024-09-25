#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define FILE_NAME "student_records.txt"

// 学生信息结构体
typedef struct {
    char name[50];
    int id;
    float score;
} Student;

// 全局变量
Student students[MAX_STUDENTS];
int numStudents = 0;

// 函数声明
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
        displayMainMenu(); // 显示主菜单
        scanf("%d", &choice);
        clearBuffer();

        switch (choice) {
        case 1:
            addStudent(); // 录入学生信息
            break;
        case 2:
            queryStudent(); // 查询学生信息
            break;
        case 3:
            saveData(); // 保存数据到文件
            break;
        case 4:
            loadDataOption(); // 读取文件中的数据
            break;
        case 5:
            printf("退出程序。\n");
            saveData(); // 在退出前保存数据到文件
            return 0;
        default:
            printf("无效的选项，请重新输入。\n");
            break;
        }
    }

    return 0;
}

void displayMainMenu() {
    system("cls"); // 清屏
    printf("学生成绩管理系统\n");
    printf("1. 录入学生信息\n");
    printf("2. 查询学生信息\n");
    printf("3. 保存数据到文件\n");
    printf("4. 读取文件中的数据\n");
    printf("5. 退出程序\n");
    printf("请选择操作选项: ");
}

void addStudent() {
    char continueInput;

    do {
        if (numStudents >= MAX_STUDENTS) {
            printf("学生信息已达上限，无法继续添加。\n");
            waitForKeyPress();
            return;
        }

        printf("请输入学生姓名: ");
        fgets(students[numStudents].name, sizeof(students[numStudents].name), stdin);
        students[numStudents].name[strcspn(students[numStudents].name, "\n")] = '\0'; // 去除换行符

        printf("请输入学生学号: ");
        scanf("%d", &students[numStudents].id);
        clearBuffer();

        printf("请输入学生成绩: ");
        scanf("%f", &students[numStudents].score);
        clearBuffer();

        numStudents++;
        printf("学生信息录入成功。\n");

        printf("是否继续录入? (y/n): ");
        continueInput = getchar();
        clearBuffer();

    } while (continueInput == 'y' || continueInput == 'Y');

    waitForKeyPress();
}

void queryStudent() {
    int searchId;
    printf("请输入要查询的学生学号: ");
    scanf("%d", &searchId);
    clearBuffer();

    int found = 0;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].id == searchId) {
            printf("姓名: %s\n", students[i].name);
            printf("学号: %d\n", students[i].id);
            printf("成绩: %.2f\n", students[i].score);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到该学生的信息。\n");
    }
    waitForKeyPress();
}

void saveData() {
    FILE* fp = fopen(FILE_NAME, "w");
    if (fp == NULL) {
        printf("无法打开文件进行写入。\n");
        waitForKeyPress();
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].id, students[i].score);
    }

    fclose(fp);
    printf("数据已成功保存到文件。\n");
    waitForKeyPress();
}

void loadData() {
    FILE* fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("无法打开文件进行读取。\n");
        return;
    }

    numStudents = 0;
    while (fscanf(fp, "%s %d %f", students[numStudents].name, &students[numStudents].id, &students[numStudents].score) != EOF) {
        numStudents++;
    }

    fclose(fp);
    printf("数据已从文件加载。\n");
}

void loadDataOption() {
    loadData(); // 调用加载数据函数
    waitForKeyPress();
}

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void waitForKeyPress() {
    system("pause"); // 等待用户按任意键
}
