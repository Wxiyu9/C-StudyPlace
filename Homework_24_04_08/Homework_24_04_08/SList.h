#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef int SLTDataType;

//定义链表节点结构体
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SListNode;

//打印链表
void PrintList(SListNode* phead);

//插入方法：尾插+头插
void SLTPushBack(SListNode** pphead, SLTDataType x);
void SLTPushFront(SListNode** pphead, SLTDataType x);

//删除方法：尾删+头删
void SLTPopBack(SListNode** pphead);
void SLTPopFront(SListNode** pphead);

//查找
SListNode* SLTFind(SListNode* phead, SLTDataType x);

//在指定位置之前插入数据
void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x);
//在指定位置之后插入数据
void SLTInsertAfter(SListNode* pos, SLTDataType x);

//删除指定位置的数据
void SLTErase(SListNode** pphead, SListNode* pos);
//删除指定位置之后的数据
void SLTEraseAfter(SListNode* pos);

//销毁链表
void SListDesTroy(SListNode** pphead);