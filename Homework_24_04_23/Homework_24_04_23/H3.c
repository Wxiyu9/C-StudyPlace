#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ���㷨���ҳ����������е����� k ���ڵ㡣���ظýڵ��ֵ��

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
