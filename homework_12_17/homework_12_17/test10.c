#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////���ֲ���
//int bin_search(int arr[], int sz, int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] > key)
//		{
//			right = middle - 1;
//		}
//		else if (arr[middle] == key)
//		{
//			return middle;
//		}
//		else 
//		{
//			left = middle + 1;
//		}
//	}
//	if (arr[left] == key)
//		return left;
//	else
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������ҪѰ�ҵ�����");
//	scanf("%d", &key);
//	if (bin_search(arr, sz, key) == -1)
//	{
//		printf("δ�ҵ�����...");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��������±�Ϊ��%d", bin_search(arr, sz, key));
//	}
//	return 0;
//}
//#include <stdio.h>
//int Fact(int n)
//{
//	int num = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int result = Fact(n);
//	printf("%d", result);
//	return 0;
//}
//#include <stdio.h>
//int num = 0;//���ٲ���
//void Hanoi(int n, char A, char B, char C)//�����ǽ�A�Ƶ�C�ĺ���
//{
//	if (n == 1)//����������ֻ��һ���̵����
//	{
//		printf("%c-->%c\n", A, C);//��Բ�̴�A���ƶ���C��
//		num++;//ÿ��һ����һ
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);//���Ϸ�(n-1)���̴�A���ƶ���B��
//		printf("%c-->%c\n", A, C);//����n�����ƶ���C��
//		num++;//ÿ��һ����һ
//		Hanoi(n - 1, B, A, C);//���Ϸ�(n-1)���̴�B���ƶ���C��
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������������");
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	printf("������Ҫ%d��", num);
//	return 0;
//}
//#include <stdio.h>
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c ", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c ", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
 

//��ŵ������ģ��
#include <stdio.h>
int num = 0;//���ٲ���
void Hanoi(int n, char A, char B, char C)//�����ǽ�A�Ƶ�C�ĺ���
{
	if (n == 1)//����������ֻ��һ���̵����
	{
		printf("%c-->%c\n", A, C);//��Բ�̴�A���ƶ���C��
		num++;//ÿ��һ����һ
	}
	else
	{
		Hanoi(n - 1, A, C, B);//���Ϸ�(n-1)���̴�A���ƶ���B��
		printf("%c-->%c\n", A, C);//����n�����ƶ���C��
		num++;//ÿ��һ����һ
		Hanoi(n - 1, B, A, C);//���Ϸ�(n-1)���̴�B���ƶ���C��
	}
}
int main()
{
	int n = 0;
	printf("������������");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("������Ҫ%d��", num);
	return 0;
}