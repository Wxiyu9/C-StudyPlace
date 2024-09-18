#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <windows.h>
#define PI 3.14

//计算机菜单
void menu()
{
	printf("****************************************\n");
	printf("******         小小计算器         ******\n");
	printf("******      1.加法    2.减法      ******\n");
	printf("******      3.乘法    4.除法      ******\n");
	printf("******      5.判断数字的位数      ******\n");
	printf("******      6.计算圆面积          ******\n");
	printf("******      7.判断闰年            ******\n");
	printf("******      8.成绩转换            ******\n");
	printf("******      9.计算1~x的奇数和     ******\n");
	printf("******      10.计算1~x的偶数和    ******\n");
	printf("******      11.输出1~x中3的倍数   ******\n");
	printf("******   12.输出x~y中第一个即被3  ******\n");
	printf("******      整除又被5整除的数     ******\n");
	printf("******      13.求水仙花数         ******\n");
	printf("******      14.求最大值           ******\n");
	printf("******      15.求最大最小值       ******\n");
	printf("******      16.冒泡排序(10)       ******\n");
	printf("******      17.矩阵转置(3×4)      ******\n");
	printf("******      18.求对角线之和       ******\n");
	printf("******      19.统计单词个数       ******\n");
	printf("******      20.操作静态链表       ******\n");
	printf("******      21.操作动态链表       ******\n");
	printf("******      22.学生成绩排序       ******\n");
	printf("******      23.学生成绩普涨       ******\n");
	printf("******      24.取模运算           ******\n");
	printf("******      25.退出程序           ******\n");
	printf("****************************************\n");
}
//5.判断数字位数
void Num(int x)
{
	if (x < 0)
	{
		printf("要求输入的数为正整数\n");
		return;
	}
	else if (x > 999)
	{
		printf("要求输入的数为三位以内的正整数\n");
		return;
	}
	int arr[3] = { 0 };
	int i = 0;
	while (x)
	{
		arr[i] = x % 10;
		x /= 10;
		i++;
	}
	if (i == 1)
		printf("该数为1位数，个位是%d\n", arr[0]);
	else if (i == 2)
		printf("该数为2位数，十位是%d，个位是%d\n", arr[1], arr[0]);
	else
		printf("该数为3位数，百位是%d，十位是%d，个位是%d\n", arr[2], arr[1], arr[0]);
}

//7.判断是否为闰年
void Year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d是闰年\n", year);
	else
		printf("%d是平年\n", year);
}

//8.成绩转换
void Grade(int x)
{
	if (x < 0 || x > 100)
	{
		printf("成绩输入错误\n");
		return;
	}
	if (x >= 90)
		printf("优秀\n");
	else if (x < 90 && x >= 80)
		printf("良\n");
	else if (x < 80 && x >= 70)
		printf("中\n");
	else if (x < 70 && x >= 60)
		printf("及格\n");
	else
		printf("不及格\n");
}

//9.判断1~x的奇数和
void OddNum(int x)
{
	int i;
	int num = 0;
	for (i = 1; i <= x; i++)
	{
		if (i % 2 == 1)
			num += i;
	}
	printf("1~%d中的奇数和为%d\n", x, num);
}

//10.判断1~x的偶数和
void EvenNum(int x)
{
	int i = 1;
	int num = 0;
	while (i <= x)
	{
		if (i % 2 == 0)
			num += i;
		i++;
	}
	printf("1~%d中的偶数和为%d\n", x, num);
}

//11.输出1~x中3的倍数
void ModThree(int x)
{
	int i = 1;
	int num = 0;
	do
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			num += i;
		}
		i++;
	} while (i <= x);
	if (!num)
	{
		printf("不存在\n");
	}
	else
		printf("\n");
}

//12.输出x~y中第一个即被三整数又被五整除的数
void ModThreeFive(int x, int y)
{
	int i = 0;
	for (i = x; i <= y; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
			return;
		}
	}
	printf("不存在\n");
}

