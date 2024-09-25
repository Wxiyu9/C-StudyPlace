#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int EmptyType;

//定义顺序表结构体
typedef struct SQList {
	EmptyType* a;
	int size;		//实际数据量
	int capasity;	//总空间
}SQList;

//定义顺序表状态：
//未初始化  0
//已初始化  1
//已销毁    2
char* State = "未初始化";//菜单
short StateCode = 0;

char* StateA = "未初始化";//顺序表A
short StateCodeA = 0;

char* StateB = "未初始化";//顺序表B
short StateCodeB = 0;

char* Operands = "";//操作对象

//验证操作合法性
//返回0：不合法
//返回1：合法
int CheckAction(short stateCodex)
{
	if (stateCodex == 1)
		return 1;
	else if (stateCodex == 0)
	{
		printf("未初始化，不能进行此操作\n");
		return 0;
	}
	else
	{
		printf("已销毁，不能进行此操作\n");
		return 0;
	}
}

//切换菜单打印
void PrintMenu1()
{
	printf("*******************************************\n");
	printf("*                                         *\n");
	printf("*         1.切换为顺序表A                 *\n");
	printf("*         2.切换为顺序表B                 *\n");
	printf("*         3.合并两个非递减有序的线性表    *\n");
	printf("*         4.退出程序                      *\n");
	printf("*                                         *\n");
	printf("*******************************************\n");

}

//操作菜单打印
void PrintMenu2()
{
	printf("*******************************************\n");
	printf("*                                         *\n");
	printf("*         操作对象：%s               *\n",Operands);
	printf("*                                         *\n");
	printf("*     1. 初始化一个线性表                 *\n");
	printf("*     2. 销毁线性表                       *\n");
	printf("*     3. 清空线性表                       *\n");
	printf("*     4. 判断线性表是否为空               *\n");
	printf("*     5. 求线性表长度                     *\n");
	printf("*     6. 获取线性表指定位置元素           *\n");
	printf("*     7. 获取线性表中元素的位置           *\n");
	printf("*     8. 求直接前驱                       *\n");
	printf("*     9. 求直接后继                       *\n");
	printf("*     10.在线性表指定位置插入元素         *\n");
	printf("*     11.删除线性表指定位置的元素         *\n");
	printf("*     12.根据元素值，删除线性表中的元素   *\n");
	printf("*     13.对线性表进行排序                 *\n");
	printf("*     14.显示线性表                       *\n");
	printf("*     15.返回上一级菜单                   *\n");
	printf("*                                         *\n");
	printf("*         线性表状态：%s            *\n",State);
	printf("*                                         *\n");
	printf("*******************************************\n");
}

//1.初始化顺序表
void InitSQList(SQList* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capasity = ps->size = 0;
}

//2.销毁顺序表
void DestroyedSQList(SQList* ps) {
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
	}
	ps->a = NULL;
	ps->capasity = ps->size = 0;
	State = "已销毁  ";
	StateCode = 2;
}

//3.清空顺序表
void EmptySQList(SQList* ps)
{
	assert(ps);
	ps->size = 0;
}

//4.判断线性表是否为空
int JudgmentEmpty(SQList* ps) {
	assert(ps);
	if (ps->size == 0)
		return 0;//为空
	else
		return 1;//不为空
}

//5.求线性表长度
int SQListLength(SQList* ps)
{
	assert(ps);
	return ps->size;
}

//6.获取线性表指定位置元素
EmptyType SearchElement(SQList* ps, int location) {
	if (ps->size < location || location <= 0)
		return -1;//位置不在合法范围内
	return *(ps->a + location - 1);
}

//7.获取线性表中元素的位置
EmptyType SearchLocation(SQList* ps, EmptyType element) {
	for (int i = 0; i < ps->size; i++)
	{
		if (*(ps->a + i) == element)
			return i + 1;
	}
	return -1;
}

//8.求直接前驱
void SearchPrecursor(SQList* ps, EmptyType element) {
	EmptyType n = SearchLocation(ps, element);
	if (n == 1)
		printf("第一个元素没有前驱\n");
	else if (n == -1)
		printf("%d不存在\n", element);
	else
		printf("%d的前驱元素为：%d\n", element, *(ps->a + n - 2));
}

