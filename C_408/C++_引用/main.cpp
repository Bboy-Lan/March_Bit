#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//C++������--Դ�ļ���׺������ .cpp ��Ȼ����벻ͨ
//C++���� ��&д���β������������ int &i��

//�������Ӻ��������޸ı���������--������C���� �ϸ��ӵĶ���ָ��


//void modify_num(int& b)//���C���Ը������׳���
//{
//	b = b + 1;//�൱��C��������Ĵ�ַ���� 
//}
//void modify_point(int *&p1)
//{
//	p1 = (int*)malloc(20);
//	p1[0] = 5;
//
//}
//int main()
//{
//	int a = 10;
//	modify_num(a);
//	printf("a=%d\n",a);
//
//	int* p = NULL;//ָ���ʼ��
//	modify_point(p);
//	printf("p =%d\n", p[0]);
//	return 0;
//}

//�������������ַ�ָ�� char *p,Ȼ�����Ӻ�����malloc����ռ䣬ͨ��fgets��ȡ�ַ�����Ȼ�����������н��������Ҫ���Ӻ���ʹ��C++�����ã�ע����C++�дӱ�׼�����ȡ�ַ�������Ҫʹ��fgets(p,100,stdin)

void function(char*& p)
{
	p = (char*)malloc(100);
	fgets(p, 100, stdin);

}

int main()
{
	char* p = NULL;
	function(p);
	printf("%s\n", p);

	return 0;

}