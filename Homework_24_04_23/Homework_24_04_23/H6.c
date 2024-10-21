#define _CRT_SECURE_NO_WARNINGS 1
//����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣
//������������ �����
#include <stdio.h>

  struct Node {
      int val;
      struct Node *next;
      struct Node *random;
  };
 

struct Node* BuyNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = newNode->random = NULL;
    return newNode;
}

struct Node* copyRandomList(struct Node* head) {
    struct Node* cur = head;
    //���½ڵ�����������
    while (cur)
    {
        struct Node* temp = BuyNode(cur->val);
        temp->next = cur->next;
        cur->next = temp;
        cur = cur->next->next;
    }

    //����randomָ��״̬
    cur = head;
    while (cur)
    {
        if (cur->random == NULL)
        {
            cur->next->random = NULL;
        }
        else {
            cur->next->random = cur->random->next;
        }
        cur = cur->next->next;
    }
    //���������и����
    if (head == NULL)
        return NULL;
    struct Node* newhead = head->next;
    struct Node* newcur = newhead;
    while (newcur->next)
    {
        newcur->next = newcur->next->next;
        newcur = newcur->next;
    }
    return newhead;
}