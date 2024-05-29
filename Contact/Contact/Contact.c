#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
#include "SeqList.h"

//实现通讯录相关操作函数

//通讯录的初始化
void ContactInit(Contact* con)
{
	SLInit(con);
}

//通讯录的销毁
void ContactDestroy(Contact* con)
{
	SLDestroy(con);
}

//通讯录添加数据
void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入要添加的联系人姓名：");
	scanf("%s", info.name);

	printf("请输入要添加的联系人性别：");
	scanf("%s", info.gender);

	printf("请输入要添加的联系人年龄：");
	scanf("%d", &info.age);

	printf("请输入要添加的联系人电话：");
	scanf("%s", info.tel);

	printf("请输入要添加的联系人地址：");
	scanf("%s", info.addr);

	//将信息添加到通讯录中
	SLPushBack(con, info);
}

//以名字查找联系人
int FindByName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->arr->name, name))
		{
			//找到了
			return i;
		}
	}
	//没找到
	return -1;
}
//通讯录删除数据
void ContactDel(Contact* con)
{
	//判断要删除的联系人是否存在
	char name[NAME_MAX];
	printf("请输入要删除的联系人姓名：");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("该联系人不存在！");
		return;
	}
	//联系人存在，删除该联系人
	SLErase(con, find);
	printf("删除完毕\n");
}

//通讯录的修改
void ContactModify(Contact* con)
{
	//判断要删除的联系人是否存在
	char name[NAME_MAX];
	printf("请输入要修改的联系人：");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("该联系人不存在\n");
		return;
	}
	//联系人存在，修改信息
	printf("请输入新的姓名：");
	scanf("%s", con->arr[find].name);
	printf("请输入新的性别：");
	scanf("%s", con->arr[find].gender);
	printf("请输入新的年龄：");
	scanf("%d", con->arr[find].age);
	printf("请输入新的电话：");
	scanf("%s", con->arr[find].tel);
	printf("请输入新的地址：");
	scanf("%s", con->arr[find].addr);
}

//通讯录查找
void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名：")；
}

//打印通讯录內容
void ContactShow(Contact* con);