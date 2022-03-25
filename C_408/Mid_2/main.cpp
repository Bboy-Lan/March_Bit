#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//���Ա�--��������ⶼ������C++�����
//�������� ǰ��_���
//���ܽ����Ա��߼��ṹ����˳���������Ϊһ̸

//��̬�����������Ȼ����˳��洢�ṹ

//���õ��� ����ÿ�������ִ��Ч���Ƿ����Ԥ��

#define MaxSize 50
typedef int Elemtype;//�����Զ��������


//ע�⣺
//����Ҫ����Ԫ���Ƿ����������� �����ǲ��ǳ����˷�Χ �� û����ô��Ŀռ�
//ɾ�����˿���Ԫ���Ƿ������������� ���� ��û��Ԫ�ظ���ɾ �� ԭ���Ƿ�Ϊ��


typedef struct 
{
	Elemtype date[MaxSize];//�������� ���ڴ洢Ԫ��
	int length;//˳�����Ԫ�ظ���

}SqList;//�ṹ������ı���
//Ԫ�ص�����
bool ListInsert(SqList &L,int i, Elemtype e)//����ֵ��������
{
	if (i < 1 || i > L.length + 1)//�жϲ����λ���Ƿ�Ϸ�
		return false;
	if (L.length >= MaxSize)//Ԫ�ش����ˣ������ٴ���
		return false;

	for (int j = L.length; j >= i; j--)//�ƶ������е�Ԫ�� ���������ƶ�
	{
		L.date[j] = L.date[j-1];
	}
	L.date[i - 1] = e;
	L.length++;
	return true;//����ɹ�

}
//Ԫ�ص�ɾ��
bool ListDelete(SqList &L,int i , Elemtype &del)//ɾ��Ԫ�ز���
//ע��������� del Ϊʲô������
{
	if (i < 1 || i > L.length + 1)//�ж�ɾ����Ԫ��λ���Ƿ�Ϸ�
		return false;
	if (L.length == 0)//û��Ԫ��
		return false;
	del = L.date[i - 1];//��ȡ˳����ж�Ӧ��Ԫ�ظ�ֵ�� e---�൱��ɾ��
	
	for (int j = i;j < L.length;j++)
	{
		L.date[j-1] = L.date[j];//��i��λ�����ΰ�Ԫ����ǰ����
	}
	L.length--;
	return true;

}
//Ԫ�صĲ���
Elemtype LocatEle(SqList L,int e)//����Ԫ�ض�Ӧ��λ��
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.date[i] = e)
			return i + 1;
		else
			return 0;
	}

}
//����Ĵ�ӡ
void PrintList(SqList &L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.date[i]);
	}
	printf("\n");
}

int main()
{
	SqList L;
	bool ret;//�������� --�鿴����ֵ True False ��C++�������У�
	Elemtype del;//��Ҫɾ����Ԫ��

	L.date[0] = 1;//�ֶ��������������Ԫ��
	L.date[1] = 2;
	L.date[2] = 3;

	L.length = 3;
	ret = ListInsert(L,2,60);//��ֵ �ڶ���λ�ò���60

	if (ret)//�ж��Ƿ����ɹ�
	{
		printf("����ɹ�\n");
		PrintList(L);
	}
	else
	{
		printf("����ʧ��\n");
	}
	

	ret = ListDelete(L, 1, del);//ɾ����һ��λ�õ�Ԫ�� ����ֵ���

	if (ret)//�ж��Ƿ����ɹ�
	{
		printf("ɾ���ɹ�\n");
		//PrintList(L);
		printf("%d\n", del);
		PrintList(L);

	}
	else
	{
		printf("ɾ��ʧ��\n");
	}

	int loca=LocatEle(L, 60);
	if (loca)//�ж��Ƿ����ɹ�
	{
		printf("���ҳɹ�\n");
		printf("Ԫ��λ�ã�%d\n", loca);
	}
	else
	{
		printf("����ʧ��\n");
	}
	
	
	return 0;
}

