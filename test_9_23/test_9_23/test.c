#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

int input(int* A, int a) {
	int i, j, flag = 0;
	for (i = 0; i < a; i++) {
		scanf_s("%d", A);
		A++;
	}
	for (i = 0; i < a - 1; i++) {
		for (j = a + 1; j < a; j++) {
			if (*(A + i) == *(A + j)) {
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	if (flag == 1) {
		printf("输入的元素中有重复，请重新输入。\n\n");
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	printf("************************************\n");
	printf("***  1---输入集合A和B            ***\n");
	printf("***  2---求集合A交B              ***\n");
	printf("***  3---求集合A并B              ***\n");
	printf("***  4---求集合A-B               ***\n");
	printf("***  5---判断A是否是B的子集      ***\n");
	printf("***  6---查看集合A与集合B的元素  ***\n");
	printf("***  （输入一个负数退出程序）    ***\n");
	printf("************************************\n\n");
	int a, b, order, i;
	printf("请输入数组A的元素个数：");
	scanf_s("%d", &a);
	printf("\n");
	printf("请输入数组B的元素个数：");
	scanf_s("%d", &b);
	printf("\n");
	int* A = (int*)malloc(a * sizeof(int));
	int* B = (int*)malloc(b * sizeof(int));


	do {
		printf("请输入功能的编号：");
		scanf_s("%d", &order);
		printf("\n");
		switch (order) {
		case 1:
			printf("输入数组A的元素：");
			while (input(A, a) == 1) {}
			printf("\n");
			printf("输入数组B的元素：");
			while (input(B, b) == 1) {}
			printf("\n");

			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			printf("数组A的元素有：");
			for (i = 0; i < a; i++) {
				printf("%d", *(A + i));
				if (i <= a - 1) {
					printf(" ");
				}
			}
			printf("\n\n");
			printf("数组B的元素有：");
			for (i = 0; i < b; i++) {
				printf("%d", *(B + i));
				if (i <= b - 1) {
					printf(" ");
				}
			}
			printf("\n\n");
			break;

		default:
			if (order == 0) {
				printf("输入的编号有误，请重新输入。\n\n");
				break;
			}
			else
				break;
		}
	} while (order >= 0);
	printf("已成功退出程序。\n");

	return 0;
}