//13.输出水仙花数
void DafNum()
{
	for (int i = 100; i < 1000; i++)
	{
		int q = i % 10;
		int w = (i / 10) % 10;
		int e = (i / 100) % 10;
		int num = q * q * q + w * w * w + e * e * e;
		if (num == i)
			printf("%d ", num);
	}
	printf("\n");
}

//14.求最大值
int Max(int x, int y)
{
	if (x > y)
		return x;
	return y;
}

//15.求最大最小值
void MaxMin(int* x, int* y)
{
	assert(x && y);
	if (*x > *y)
		return;
	int a = *x;
	*x = *y;
	*y = a;
}

//16.冒泡排序
void Bubbles(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//17.矩阵转置
void MatTra(int* arr1, int* arr2, int row, int col)
{
	assert(arr1 && arr2);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(arr2 + j * row + i) = *(arr1 + i * col + j);
		}
	}
	printf("转置结果：\n");
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			printf("%d ", *(arr2 + i * row + j));
		printf("\n");
	}
}

//18.求对角线和
int  DiaNum(int* arr, int size)
{
	assert(arr);
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		num += *(arr + i * size + i);
	}
	return num;
}

//19.统计单词个数
int WordNum(char* str)
{
	assert(str);
	char* ch = str;
	int num = 0;
	while (*ch != '\0')
	{
		if (*ch == ' ')
			num++;
		ch++;
	}
	return num + 1;
}

//20.静态链表
void StaticList()
{
	typedef struct SQStaticList {
		int data;
		struct SQStaticList* next;
	}SSL;
	SSL arr[4];
	arr[0].data = 1;
	arr[1].data = 2;
	arr[2].data = 3;
	arr[3].data = 4;

	SSL* head = &arr[0];
	arr[0].next = &arr[1];
	arr[1].next = &arr[2];
	arr[2].next = &arr[3];
	arr[3].next = NULL;

	SSL* cur = head;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//21.动态链表
void SListNode()
{
	typedef struct SListNode
	{
		int data;
		struct SListNode* next;
	}SLTNode;
	SLTNode* head = NULL;
	int n = 0;
	printf("请在链表头部插入数据：");
	scanf("%d", &n);
	do {
		SLTNode* pcur = (SLTNode*)malloc(sizeof(SLTNode));
		pcur->data = n;
		pcur->next = head;
		head = pcur;
		printf("请在链表头部插入数据：");
		scanf("%d", &n);
	} while (n >= 0);
	SLTNode* ccur = head;
	printf("链表內数据为：");
	while (ccur)
	{
		printf("%d ", ccur->data);
		ccur = ccur->next;
	}
	printf("\n");
}

//22.统计学生信息
void StuInformation()
{
	typedef struct StuInformation {
		char id[20];
		char name[10];
		int grade;
	}Stu;
	Stu inf[10];
	size_t sz = sizeof(inf) / sizeof(inf[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("请输入学生%d的学号：", i + 1);
		scanf("%s", inf[i].id);
		printf("请输入学生%d的姓名：", i + 1);
		scanf("%s", inf[i].name);
		printf("请输入学生%d的成绩：", i + 1);
		scanf("%d", &inf[i].grade);
		printf("\n");
	}
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (inf[j].grade > inf[j + 1].grade)
			{
				Stu a = inf[j];
				inf[j] = inf[j + 1];
				inf[j + 1] = a;
			}
		}
	}
	printf("排序后结果：\n");
	int num = 0;
	for (int i = 0; i < sz; i++)
	{
		num += inf[i].grade;
		printf("学号：%s\t姓名：%s\t成绩：%d\t\n", inf[i].id, inf[i].name, inf[i].grade);
	}
	printf("学生的总成绩为：%d\n", num);
}

//23.成绩普涨
void StuGradUpper()
{
	FILE* pf = fopen("d:\\my.txt.txt", "r+");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int grade[10] = { 0 };
	int i = 0;
	while (!feof(pf))
	{
		fscanf(pf, "%d", &grade[i]);
		grade[i] += 10;
		i++;
	}
	rewind(pf);
	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
			fprintf(pf, "%d", grade[i]);
		else
			fprintf(pf, "%d\n", grade[i]);
	}
	printf("成绩普涨10分成功！\n");
	fclose(pf);
	pf = NULL;
}

