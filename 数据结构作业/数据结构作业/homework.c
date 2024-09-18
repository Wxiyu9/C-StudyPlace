#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int NodeType;

//定义链表
typedef struct Gather {
	NodeType data;
	struct Gather* next;
}Gat;

void PrintMenu()
{
	printf("**************************************\n");
	printf("******     1.输入集合A和B       ******\n");
	printf("******     2.求集合A交B         ******\n");
	printf("******     3.求集合A并B         ******\n");
	printf("******     4.求集合A-B          ******\n");
	printf("******   5.判断A是否是B的子集   ******\n");
	printf("******    退出，输入一个负数！  ******\n");
	printf("**************************************\n");
}

//判断数据是否存在
int Judgment(Gat* phead, NodeType num) {
	Gat* cur = phead;
	while (cur)
	{
		if (cur->data == num)
			return 1;//存在
		cur = cur->next;
	}
	return 0;//不存在
}

//创建节点
Gat* CreatNode(NodeType x) {
	Gat* Node = (Gat*)malloc(sizeof(Gat));
	Node->data = x;
	Node->next = NULL;
	return Node;
}

//链表尾插数据
void PushBack(Gat** pphead, NodeType x) {
	assert(pphead);
	Gat* NewNode = CreatNode(x);
	//空链表
	if (*pphead == NULL)
	{
		*pphead = NewNode;
	}
	else {
		Gat* cur = *pphead;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = NewNode;
	}
}

//销毁链表
void DesList(Gat** pphead)
{
	Gat* cur = *pphead;
	while (cur)
	{
		Gat* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}

//集合输入
void Input(Gat** pphead, int n){
	DesList(pphead);
	printf("请输入数据：");
	for (int i = 0; i < n; i++)
	{
		NodeType num = 0;
		scanf("%d", &num);
		if (Judgment(*pphead, num))
		{
			printf("%d已存在，请重新输入该数\n",num);
			i--;
		}
		else {
			PushBack(pphead, num);
		}
	}
	printf("输入成功！\n");

}

//求集合交集
void Jiaoji(Gat* pheada, int na, Gat* pheadb, int nb) {
	printf("两集合交集为：{");
	Gat* cur = pheada;
	while (cur)
	{
		if (Judgment(pheadb, cur->data))
			printf(" %d ", cur->data);
		cur = cur->next;
	}
	printf("}\n");
}

//求集合并集
void Bingji(Gat* pheada, Gat* pheadb) {
	printf("两集合的并集为：{");
	Gat* cur = pheada;
	//遍历集合A
	while (cur)
	{
		if (!Judgment(pheadb, cur->data))
			printf(" %d ", cur->data);
		cur = cur->next;
	}
	Gat* curb = pheadb;
	while (curb)
	{
		printf(" %d ", curb->data);
		curb = curb->next;
	}
	//遍历集合B
	printf("}\n");
}

//求集合相减
void Jian(Gat* pheada, Gat* pheadb) {
	printf("两集合相减结果为：{");
	Gat* cur = pheada;
	while (cur)
	{
		if (!Judgment(pheadb, cur->data))
			printf(" %d ", cur->data);
		cur = cur->next;
	}
	printf("}\n");
}

//判断是否为子集
int Panduan(Gat* pheada, Gat* pheadb) {
	Gat* cur = pheada;
	while (cur)
	{
		if (!Judgment(pheadb, cur->data))
			return 0;//不是子集
		cur = cur->next;
	}
	return 1;//是子集
}

int main()
{
	Gat* pheada = NULL;
	Gat* pheadb = NULL;
	int na = 0;
	int nb = 0;
	int input = 0;
	do {
		PrintMenu();
		printf("请选择：");
		scanf("%d", &input);
		getchar();
		if (input < 0)
		{
			printf("程序退出");
			break;
		}
		switch (input) {
		case 1:
			printf("请输入集合A数据个数：");
			scanf("%d", &na);
			Input(&pheada,na);
			printf("请输入集合B数据个数：");
			scanf("%d", &nb);
			Input(&pheadb,nb);
			break;
		case 2:
			Jiaoji(pheada,na,pheadb,nb);
			break;
		case 3:
			Bingji(pheada,pheadb);
			break;
		case 4:
			Jian(pheada, pheadb);
			break;
		case 5:
			if (Panduan(pheada, pheadb))
				printf("集合A是集合B的子集\n");
			else
				printf("集合A不是集合B的子集\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	} while (1);
	return 0;
}