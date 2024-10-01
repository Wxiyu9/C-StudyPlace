#define _CRT_SECURE_NO_WARNINGS 1

//         ！！！国庆快乐！！！
//       ______________________
//      |       ⭐             |
//      |   ★   ⭐            |
//      |       ⭐             |
//      |    ⭐                |
//      |                      |
//      |______________________|
// 
//         ！！！国庆快乐！！！


#include <stdio.h>
//删除链表元素
struct ListNode {
    int val;
    struct ListNode* next;
};
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val)
    {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }
    if (!head)
        return head;
    struct ListNode* cur = head;
    while (cur && cur->next)
    {
        if (cur->next->val == val)
        {
            struct ListNode* temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
            temp = NULL;
        }
        else {
            cur = cur->next;
        }
    }
    return head;
}


// 寻找中间节点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* low = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        low = low->next;
    }
    return low;

}