//9.求直接后驱
void SearchBack(SQList* ps, EmptyType element) {
	int i = 0;
	for (i = ps->size - 1; i >= 0; i--)
	{
		if (*(ps->a + i) == element)
		{
			if (i == ps->size - 1)
				printf("最后一个数据没有后驱\n");
			else
				printf("%d的直接后驱为：%d\n", element, *(ps->a + i + 1));
			return;
		}
	}
	printf("%d不存在\n", element);
}

//判断空间是否足够
void CheckSpace(SQList* ps) {
	if (ps->size == ps->capasity)
	{
		int NewCapasity = ps->capasity == 0 ? 4 : 2 * ps->capasity;
		EmptyType* TempList = (EmptyType*)realloc(ps->a, sizeof(EmptyType) * NewCapasity);
		if (TempList == NULL)
		{
			perror("realloc error:");
		}
		ps->a = TempList;
		ps->capasity = NewCapasity;
	}
}

//10.指定位置插入元素
//返回1：正常插入
//返回0：位置不合法
int InsertByLocation(SQList* ps ,int location, EmptyType element) {
	CheckSpace(ps);
	if (location <= 0 || location > ps->size + 1)
		return 0;//位置不合法
	if (ps->size == 0)//顺序表为空时
	{
		*(ps->a) = element;
		ps->size = 1;
		return 1;
	}
	for (int i = ps->size - 1; i >= location - 1; i--)
		*(ps->a + i + 1) = *(ps->a + i);
	*(ps->a + location - 1) = element;
	ps->size++;
	return 1;
}

//11.删除指定位置元素
//返回1：正常删除
//返回0：位置不合法
int DeleteByLocation(SQList* ps, int location) {
	//0 1  2  3 4 5 6 7
	//1 2 _3_ 4 5 6 7 8
	//- -  -  - -
	if (location <= 0 || location > ps->size || ps->size == 0)
		return 0;//位置不合法

	for (int i = location - 1; i < ps->size - 1; i++)
		*(ps->a + i) = *(ps->a + i + 1);
	ps->size--;
	return 1;
}

//12.根据元素值，删除指定元素
//返回0：元素不合法
//返回1：正常删除
int DeleteByElement(SQList* ps, EmptyType element) {
	int i = 0;
	int Captcha = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (*(ps->a + i) == element)
		{
			DeleteByLocation(ps, i + 1);
			Captcha = 1;
		}
	}
	return Captcha;
}

//13.对线性表进行排序
void SortSQList(SQList* ps) {
	for (int i = 0; i < ps->size - 1; i++)
	{
		for (int j = 0; j < ps->size - 1 - i; j++)
		{
			if (*(ps->a + j) > *(ps->a + j + 1))
			{
				EmptyType temp = *(ps->a + j);
				*(ps->a + j) = *(ps->a + j + 1);
				*(ps->a + j + 1) = temp;
			}
		}
	}
}

//14.显示顺序表
void ShowSQList(SQList* ps)
{
	printf("显示顺序表：");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", *(ps->a + i));
	}
	printf("\n");
}

//顺序表去重
void Deduplication(SQList* ps){
	if (ps->size < 2)
		return;
	int cur = 1;
	while (cur != ps->size)
	{
		if (*(ps->a + cur) == *(ps->a + cur - 1))
		{
			DeleteByLocation(ps, cur);
			continue;
		}
		cur++;
	}
}



