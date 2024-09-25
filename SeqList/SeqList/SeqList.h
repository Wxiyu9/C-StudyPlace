#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//定义顺序表并声明操作函数

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType * arr;
	int size;//有效数据个数
	int capacity;//空间大小
}SL;

//顺序表初始化
void SLInit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的打印
void SLPrint(SL s);

//检查空间是否足够
void SLCheckCapacity(SL* ps);

//尾部插入
void SLPushBack(SL* ps, SLDataType x);

//头部插入
void SLPushFront(SL* ps, SLDataType x);

//尾部删除
void SLPopBack(SL* ps);

//头部删除
void SLPopFront(SL* ps);

//指定位置之前插入
void SLInsert(SL* ps, int pos, SLDataType x);

//指定位置之前删除
void SLErase(SL* ps, int pos);

//查找某元素
int SLFind(SL* ps, SLDataType x);
