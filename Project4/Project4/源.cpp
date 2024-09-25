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
        printf("*            1    ¼��ѧ���ɼ�                      *\n");
        printf("*            2    ��ѯѧ���ɼ�                      *\n");
        printf("*            3    �˳�                              *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");
        scanf("%d", &option);
        getchar();  // �����һ������Ļ��з�

        switch (option) {
        case 1:
            writeFile();
            break;
        case 2:
            searchFile();
            break;
        case 3:
            printf("�����Ѿ��˳���\n");
            break;
        default:
            printf("��Чѡ�����������롣\n");
            break;
        }
    } while (option != 3);

    return 0;
}

void writeFile() {
    FILE* fp;
    Stu s;
    char confirm, continueInput = 'n';

    if ((fp = fopen("ѧ����Ϣ.dat", "ab")) == NULL) {
        printf("���ļ�ʱ����");
        return;
    }

    do {
        printf("������ѧ������Ϣ��\n");
        printf("ѧ�ţ�");
        fgets(s.sNumber, sizeof(s.sNumber), stdin);
        s.sNumber[strcspn(s.sNumber, "\n")] = '\0';  // ȥ�����з�

        printf("������");
        fgets(s.sName, sizeof(s.sName), stdin);
        s.sName[strcspn(s.sName, "\n")] = '\0';  // ȥ�����з�

        printf("�Ա�");
        fgets(s.sSex, sizeof(s.sSex), stdin);
        s.sSex[strcspn(s.sSex, "\n")] = '\0';  // ȥ�����з�

        printf("������ɼ���Ҫ������Ǹ�������\n");
        printf("��ѧ��");
        scanf("%d", &s.iGrade[0]);
        getchar();  // ������뻺�����Ļ��з�
        printf("Ӣ�");
        scanf("%d", &s.iGrade[1]);
        getchar();  // ������뻺�����Ļ��з�
        printf("�������");
        scanf("%d", &s.iGrade[2]);
        getchar();  // ������뻺�����Ļ��з�
        printf("������");
        scanf("%d", &s.iGrade[3]);
        getchar();  // ������뻺�����Ļ��з�

        printf("�Ƿ�ȷ���������룺y/n��");
        scanf("%c", &confirm);
        getchar();  // ������뻺�����Ļ��з�

        if (confirm == 'y') {
            fwrite(&s, sizeof(Stu), 1, fp);
            fflush(fp);  // ȷ������ˢ�µ�����
            printf("¼��ɹ����Ƿ����¼�룿�����룺y/n��");
            scanf("%c", &continueInput);
            getchar();  // ������뻺�����Ļ��з�
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

    printf("������ѧ�ţ�");
    fgets(sNumber, sizeof(sNumber), stdin);
    sNumber[strcspn(sNumber, "\n")] = '\0';  // ȥ�����з�

    if ((fp = fopen("ѧ����Ϣ.dat", "rb")) == NULL) {
        printf("���ļ�ʱ����");
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
            printf("�޴�ѧ����Ϣ\n");
            fclose(fp);
            return;
        }

        printf("\nѧ�ţ�%s\n", s.sNumber);
        printf("������%s\n", s.sName);
        printf("�Ա�%s\n", s.sSex);
        printf("��ѧ\tӢ��\t�����\t����\n");
        printf("%d\t%d\t%d\t%d\n", s.iGrade[0], s.iGrade[1], s.iGrade[2], s.iGrade[3]);
    }
    fclose(fp);
}
