#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int input_A(int A[], int a) {
	int flag = 0, i, j;
	printf("请输入集合A中的元素：");
	for (i = 0; i < a; i++) {
		scanf("%d", &A[i]);
	}
	printf("\n");

	for (i = 0; i < a - 1; i++) {
		for (j = i + 1; j < a; j++) {
			if (A[i] == A[j]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			break;
		}
	}

	if (flag) {
		printf("数组A中有重复的元素，请重新输入。\n\n");
		return 0;
	}
	return 1;
}

int input_B(int B[], int b) {
	int flag = 0, i, j;
	printf("请输入集合B中的元素：");
	for (i = 0; i < b; i++) {
		scanf("%d", &B[i]);
	}
	printf("\n");

	for (i = 0; i < b - 1; i++) {
		for (j = i + 1; j < b; j++) {
			if (B[i] == B[j]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			break;
		}
	}

	if (flag) {
		printf("数组B中有重复的元素，请重新输入。\n\n");
		return 0;
	}

	return 1;
}

int jiaoji(int A[], int B[], int C[], int a, int b) {
	int i, j, k = 0;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			if (A[i] == B[j]) {
				C[k] = A[i];
				k++;
			}
		}
	}
	k += 1;
	if (k == 1) {
		printf("集合A与集合B没有交集。\n\n");
	}
	else {
		for (i = 0; i < k; i++) {
			printf("%d ", C[i]);
		}
	}
	printf("\n\n");

	return 0;
}

int main() {
	int order, a = 1, b = 1;

	printf("************************************\n");
	printf("***  1---输入集合A和B            ***\n");
	printf("***  2---求集合A交B              ***\n");
	printf("***  3---求集合A并B              ***\n");
	printf("***  4---求集合A-B               ***\n");
	printf("***  5---判断A是否是B的子集      ***\n");
	printf("***  6---查看集合A与集合B的元素  ***\n");
	printf("***  （输入一个负数退出程序）    ***\n");
	printf("************************************\n\n");

	do {
		printf("请输入功能编号：");
		scanf("%d", &order);
		printf("\n");

		if (order == 1) {
			printf("输入集合A和集合B的元素个数:");
			scanf("%d %d", &a, &b);
			printf("\n");
		}

		int A[3], B[3], c = a + b, C[6], i, j, flag = 0;
		switch (order) {
		case 1:
			while (!input_A(A, a)) {
			}
			while (!input_B(B, b)) {
			}
			break;

		case 2:
			jiaoji(A, B, C, a, b);
			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:
			printf("集合A中的元素有：");
			for (i = 0; i < a; i++) {
				printf("%d", A[i]);
				if (i < a - 1) {
					printf(" ");
				}
			}
			printf("\n");

			printf("集合B中的元素有：");
			for (i = 0; i < b; i++) {
				printf("%d", B[i]);
				if (i < b - 1) {
					printf(" ");
				}
			}
			printf("\n\n");
			break;

		default:
			if (order < 0) {
				break;
			}
			else {
				printf("编号输入有误，请重新输入。\n\n");
				break;
			}
		}
	} while (order >= 0);

	printf("退出程序成功。");

	return 0;
}