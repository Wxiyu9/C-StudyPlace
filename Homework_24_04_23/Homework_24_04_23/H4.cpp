#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//对于一个链表，请设计一个时间复杂度为O(n), 额外空间复杂度为O(1)的算法，判断其是否为回文结构。


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class PalindromeList {
public:
    // 找到中间节点
    ListNode* FindMidNode(ListNode* phead)
    {
        ListNode* fast = phead;
        ListNode* slow = phead;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    // 逆置链表
    ListNode* ReserveList(ListNode* phead)
    {
        ListNode* n1 = NULL;
        ListNode* n2 = phead;
        ListNode* n3 = phead->next;
        while (n2)
        {
            n2->next = n1;
            n1 = n2;
            n2 = n3;
            if (n3 != NULL)
                n3 = n3->next;
        }
        return n1;
    }
    // 1 2 1 2 3
    bool chkPalindrome(ListNode* A) {
        // write code here
        ListNode* mid = FindMidNode(A);
        ListNode* right = ReserveList(mid);
        ListNode* left = A;
        while (right)
        {
            if (right->val != left->val)
                return false;
            right = right->next;
            left = left->next;
        }
        return true;
    }
};