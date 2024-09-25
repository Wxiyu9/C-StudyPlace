#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//≤‚ ‘π¶ƒ‹
SL SQ;
void Test01()
{
	SLInit(&SQ);
	SLPushBack(&SQ, 7);
	SLPushBack(&SQ, 6);
	SLPushBack(&SQ, 5);
	SLPrint(SQ);
	SLPushFront(&SQ, 4);
	SLPushFront(&SQ, 3);
	SLPrint(SQ);
	SLInsert(&SQ, 4, 2);
	SLInsert(&SQ, 2, 1);
	SLPrint(SQ);
	SLErase(&SQ, 5);
	SLErase(&SQ, 4);
	SLPrint(SQ);
	SLFind(&SQ, 7);
	SLFind(&SQ, 9);
}
int main()
{
	Test01();
	return 0;
}
