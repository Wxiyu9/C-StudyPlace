#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef int SLTDataType;

//��������ڵ�ṹ��
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SListNode;

//��ӡ����
void PrintList(SListNode* phead);

//���뷽����β��+ͷ��
void SLTPushBack(SListNode** pphead, SLTDataType x);
void SLTPushFront(SListNode** pphead, SLTDataType x);

//ɾ��������βɾ+ͷɾ
void SLTPopBack(SListNode** pphead);
void SLTPopFront(SListNode** pphead);

//����
SListNode* SLTFind(SListNode* phead, SLTDataType x);

//��ָ��λ��֮ǰ��������
void SLTInsert(SListNode** pphead, SListNode* pos, SLTDataType x);
//��ָ��λ��֮���������
void SLTInsertAfter(SListNode* pos, SLTDataType x);

//ɾ��ָ��λ�õ�����
void SLTErase(SListNode** pphead, SListNode* pos);
//ɾ��ָ��λ��֮�������
void SLTEraseAfter(SListNode* pos);

//��������
void SListDesTroy(SListNode** pphead);