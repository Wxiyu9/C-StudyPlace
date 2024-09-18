#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//定义数据域类型
typedef int SLTDataType;

//定义链表结构体
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//申请空间
SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* NewNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (NewNode == NULL)
	{
		perror("malloc");
		exit(1);
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

//打印
void SLTPrint(SLTNode* phead)
{
	SLTNode* temp = phead;
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//打印菜单
void emnu()
{
	printf("***************************************\n");
	printf("******  1.打印链表   2.销毁链表  ******\n");
	printf("******  3.头插数据   4.尾插数据  ******\n");
	printf("******  5.头删数据   6.尾删数据  ******\n");
	printf("******    7.指定数据删除节点     ******\n");
	printf("******   8.指定数据前插入节点    ******\n");
	printf("******         0.退出程序        ******\n");
	printf("***************************************\n");
}

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* NewNode = SLTBuyNode(x);
	if (*pphead == NULL)
		*pphead = NewNode;
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = NewNode;
	}

}

//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* NewHead = SLTBuyNode(x);
	NewHead->next = *pphead;
	*pphead = NewHead;
}

//尾删
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* pcur1 = *pphead;
		SLTNode* pcur2 = *pphead;
		while (pcur1->next)
		{
			pcur2 = pcur1;
			pcur1 = pcur1->next;
		}
		pcur2->next = NULL;
		free(pcur1);
		pcur1 = NULL;
	}

}

//头删
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead && pos && *pphead);
	if (pos == *pphead)
		SLTPushFront(pphead,x);
	else
	{
		SLTNode* pcur = *pphead;
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		SLTNode* NewNode = SLTBuyNode(x);
		pcur->next = NewNode;
		NewNode->next = pos;
	}
}

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead && pos);
	if (*pphead == pos)
		SLTPopFront(pphead);
	else
	{
		SLTNode* pcur = *pphead;
		while (pcur->next != pos)
			pcur = pcur->next;
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

//销毁链表
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* temp = pcur->next;
		free(pcur);
		pcur = temp;
	}
}


int main()
{
	SLTNode* phead = NULL;
	int input = 0;
	int n = 0;
	int b = 0;
	do {
		emnu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			SLTPrint(phead);
			break;
		case 2:
			SListDesTroy(&phead);
			break;
		case 3:
			n = 0;
			printf("请输入要插入的数据：");
			scanf("%d", &n);
			SLTPushFront(&phead, n);
			printf("插入成功！\n");
			break;
		case 4:
			n = 0;
			printf("请输入要插入的数据：");
			scanf("%d", &n);
			SLTPushBack(&phead, n);
			printf("插入成功！\n");
			break;
		case 5:
			SLTPopFront(&phead);
			printf("删除成功！\n");
			break;
		case 6:
			SLTPopBack(&phead);
			printf("删除成功！\n");
			break;
		case 8:
			n = 0;
			b = 0;
			printf("请输入待插入位置节点的数据：");
			scanf("%d", &b);
			printf("请输入要插入的数据：");
			scanf("%d", &n);
			SLTNode* FindPush = SLTFind(phead, b);
			if (FindPush == NULL)
				printf("该节点不存在\n");
			else
				SLTInsert(&phead, FindPush, n);
			break;
		case 7:
			b = 0;
			printf("请输入待删除位置节点的数据：");
			scanf("%d", &b);
			SLTNode* FindPop = SLTFind(phead, b);
			if (FindPop == NULL)
				printf("该节点不存在\n");
			else
				SLTErase(&phead, FindPop);
			break;
		case 0:
			printf("程序退出...\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}