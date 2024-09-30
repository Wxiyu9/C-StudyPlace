#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//�����ӡ
void PrintList(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//�����½ڵ�
SListNode* SLTBuyNode(SLTDataType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		perror("malloc error");
		exit(1);
	}
		
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

//����β��
void SLTPushBack(SListNode** pphead, SLTDataType x)
{
	assert(pphead);
	SListNode* newNode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

//����ͷ��
void SLTPushFront(SListNode** pphead, SLTDataType x)
{
	assert(pphead);
	SListNode* newNode = SLTBuyNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

//����βɾ
void SLTPopBack(SListNode** pphead)
{
	assert(*pphead && pphead);
	SListNode* cur = *pphead;
	SListNode* curpre = *pphead;
	if ((*pphead)->next == NULL)
	{
		free((*pphead));
		*pphead = NULL;
	}
	else
	{
		//1 2 3 null
		while (cur->next)
		{
			curpre = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;
		curpre->next = NULL;
	}
}

//����ͷɾ
void SLTPopFront(SListNode** pphead)
{
	assert(pphead && *pphead);
	SListNode* cur = *pphead;
	*pphead = (*pphead)->next;
	free(cur);
	cur = NULL;
}

//����
SListNode* SLTFind(SListNode* phead, SLTDataType x)
{
	SListNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//��ָ��λ��֮ǰ��������
void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x)
{
	assert(pphead && pos && *pphead);
	SListNode* newNode = SLTBuyNode(x);
	if (pos == *pphead)//ͷ��
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		newNode->next = pos;
		cur->next = newNode;
	}
}

//��ָ��λ��֮���������
void SLTInsertAfter(SListNode* pos, SLTDataType x)
{
	assert(pos);
	SListNode* newNode = SLTBuyNode(x);
	newNode->next = pos->next;
	pos->next = newNode;
}

//ɾ��ָ��λ�õ�����
void SLTErase(SListNode** pphead, SListNode* pos)
{
	assert(pphead && *pphead && pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SListNode* curpre = *pphead;
		while (curpre->next != pos)
		{
			curpre = curpre->next;
		}
		curpre->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

//ɾ��ָ��λ��֮�������
void SLTEraseAfter(SListNode* pos)
{
	assert(pos && pos->next);
	SListNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
	cur = NULL;
}

//��������
void SListDesTroy(SListNode** pphead)
{
	assert(pphead && *pphead);
	SListNode* temp = *pphead;
	while (temp)
	{
		SListNode* next = temp->next;
		free(temp);
		temp = next;
	}
	*pphead = NULL;
}