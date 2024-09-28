#define _CRT_SECURE_NO_WARNINGS 1
//#define switch 1

#ifdef switch
#include <stdio.h>
//计算结构体中某变量相对于首地址的偏移
#define OFFSETOF(type,member) (size_t)&((type*)0)->member
//(type*)0 是将0强制类型转换为结构体指针类型
// 也就相当于定义一个地址为0的结构体指针

//((type*)0))->member 是找到结构体中的成员

//&((type*0))->member 是该结构体成员的地址

//(size_t)&((type*)0)->member 把结构体成员地址强制转换为size_t
//因为是从0开始的，所以该地址就是该成员相对于首地址的偏移


struct Stu {
	char name[10];
	double grades;
	int number;
};

int main()
{
	printf("%zd\n", OFFSETOF(struct Stu, name));
	printf("%zd\n", OFFSETOF(struct Stu, grades));
	printf("%zd\n", OFFSETOF(struct Stu, number));
	return 0;
}
#endif