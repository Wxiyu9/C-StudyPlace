#pragma once
#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 13
#define ADDR_MAX 100

//定义通讯录结构，声明通讯录相关操作函数

typedef struct personInfo
{
	char name[NAME_MAX];//姓名
	char gender[GENDER_MAX];//性别
	int age;//年龄
	char tel[TEL_MAX];//电话
	char addr[ADDR_MAX];//地址
}peoInfo;

//前置声明，并将SeqList重命名
typedef struct SeqList Contact;

//通讯录的初始化
void ContactInit(Contact* con);

//通讯录的销毁
void ContactDestroy(Contact* con);

//通讯录添加数据
void ContactAdd(Contact* con);

//通讯录删除数据
void ContactDel(Contact* con);

//通讯录的修改
void ContactModify(Contact* con);

//通讯录查找
void ContactFind(Contact* con);

//打印通讯录內容
void ContactShow(Contact* con);

//以名字查找联系人
int FindByName(Contact* con, char name[]);
