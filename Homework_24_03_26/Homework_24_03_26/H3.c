#define _CRT_SECURE_NO_WARNINGS 1
//#define switch 1

#ifdef switch
#include <stdio.h>
//����ṹ����ĳ����������׵�ַ��ƫ��
#define OFFSETOF(type,member) (size_t)&((type*)0)->member
//(type*)0 �ǽ�0ǿ������ת��Ϊ�ṹ��ָ������
// Ҳ���൱�ڶ���һ����ַΪ0�Ľṹ��ָ��

//((type*)0))->member ���ҵ��ṹ���еĳ�Ա

//&((type*0))->member �Ǹýṹ���Ա�ĵ�ַ

//(size_t)&((type*)0)->member �ѽṹ���Ա��ַǿ��ת��Ϊsize_t
//��Ϊ�Ǵ�0��ʼ�ģ����Ըõ�ַ���Ǹó�Ա������׵�ַ��ƫ��


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