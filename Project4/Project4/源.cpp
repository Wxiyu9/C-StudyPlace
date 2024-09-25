#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

typedef struct Student {
    char sNumber[9];
    char sName[20];
    char sSex[3];
    int iGrade[4];
} Stu;

void writeFile();
void searchFile();

int main() {
    int option;
    do {
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*            1    录入学生成绩                      *\n");
        printf("*            2    查询学生成绩                      *\n");
        printf("*            3    退出                              *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");
        scanf("%d", &option);
        getchar();  // 清除上一个输入的换行符

        switch (option) {
        case 1:
            writeFile();
            break;
        case 2:
            searchFile();
            break;
        case 3:
            printf("程序已经退出！\n");
            break;
        default:
            printf("无效选择，请重新输入。\n");
            break;
        }
    } while (option != 3);

    return 0;
}

void writeFile() {
    FILE* fp;
    Stu s;
    char confirm, continueInput = 'n';

    if ((fp = fopen("学生信息.dat", "ab")) == NULL) {
        printf("打开文件时出错！");
        return;
    }

    do {
        printf("请输入学生的信息：\n");
        printf("学号：");
        fgets(s.sNumber, sizeof(s.sNumber), stdin);
        s.sNumber[strcspn(s.sNumber, "\n")] = '\0';  // 去除换行符

        printf("姓名：");
        fgets(s.sName, sizeof(s.sName), stdin);
        s.sName[strcspn(s.sName, "\n")] = '\0';  // 去除换行符

        printf("性别：");
        fgets(s.sSex, sizeof(s.sSex), stdin);
        s.sSex[strcspn(s.sSex, "\n")] = '\0';  // 去除换行符

        printf("请输入成绩，要求输入非负整数：\n");
        printf("数学：");
        scanf("%d", &s.iGrade[0]);
        getchar();  // 清除输入缓冲区的换行符
        printf("英语：");
        scanf("%d", &s.iGrade[1]);
        getchar();  // 清除输入缓冲区的换行符
        printf("计算机：");
        scanf("%d", &s.iGrade[2]);
        getchar();  // 清除输入缓冲区的换行符
        printf("体育：");
        scanf("%d", &s.iGrade[3]);
        getchar();  // 清除输入缓冲区的换行符

        printf("是否确定？（输入：y/n）");
        scanf("%c", &confirm);
        getchar();  // 清除输入缓冲区的换行符

        if (confirm == 'y') {
            fwrite(&s, sizeof(Stu), 1, fp);
            fflush(fp);  // 确保数据刷新到磁盘
            printf("录入成功，是否继续录入？（输入：y/n）");
            scanf("%c", &continueInput);
            getchar();  // 清除输入缓冲区的换行符
        }
        else {
            continueInput = 'n';
        }
    } while (continueInput == 'y');
    fclose(fp);
}

void searchFile() {
    FILE* fp;
    Stu s;
    char sNumber[9];

    printf("请输入学号：");
    fgets(sNumber, sizeof(sNumber), stdin);
    sNumber[strcspn(sNumber, "\n")] = '\0';  // 去除换行符

    if ((fp = fopen("学生信息.dat", "rb")) == NULL) {
        printf("打开文件时出错！");
        return;
    }
    else {
        int found = 0;
        while (fread(&s, sizeof(Stu), 1, fp)) {
            if (strcmp(s.sNumber, sNumber) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("无此学生信息\n");
            fclose(fp);
            return;
        }

        printf("\n学号：%s\n", s.sNumber);
        printf("姓名：%s\n", s.sName);
        printf("性别：%s\n", s.sSex);
        printf("数学\t英语\t计算机\t体育\n");
        printf("%d\t%d\t%d\t%d\n", s.iGrade[0], s.iGrade[1], s.iGrade[2], s.iGrade[3]);
    }
    fclose(fp);
}
