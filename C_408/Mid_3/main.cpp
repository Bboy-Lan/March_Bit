#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���Ա��˳��洢--˳���

typedef struct Student
{
	int id[20];
	char name[20];
	char sex;
}List;


int main()
{
	List L;
	scanf("%s%s %c", L.id, L.name, &L.sex);//���������ӡҲ��Ҫ --% s
	printf("%s %s %c\n", L.id, L.name, L.sex);


	return 0;
}



//��ʼ��˳���˳�����Ԫ��Ϊ���ͣ�����ߵ�Ԫ����1,2,3��Ȼ��ͨ��scanf��ȡһ��Ԫ�أ�����������6�������뵽��2��λ�ã���ӡ���˳���ÿ��Ԫ��ռ3���ո񣬸�ʽΪ1  6  2  3��Ȼ��scanf��ȡһ������������ɾ����λ�ã���������Ϊ1����Ȼ�����˳���  6  2  3�������ѣ�Languageһ��ҪѡΪC++��

#define MaxSize 50

//1 .����һ���ṹ������˳���
typedef struct
{
	int date[MaxSize];
	int length;//˳�����
}SqList;

//�������
bool ListInsert(SqList &L,int i,int e)
{
	if (i<1 || i > L.length + 1)//�ж�ִ���Ƿ�Ϸ�
		return false;
	if (L.length > MaxSize)
		return false;

	//�������--Ҳ����ǰ���Ԫ�����󸲸Ǹ�ֵ
	for (int j = L.length; j >= i; j--)
	{
		L.date[j] = L.date[j-1];
	}

	L.date[i - 1] = e;//�Բ����λ���и�ֵ
	L.length++;
	return true;
}

//��ӡ����
void ListPrint(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.date[i]);
	}
	printf("\n");
}

//ɾ������
bool ListDelete(SqList &L,int i,int e)
{
	if (i<1 || i > L.length + 1)//�ж�ִ���Ƿ�Ϸ�
		return false;
	if (L.length == 0)
		return false;
	//ִ��ɾ��---Ҳ���Ǻ��������ȫ����ǰ�渲�Ǹ�ֵ
	e = L.date[i - 1];//�ֽ����Ԫ��ȥ��������и�ֵ
	for (int j = i; j <=L.length ; j++)
	{
		L.date[j-1] = L.date[j];
	}

	L.length--;
	return true;

}


int main()
{
	SqList L;
	int a, b;
	int del=0;
	bool ret;
	L.date[0] = 1;
	L.date[1] = 2;
	L.date[2] = 3;
	L.length = 3;

	scanf("%d", &a);//��ȡһ������ʱ����뵽��2��λ��
	ret = ListInsert(L,2,a);
	ListPrint(L);

	scanf("%d", &b);//��ȡһ����Ҫɾ����λ��
	ret = ListDelete(L,b, del);
	if (ret != true)
		printf("false\n");
	else
		ListPrint(L);

	//���������λ�ò��Ϸ������false�ַ���
	
	return 0;
}

















//1. ����һ���ṹ��

#define MaxSize 50 
typedef int Elemtype;//int���� --������ 

typedef struct
{
	Elemtype date[MaxSize];
	Elemtype length;//˳���Ԫ�ظ���

}SqList;

//��ӡ����
void PrintList(SqList &L)
{
	for (int i = 0; i < L.length; i++)
		printf("%-3d", L.date[i]);
	printf("\n");
}
//ִ�в���
bool ListInsert(SqList& L, Elemtype i, Elemtype e)
{
	//�жϲ��������Ƿ�Ϸ�
	if (i < 1 || i > L.length+1)
		return false;
	if (i >= MaxSize)
		return false;
	//ִ�в������--������λ�ú��Ԫ�����������ƶ�һλ���� -��ֵ
	for (int j = L.length; j >= i; j--)
	{
		L.date[j] = L.date[j-1];
	}
	L.date[i - 1] = e;//����Ҫ����ֵ�����Ӧλ�� �����±��0��ʼ
	L.length++;
	return true;
}
//ִ��ɾ��
bool ListDelete(SqList& L, Elemtype i, Elemtype &e)
{
	if (i <1 || i>L.length+1)//�жϲ������ĺ�����
		return false;
	if (L.length == 0)//˳�����Ϊ0 
		return false;

	//ɾ��-����ӦԪ�غ��Ԫ��������ǰ��ֵ
	e = L.date[i - 1];
	//��Ҫ�Ƚ���Ӧ������Ԫ��ɾ�� --Ҳ�൱�ڸ�ֵ�� e ����ı���e��ֵ 
	//��˴��ε�ʱ����Ҫ�Ӹ����÷���
	for (int j = i; j <= L.length; j++)
	{
		L.date[j-1] = L.date[j];
	}
	L.length--;
	return true;
	

}
//ִ�в���
Elemtype ListSearch(SqList L,Elemtype e)
{
	for (int j = 0; j < L.length; j++)
	{
		if (L.date[j] == e)//������ҳɹ�����Ԫ��λ��
			return j+1;
	}
	return 0;
}


int main()
{
	SqList L;
	//2. �������������Ԫ��
	L.date[0] = 6;
	L.date[1] = 6;
	L.date[2] = 99;
	L.date[3] = 6;
	L.length = 4;//�����ʼ����

	bool ret;//�������������ж�

	// 3 .ִ�в������

	ret = ListInsert(L,2,88);//C++���ô�ַ ��ʾ��L����֮�� һ����Ԫ�ؼ���� 88 

	if (ret)
	{
		printf("����ɹ�\n");
		PrintList(L);
	}
	else
		printf("����ʧ��\n");


	//4 . ִ��ɾ������
	Elemtype del;
	ret = ListDelete(L,3,del);//��˳����еĵ�����Ԫ��ɾ�� 
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		PrintList(L);
		printf("ɾ����Ԫ��:%d\n", del);
	}
	else
		printf("ɾ��ʧ��\n");

	// 5. ִ�в���
	Elemtype num;
	num = ListSearch(L, 99);
	if (num != 0)
		printf("�� %d ��Ԫ��\n",num);
	else
		printf("�Ҳ���\n");
	return 0;
}












