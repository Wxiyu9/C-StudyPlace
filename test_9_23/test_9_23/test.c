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
		printf("�����Ԫ�������ظ������������롣\n\n");
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	printf("************************************\n");
	printf("***  1---���뼯��A��B            ***\n");
	printf("***  2---�󼯺�A��B              ***\n");
	printf("***  3---�󼯺�A��B              ***\n");
	printf("***  4---�󼯺�A-B               ***\n");
	printf("***  5---�ж�A�Ƿ���B���Ӽ�      ***\n");
	printf("***  6---�鿴����A�뼯��B��Ԫ��  ***\n");
	printf("***  ������һ�������˳�����    ***\n");
	printf("************************************\n\n");
	int a, b, order, i;
	printf("����������A��Ԫ�ظ�����");
	scanf_s("%d", &a);
	printf("\n");
	printf("����������B��Ԫ�ظ�����");
	scanf_s("%d", &b);
	printf("\n");
	int* A = (int*)malloc(a * sizeof(int));
	int* B = (int*)malloc(b * sizeof(int));


	do {
		printf("�����빦�ܵı�ţ�");
		scanf_s("%d", &order);
		printf("\n");
		switch (order) {
		case 1:
			printf("��������A��Ԫ�أ�");
			while (input(A, a) == 1) {}
			printf("\n");
			printf("��������B��Ԫ�أ�");
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
			printf("����A��Ԫ���У�");
			for (i = 0; i < a; i++) {
				printf("%d", *(A + i));
				if (i <= a - 1) {
					printf(" ");
				}
			}
			printf("\n\n");
			printf("����B��Ԫ���У�");
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
				printf("����ı���������������롣\n\n");
				break;
			}
			else
				break;
		}
	} while (order >= 0);
	printf("�ѳɹ��˳�����\n");

	return 0;
}