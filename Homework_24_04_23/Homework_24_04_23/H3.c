#define _CRT_SECURE_NO_WARNINGS 1
//实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。

 struct ListNode {
     int val;
     struct ListNode *next;
 };


int kthToLast(struct ListNode* head, int k) {
    struct ListNode* fast = head;
    struct ListNode* low = head;
    for (int i = 0; i < k - 1; i++)
    {
        fast = fast->next;
    }
    while (fast->next)
    {
        fast = fast->next;
        low = low->next;
    }
    return low->val;
}
