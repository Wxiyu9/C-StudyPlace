#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//链表打印
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

//创建新节点
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

//链表尾插
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

//链表头插
void SLTPushFront(SListNode** pphead, SLTDataType x)
{
	assert(pphead);
	SListNode* newNode = SLTBuyNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

//链表尾删
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

//链表头删
void SLTPopFront(SListNode** pphead)
{
	assert(pphead && *pphead);
	SListNode* cur = *pphead;
	*pphead = (*pphead)->next;
	free(cur);
	cur = NULL;
}

//查找
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

//在指定位置之前插入数据
void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x)
{
	assert(pphead && pos && *pphead);
	SListNode* newNode = SLTBuyNode(x);
	if (pos == *pphead)//头插
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

//在指定位置之后插入数据
void SLTInsertAfter(SListNode* pos, SLTDataType x)
{
	assert(pos);
	SListNode* newNode = SLTBuyNode(x);
	newNode->next = pos->next;
	pos->next = newNode;
}

//删除指定位置的数据
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

//删除指定位置之后的数据
void SLTEraseAfter(SListNode* pos)
{
	assert(pos && pos->next);
	SListNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
	cur = NULL;
}

//销毁链表
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