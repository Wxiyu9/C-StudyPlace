#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 指定文件
#define FILE_NAME "accounts.txt"
// 名字长度限制
#define MAX_NAME_LENGTH 50

// 定义账户结构体
typedef struct AccountNode {
    char name[MAX_NAME_LENGTH]; // 账户名
    int accountNumber;          // 账户号
    double balance;             // 账户余额
    struct AccountNode* next;
} AccountNode;

// 链表头部
AccountNode* head = NULL;

// 显示菜单
void displayMenu() {
    printf("\n银行账户管理系统\n");
    printf("1. 创建账户\n");
    printf("2. 存款\n");
    printf("3. 取款\n");
    printf("4. 查看账户\n");
    printf("5. 查询余额\n");
    printf("6. 修改账户名称\n");
    printf("7. 删除账户\n");
    printf("8. 统计账户总余额\n");
    printf("9. 统计账户数量\n");
    printf("10. 导出账户数据到文件\n");
    printf("11. 从文件导入账户数据\n");
    printf("12. 退出\n");
    printf("请选择一个选项: ");
}

// 创建新账户
void createAccount() {
    AccountNode* newAccount = (AccountNode*)malloc(sizeof(AccountNode));
    if (newAccount == NULL) {
        printf("内存分配失败。\n");
        return;
    }

    printf("请输入账户持有人的姓名: ");
    scanf("%s", newAccount->name); // 获取用户输入的账户名

    newAccount->accountNumber = rand() % 1000 + 1; // 随机生成账户号
    newAccount->balance = 0.0; // 初始化余额为0
    newAccount->next = NULL; // 设置下一个节点为空

    // 插入到链表头部
    newAccount->next = head;
    head = newAccount;

    printf("账户创建成功。账户号码: %d\n", newAccount->accountNumber);
}

// 存款
void deposit() {
    int accountNumber;
    double amount;

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("请输入存款金额: ");
            scanf("%lf", &amount); // 获取用户输入的存款金额
            if (amount < 0) {
                printf("无效的金额。\n");
                return;
            }
            current->balance += amount; // 存款
            printf("存款成功。\n");
            return;
        }
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 取款
void withdraw() {
    int accountNumber;
    double amount;

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("请输入取款金额: ");
            scanf("%lf", &amount); // 获取用户输入的取款金额
            if (amount < 0 || amount > current->balance) {
                printf("无效的金额。\n");
                return;
            }
            current->balance -= amount; // 取款
            printf("取款成功。\n");
            return;
        }
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 查看账户信息
void viewAccount() {
    int accountNumber;

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("账户号码: %d\n", current->accountNumber);
            printf("账户持有人: %s\n", current->name);
            printf("账户余额: %.2lf\n", current->balance);
            return;
        }
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 查询余额
void checkBalance() {
    int accountNumber;

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("账户余额: %.2lf\n", current->balance);
            return;
        }
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 修改账户名称
void changeAccountName() {
    int accountNumber;
    char newName[MAX_NAME_LENGTH];

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* current = head;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            printf("请输入新的账户持有人姓名: ");
            scanf("%s", newName); // 获取用户输入的新账户名
            strcpy(current->name, newName); // 修改账户名
            printf("账户名称修改成功。\n");
            return;
        }
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 删除账户
void deleteAccount() {
    int accountNumber;

    printf("请输入账户号码: ");
    scanf("%d", &accountNumber); // 获取用户输入的账户号

    AccountNode* prev = NULL;
    AccountNode* current = head;

    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            if (prev == NULL) { // 删除头部节点
                head = current->next;
            }
            else {
                prev->next = current->next;
            }
            free(current); // 释放内存
            printf("账户删除成功。\n");
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("未找到该账户。\n");
}

// 统计账户总余额
void totalBalance() {
    double total = 0.0;
    AccountNode* current = head;
    while (current != NULL) {
        total += current->balance;
        current = current->next;
    }
    printf("所有账户的总余额: %.2lf\n", total);
}

// 统计账户数量
void countAccounts() {
    int count = 0;
    AccountNode* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    printf("当前账户总数量: %d\n", count);
}

// 导出账户数据到文件
void exportAccounts() {
    FILE* file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("无法打开文件进行写入。\n");
        return;
    }

    AccountNode* current = head;
    while (current != NULL) {
        fprintf(file, "%d %s %.2lf\n", current->accountNumber, current->name, current->balance);
        current = current->next;
    }

    fclose(file);
    printf("账户数据导出成功。\n");
}

// 从文件导入账户数据
void importAccounts() {
    FILE* file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("无法打开文件进行读取。\n");
        return;
    }

    // 清空链表
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
            printf("内存分配失败。\n");
            fclose(file);
            return;
        }
        newAccount->accountNumber = accountNumber;
        strcpy(newAccount->name, name);
        newAccount->balance = balance;
        newAccount->next = NULL;
        // 插入到链表头部
        newAccount->next = head;
        head = newAccount;
    }

    fclose(file);
    printf("账户数据导入成功。\n");
}

int main()
{
    int option;
    while (1) {
        displayMenu(); // 显示菜单
        scanf("%d", &option); // 获取用户选择

        switch (option) {
        case 1:
            createAccount(); // 创建账户
            break;
        case 2:
            deposit(); // 存款
            break;
        case 3:
            withdraw(); // 取款
            break;
        case 4:
            viewAccount(); // 查看账户
            break;
        case 5:
            checkBalance(); // 查询余额
            break;
        case 6:
            changeAccountName(); // 修改账户名称
            break;
        case 7:
            deleteAccount(); // 删除账户
            break;
        case 8:
            totalBalance(); // 统计账户总余额
            break;
        case 9:
            countAccounts(); // 统计账户数量
            break;
        case 10:
            exportAccounts(); // 导出账户数据到文件
            break;
        case 11:
            importAccounts(); // 从文件导入账户数据
            break;
        case 12:
            printf("退出...\n"); // 退出程序
            exit(0);
        default:
            printf("无效的选项。请重试。\n");
        }
    }

    return 0;
}