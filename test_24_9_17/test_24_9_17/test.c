#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int input_A(int A[], int a) {
	int flag = 0, i, j;
	printf("�����뼯��A�е�Ԫ�أ�");
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
		printf("����A�����ظ���Ԫ�أ����������롣\n\n");
		return 0;
	}
	return 1;
}

int input_B(int B[], int b) {
	int flag = 0, i, j;
	printf("�����뼯��B�е�Ԫ�أ�");
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
		printf("����B�����ظ���Ԫ�أ����������롣\n\n");
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
		printf("����A�뼯��Bû�н�����\n\n");
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
	printf("***  1---���뼯��A��B            ***\n");
	printf("***  2---�󼯺�A��B              ***\n");
	printf("***  3---�󼯺�A��B              ***\n");
	printf("***  4---�󼯺�A-B               ***\n");
	printf("***  5---�ж�A�Ƿ���B���Ӽ�      ***\n");
	printf("***  6---�鿴����A�뼯��B��Ԫ��  ***\n");
	printf("***  ������һ�������˳�����    ***\n");
	printf("************************************\n\n");

	do {
		printf("�����빦�ܱ�ţ�");
		scanf("%d", &order);
		printf("\n");

		if (order == 1) {
			printf("���뼯��A�ͼ���B��Ԫ�ظ���:");
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
			printf("����A�е�Ԫ���У�");
			for (i = 0; i < a; i++) {
				printf("%d", A[i]);
				if (i < a - 1) {
					printf(" ");
				}
			}
			printf("\n");

			printf("����B�е�Ԫ���У�");
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
				printf("��������������������롣\n\n");
				break;
			}
		}
	} while (order >= 0);

	printf("�˳�����ɹ���");

	return 0;
}