int main()
{
	int x, y, input;
	float a, b;
	do
	{
		system("cls");
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 25:
			printf("退出程序...\n");
			break;
		case 1:
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			printf("加法结果的十进制形式是：%d\n", x + y);
			printf("加法结果的八进制形式是：%o\n", x + y);
			printf("加法结果的十六进制形式是：%x\n", x + y);
			break;
		case 2:
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			printf("减法结果的十进制形式是：%d\n", x - y);
			printf("减法结果的八进制形式是：%o\n", x - y);
			printf("减法结果的十六进制形式是：%x\n", x - y);
			break;
		case 3:
			printf("请输入操作数：");
			scanf("%f%f", &a, &b);
			printf("乘法结果的小数形式是：%f\n", a * b);
			printf("乘法结果的指数形式是：%e\n", a * b);
			break;
		case 4:
			printf("请输入操作数：");
			scanf("%f%f", &a, &b);
			printf("除法结果的小数形式是：%f\n", a / b);
			printf("除法结果的指数形式是：%e\n", a / b);
			break;
		case 24:
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			if (y == 0)
			{
				printf("除数为0，无法进行除法运算\n");
				break;
			}
			printf("取模结果的十进制形式是：%d\n", x % y);
			printf("取模结果的八进制形式是：%o\n", x % y);
			printf("取模结果的十六进制形式是：%x\n", x % y);
			break;
		case 6:
			printf("请输入圆半径：");
			scanf("%f", &a);
			printf("该圆面积是：%f\n", PI * a * a);
			printf("该圆面积保留两位小数的结果是：%.2f\n", PI * a * a);
			break;
		case 5:
			printf("请输入要判断的数字：");
			scanf("%d", &x);
			Num(x);
			break;
		case 7:
			printf("请输入待判断年份：");
			scanf("%d", &x);
			Year(x);
			break;
		case 8:
			printf("请输入成绩：");
			scanf("%d", &x);
			Grade(x);
			break;
		case 9:
			printf("请输入x：");
			scanf("%d", &x);
			OddNum(x);
			break;
		case 10:
			printf("请输入x：");
			scanf("%d", &x);
			EvenNum(x);
			break;
		case 11:
			printf("请输入x：");
			scanf("%d", &x);
			ModThree(x);
			break;
		case 12:
			printf("请输入x，y：");
			scanf("%d%d", &x, &y);
			ModThreeFive(x, y);
			break;
		case 13:
			printf("水仙花数有：");
			DafNum();
			break;
		case 14:
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			printf("最大值为：%d\n", Max(x, y));
			break;
		case 15:
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			MaxMin(&x, &y);
			printf("最大值为：%d\n最小值为：%d\n", x, y);
			break;
		case 16:
			printf("请输入要排序的十个数：");
			int arr[10] = { 0 };
			int size = sizeof(arr) / sizeof(arr[0]);
			for (int i = 0; i < size; i++)
				scanf("%d", &arr[i]);
			Bubbles(arr, size);
			break;
		case 17:
			printf("请输入一个3×4的整数矩阵\n");
			int arr1[3][4] = { 0 };
			int arr2[4][3] = { 0 };
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					scanf("%d", &arr1[i][j]);
				}
			}
			MatTra(arr1, arr2, 3, 4);
			break;
		case 18:
			printf("请输入一个3×3的整数矩阵\n");
			int arr3[3][3] = { 0 };
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					scanf("%d", &arr3[i][j]);
				}
			}
			printf("主对角线之和为：%d\n", DiaNum(arr3, 3));
			break;
		case 19:
			printf("请输入：\n");
			char str1[256] = { 0 };
			getchar();
			gets(str1);
			printf("共%d个单词\n", WordNum(str1));
			break;
		case 20:
			StaticList();
			break;
		case 21:
			SListNode();
			break;
		case 22:
			StuInformation();
			break;
		case 23:
			StuGradUpper();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
		system("pause");
	} while (input != 25);
	return 0;
}