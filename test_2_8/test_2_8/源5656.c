//#include <stdio.h>?
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	//����
	for (int i = 0; i < 3; i++)//������
	{
		for (int n = 0; n < 5; n++)//������
		{
			scanf("%d ", &arr[i][n]);//��������
		}
	}
	//���
	for (int i = 0; i < 3; i++)//������
	{
		for (int n = 0; n < 5; n++)//������
		{
			printf("%d ", arr[i][n]);//�������
		}
		printf("\n");
	}
	return 0;
}