//case1 case2
//二级菜单：
//顺序表 SQList* s 
//状态 char** statex 
//状态代码 short* stateCodex
//顺序表名称 char* ListName
void OperateMenu(SQList* s, char** statex, short* stateCodex, char* ListName)
{
	int location; //记录位置
	EmptyType element; //记录元素
	EmptyType Captcha;//记录是否合法
	int input = 0;//菜单选项
	do {
		State = *statex;
		StateCode = *stateCodex;
		Operands = ListName;
		PrintMenu2();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			InitSQList(s);
			*statex = "已初始化";
			*stateCodex = 1;
			printf("初始化成功！\n");
			break;
		case 2:
			if (!CheckAction(*stateCodex))
				break;
			DestroyedSQList(s);
			*statex = "已销毁  ";
			*stateCodex = 2;
			printf("销毁成功！\n");
			break;
		case 3:
			if (!CheckAction(*stateCodex))
				break;
			EmptySQList(s);
			printf("清空成功！\n");
			break;
		case 4:
			if (!CheckAction(*stateCodex))
				break;
			if (JudgmentEmpty(s))
				printf("顺序表不为空\n");
			else
				printf("顺序表为空\n");
			break;
		case 5:
			if (!CheckAction(*stateCodex))
				break;
			printf("顺序表长度为：%d\n", SQListLength(s));
			break;
		case 6:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待查元素位置：");
			scanf("%d", &location);
			Captcha = SearchElement(s, location);
			if (Captcha == -1)
				printf("位置不合法！\n");
			else
				printf("位置%d上的元素为：%d\n", location, Captcha);
			break;
		case 7:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待查位置的元素：");
			scanf("%d", &element);
			location = SearchLocation(s, element);
			if (location < 0)
				printf("未找到该元素\n");
			else
				printf("该元素位置为：%d\n", location);
			break;
		case 8:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待查元素：");
			scanf("%d", &element);
			SearchPrecursor(s, element);
			break;
		case 9:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待查元素：");
			scanf("%d", &element);
			SearchBack(s, element);
			break;
		case 10:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入插入位置：");
			scanf("%d", &location);
			printf("请输入插入元素：");
			scanf("%d", &element);
			if (!InsertByLocation(s, location, element))
				printf("位置不合法，输入失败！\n");
			else
				printf("插入成功！\n");
			break;
		case 11:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待删除位置：");
			scanf("%d", &location);
			Captcha = DeleteByLocation(s, location);
			if (Captcha == 0)
				printf("删除失败，位置不合法！\n");
			else
				printf("删除成功！\n");
			break;
		case 12:
			if (!CheckAction(*stateCodex))
				break;
			printf("请输入待删除元素：");
			scanf("%d", &element);
			Captcha = DeleteByElement(s, element);
			if (Captcha == 0)
				printf("删除失败，元素不合法！\n");
			else
				printf("删除成功！\n");
			break;
		case 13:
			if (!CheckAction(*stateCodex))
				break;
			SortSQList(s);
			printf("已排序！\n");
			break;
		case 14:
			if (!CheckAction(*stateCodex))
				break;
			ShowSQList(s);
			break;
		case 15:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input != 15);
}

//case3
//合并两个非递减有序的线性表
SQList* MergeList(SQList* ps, SQList* pss, SQList* temp)
{
	//定义一个第三方顺序表，用于存储合并后的顺序表
	temp->capasity = ps->capasity + ps->capasity;
	temp->size = ps->size + pss->size;
	EmptyType* newtemp = (EmptyType*)malloc(sizeof(EmptyType) * temp->capasity);
	if (newtemp == NULL)
		perror("malloc error:");
	temp->a = newtemp;

	//将两个表首尾相连
	for (int i = 0; i < ps->size; i++)
		*(temp->a + i) = *(ps->a + i);
	for (int i = ps->size; i < temp->size; i++)
		*(temp->a + i) = *(pss->a + i - ps->size);

	//排序
	SortSQList(temp);

	//去重
	Deduplication(temp);

	return temp;
}

int main() {
	int input = 0;//一级菜单选项
	SQList s;//顺序表a
	SQList ss;//顺序表b
	SQList temp;//合并后顺序表
	do {
		PrintMenu1();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			OperateMenu(&s, &StateA, &StateCodeA,"顺序表A");
			break;
		case 2:
			OperateMenu(&ss, &StateB, &StateCodeB,"顺序表B");
			break;
		case 3:
		{
			if (!(CheckAction(StateCodeB)&&CheckAction(StateCodeA)))
				break;
			InitSQList(&temp);
			MergeList(&s, &ss,&temp);
			ShowSQList(&temp);
			break;
		}
		case 4:
			printf("程序退出\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input != 4);
	return 0;
}