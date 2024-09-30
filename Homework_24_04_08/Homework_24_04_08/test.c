#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


void Test01()
{
	SListNode* phead = NULL;
	SLTPushFront(&phead, 3);
	SLTPushFront(&phead, 4);
	SLTPushFront(&phead, 5);
	SLTPushFront(&phead, 6);
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 2);
	SLTPushBack(&phead, 3);
	//PrintList(phead);
	//system("pause");
	//SLTPopBack(&phead);
	//SLTPopFront(&phead);
	PrintList(phead);
	SListNode* cur = SLTFind(phead, 3);
	SLTInsert(&phead, cur, 9);

	PrintList(phead);
	SListNode* cur2 = SLTFind(phead, 5);
	SLTInsert(&phead, cur2, 1);

	PrintList(phead);
}

void Test02()
{
	SListNode* phead = NULL;
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 2);
	SLTPushBack(&phead, 3);
	SLTPushBack(&phead, 4);
	SLTPushBack(&phead, 5);
	PrintList(phead);
	SListNode* cur = SLTFind(phead, 3);
	SListNode* cur1 = SLTFind(phead, 1);
	SLTInsert(&phead, cur, 6);
	SLTInsert(&phead, cur1, 6);
	PrintList(phead);
	SListNode* cur2 = SLTFind(phead, 4);
	SLTInsertAfter(cur2, 9);
	SListNode* cur3 = SLTFind(phead, 5);
	SLTInsertAfter(cur3, 10);
	PrintList(phead);

}

void Test03()
{
	SListNode* phead = NULL;
	SLTPushFront(&phead, 1);
	SLTPushFront(&phead, 2);
	SLTPushFront(&phead, 3);
	SLTPushFront(&phead, 4);
	SLTPushFront(&phead, 5);
	PrintList(phead);
	SListNode* cur1 = SLTFind(phead, 3);
	SLTErase(&phead, cur1);
	SLTErase(&phead, phead);
	PrintList(phead);
}

void Test04()
{
	SListNode* phead = NULL;
	SLTPushFront(&phead, 1);
	SLTPushFront(&phead, 2);
	SLTPushFront(&phead, 3);
	SLTPushFront(&phead, 4);
	SLTPushFront(&phead, 5);
	PrintList(phead);
	SListNode* cur1 = SLTFind(phead, 4);
	SLTEraseAfter(cur1);
	SLTEraseAfter(phead);
	PrintList(phead);
}

int main()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
	return 0;
}