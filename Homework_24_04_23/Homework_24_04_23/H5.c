#define _CRT_SECURE_NO_WARNINGS 1
//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣����������������ཻ�ڵ㣬���� null ��
#include <stdio.h>

  struct ListNode {
      int val;
      struct ListNode *next;
  };
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    int countA = 0;
    int countB = 0;
    struct ListNode* curA = headA;
    struct ListNode* curB = headB;
    while (curA)
    {
        countA++;
        curA = curA->next;
    }
    while (curB)
    {
        countB++;
        curB = curB->next;
    }
    curA = headA;
    curB = headB;
    if (countA > countB)
    {
        for (int i = 0; i < countA - countB; i++)
        {
            curA = curA->next;
        }
        while (curA)
        {
            if (curA == curB)
            {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
    }
    else {
        for (int i = 0; i < countB - countA; i++)
        {
            curB = curB->next;
        }
        while (curB)
        {
            if (curA == curB)
            {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
    }
    return NULL;
}