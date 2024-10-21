#define _CRT_SECURE_NO_WARNINGS 1
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//构造这个链表的 深拷贝。
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
    //让新节点与链表链接
    while (cur)
    {
        struct Node* temp = BuyNode(cur->val);
        temp->next = cur->next;
        cur->next = temp;
        cur = cur->next->next;
    }

    //复制random指针状态
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
    //将新链表切割出来
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