#define _CRT_SECURE_NO_WARNINGS 1
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int����
 * @param m int����
 * @return int����
 */

// ��������
// Լɪ������
#include <stdio.h>
typedef struct SList {
    int data;
    struct SList* next;
}SList;

SList* SLTBuyNode(int x)
{
    SList* newNode = (SList*)malloc(sizeof(SList));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

SList* CreatList(int n)
{
    SList* head = SLTBuyNode(1);
    SList* temp = head;
    for (int i = 0; i < n - 1; i++)
    {
        SList* newNode = SLTBuyNode(i + 2);
        temp->next = newNode;
        temp = temp->next;
    }
    temp->next = head;
    return head;
}

int ysf(int n, int m) {
    SList* head = CreatList(n);
    SList* temp = head;
    // 5 2
    // 1 2 3 4 5
    if (m == 1)
        return n;
    while (n != 1)
    {
        for (int i = 1; i < m - 1; i++)
        {
            temp = temp->next;
        }
        SList* del = temp->next;
        temp->next = del->next;
        temp = temp->next;
        free(del);
        del = NULL;
        n--;
    }
    return temp->data;
}



//�ϲ�������������
struct ListNode {
    int val; 
    struct ListNode *next;
};
 

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* cur1 = list1;
    struct ListNode* cur2 = list2;
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur3 = result;
    if (!(cur1 || cur2))
        return NULL;
    while (cur1 != NULL || cur2 != NULL)
    {
        if (cur1 == NULL)
        {
            cur3->next = cur2;
            cur3 = cur3->next;
            cur2 = cur2->next;
        }
        else if (cur2 == NULL)
        {
            cur3->next = cur1;
            cur3 = cur3->next;
            cur1 = cur1->next;
        }
        else if (cur2->val > cur1->val)
        {
            cur3->next = cur1;
            cur3 = cur3->next;
            cur1 = cur1->next;
        }
        else
        {
            cur3->next = cur2;
            cur3 = cur3->next;
            cur2 = cur2->next;
        }
    }
    return result->next;
}