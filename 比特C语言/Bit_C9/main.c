#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"add.h"


//����-�ݹ�(�Ѵ��»�С)
 
 
 //��д���� ����������ʱ���� ���ַ�������

int my_strlen(char* s)//�׵�ַ������
{

	if(*s != '\0')//h e l l o
	{
		return 1 + my_strlen(s+1);//�����е�ַ��˳�����е�
	}
	else
		return 0;

}
int main()
{

	char arr[] = "hello";
	int num = my_strlen(arr);
	printf("%d",num);
	return 0;
}




//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int num = my_strlen(arr);//������������ʾ����������Ԫ�صĵ�ַ
//	printf("%d",num);
//	return 0;
//}



//void print(unsigned int n)
//{
//	if (n > 9)//���������������� ���޵ݹ���ȥ�ᵼ��ջ���
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	//����һ��������(�޷���) ��˳���ӡ����ÿһλ
//	//1234 
//
//	// 1234 %10 --4
//    // 1234/10--123
//    // 123 % 10---3
//	// 123 / 10--12
//	// 12 % 10 ---2
//	// 12 / 10 ---1
//	// 1 % 10 ----1
//
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//�Լ�����ĺ�����- " "
//��Ȼд�ڲ�ͬ���ļ��� ���ǳ������ӽ׶ζ����ҵ��������
//�����������Ͷ���

//��ģ��д����  ���Խ���һ���ķ�װ������  ���Զ���Э��

#pragma comment(lib,"add.lib")

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

