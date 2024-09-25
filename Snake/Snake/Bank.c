#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ָ���ļ�
#define FILE_NAME "accounts.txt"
// ���ֳ�������
#define MAX_NAME_LENGTH 50

// �����˻��ṹ��
typedef struct AccountNode {
    char name[MAX_NAME_LENGTH]; // �˻���
    int accountNumber;          // �˻���
    double balance;             // �˻����
    struct AccountNode* next;
} AccountNode;

// ����ͷ��
AccountNode* head = NULL;

// ��ʾ�˵�
void displayMenu() {
    printf("\n�����˻�����ϵͳ\n");
    printf("1. �����˻�\n");
    printf("2. ���\n");
    printf("3. ȡ��\n");
    printf("4. �鿴�˻�\n");
    printf("5. ��ѯ���\n");
    printf("6. �޸��˻�����\n");
    printf("7. ɾ���˻�\n");
    printf("8. ͳ���˻������\n");
    printf("9. ͳ���˻�����\n");
    printf("10. �����˻����ݵ��ļ�\n");
    printf("11. ���ļ������˻�����\n");
    printf("12. �˳�\n");
    printf("��ѡ��һ��ѡ��: ");
}

// �������˻�
void createAccount() {
    AccountNode* newAccount = (AccountNode*)malloc(sizeof(AccountNode));
    if (newAccount == NULL) {
        printf("�ڴ����ʧ�ܡ�\n");
        return;
    }

    printf("�������˻������˵�����: ");
    scanf("%s", newAccount->name); // ��ȡ�û�������˻���

    newAccount->accountNumber = rand() % 1000 + 1; // ��������˻���
    newAccount->balance = 0.0; // ��ʼ�����Ϊ0
    newAccount->next = NULL; // ������һ���ڵ�Ϊ��

    // ���뵽����ͷ��
    newAccount->next = head;
    head = newAccount;

    printf("�˻������ɹ����˻�����: %d\n", newAccount->accountNumber);
}

// ���
void deposit() {
    int accountNumber;
    double amount;

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("����������: ");
            scanf("%lf", &amount); // ��ȡ�û�����Ĵ����
            if (amount < 0) {
                printf("��Ч�Ľ�\n");
                return;
            }
            current->balance += amount; // ���
            printf("���ɹ���\n");
            return;
        }
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// ȡ��
void withdraw() {
    int accountNumber;
    double amount;

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("������ȡ����: ");
            scanf("%lf", &amount); // ��ȡ�û������ȡ����
            if (amount < 0 || amount > current->balance) {
                printf("��Ч�Ľ�\n");
                return;
            }
            current->balance -= amount; // ȡ��
            printf("ȡ��ɹ���\n");
            return;
        }
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// �鿴�˻���Ϣ
void viewAccount() {
    int accountNumber;

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("�˻�����: %d\n", current->accountNumber);
            printf("�˻�������: %s\n", current->name);
            printf("�˻����: %.2lf\n", current->balance);
            return;
        }
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// ��ѯ���
void checkBalance() {
    int accountNumber;

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("�˻����: %.2lf\n", current->balance);
            return;
        }
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// �޸��˻�����
void changeAccountName() {
    int accountNumber;
    char newName[MAX_NAME_LENGTH];

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("�������µ��˻�����������: ");
            scanf("%s", newName); // ��ȡ�û���������˻���
            strcpy(current->name, newName); // �޸��˻���
            printf("�˻������޸ĳɹ���\n");
            return;
        }
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// ɾ���˻�
void deleteAccount() {
    int accountNumber;

    printf("�������˻�����: ");
    scanf("%d", &accountNumber); // ��ȡ�û�������˻���

    AccountNode* prev = NULL;
    AccountNode* current = head;

    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            if (prev == NULL) { // ɾ��ͷ���ڵ�
                head = current->next;
            }
            else {
                prev->next = current->next;
            }
            free(current); // �ͷ��ڴ�
            printf("�˻�ɾ���ɹ���\n");
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("δ�ҵ����˻���\n");
}

// ͳ���˻������
void totalBalance() {
    double total = 0.0;
    AccountNode* current = head;
    while (current != NULL) {
        total += current->balance;
        current = current->next;
    }
    printf("�����˻��������: %.2lf\n", total);
}

// ͳ���˻�����
void countAccounts() {
    int count = 0;
    AccountNode* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    printf("��ǰ�˻�������: %d\n", count);
}

// �����˻����ݵ��ļ�
void exportAccounts() {
    FILE* file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("�޷����ļ�����д�롣\n");
        return;
    }

    AccountNode* current = head;
    while (current != NULL) {
        fprintf(file, "%d %s %.2lf\n", current->accountNumber, current->name, current->balance);
        current = current->next;
    }

    fclose(file);
    printf("�˻����ݵ����ɹ���\n");
}

// ���ļ������˻�����
void importAccounts() {
    FILE* file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("�޷����ļ����ж�ȡ��\n");
        return;
    }

    // �������
    while (head != NULL) {
        AccountNode* temp = head;
        head = head->next;
        free(temp);
    }

    int accountNumber;
    char name[MAX_NAME_LENGTH];
    double balance;

    while (fscanf(file, "%d %s %lf", &accountNumber, name, &balance) != EOF) {
        AccountNode* newAccount = (AccountNode*)malloc(sizeof(AccountNode));
        if (newAccount == NULL) {
            printf("�ڴ����ʧ�ܡ�\n");
            fclose(file);
            return;
        }
        newAccount->accountNumber = accountNumber;
        strcpy(newAccount->name, name);
        newAccount->balance = balance;
        newAccount->next = NULL;
        // ���뵽����ͷ��
        newAccount->next = head;
        head = newAccount;
    }

    fclose(file);
    printf("�˻����ݵ���ɹ���\n");
}

int main()
{
    int option;
    while (1) {
        displayMenu(); // ��ʾ�˵�
        scanf("%d", &option); // ��ȡ�û�ѡ��

        switch (option) {
        case 1:
            createAccount(); // �����˻�
            break;
        case 2:
            deposit(); // ���
            break;
        case 3:
            withdraw(); // ȡ��
            break;
        case 4:
            viewAccount(); // �鿴�˻�
            break;
        case 5:
            checkBalance(); // ��ѯ���
            break;
        case 6:
            changeAccountName(); // �޸��˻�����
            break;
        case 7:
            deleteAccount(); // ɾ���˻�
            break;
        case 8:
            totalBalance(); // ͳ���˻������
            break;
        case 9:
            countAccounts(); // ͳ���˻�����
            break;
        case 10:
            exportAccounts(); // �����˻����ݵ��ļ�
            break;
        case 11:
            importAccounts(); // ���ļ������˻�����
            break;
        case 12:
            printf("�˳�...\n"); // �˳�����
            exit(0);
        default:
            printf("��Ч��ѡ������ԡ�\n");
        }
    }

    return 0;
}