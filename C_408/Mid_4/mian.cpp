#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>
#include "maincpp.h"

//���Ա����ʽ�洢--����

typedef  int ElemType;
//����ṹ��
typedef struct LNode
{
	ElemType data;//�������Ԫ�ص�������
	struct LNode* next;//ָ����һ���ڵ��ָ��-ָ����

}LNode,*LinkList;

// LNode����������ͬ��û����� --�ṹ�����
//LinkList �ȼ��� struct LNode*  �����

//ͷ�巨 -- ��������
LinkList CreatList1(LinkList &L)
{
	LNode* s;
	int x;
	L = (LNode*)malloc(sizeof(LNode));//��ͷ��������-��������һ���ռ�
	L->next = NULL;

	scanf("%d", &x);//��ȡ����
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//����һ���ڴ�ռ�
		s->data = x;//����ȡ��ֵ���¿ռ��е�date 

		s->next = L->next;//���½���nextָ��ָ��ԭ�е�ͷ�����--��һ����㡢Ԫ��
		L->next = s;//��ʱL->next ָ��s  s ��Ϊ���һ��Ԫ����

		scanf("%d", &x);
	}
	return L;
}

//��ӡ����
void PrintList(LinkList L)//�����ӡ���������ں�����ı������ֵ 
{
	L = L->next;//ͨ���Բر�ͼ���� ��ӡ����
	while (L != NULL)
	{
		printf("%-3d", L->data);//ע�������ӡ��ԭ��
		L = L->next;
	}
	printf("\n");

 }

//β�巨 -- ��������
LinkList CreatList2(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r=L;//Ϊʲô����д ��ʵ��һ��  ����r�����β�ڵ� ָ������β��
	scanf("%d", &x);

	while (x != 9999)//β���ռ���-NULL
	{
		s = (LinkList)malloc(sizeof(LNode));//����ռ�Ĳ�������һ����
		s->data= x;
		r->next= s;//β�����ָ���½ڵ�

		scanf("%d", &x);
	}
	r->next = NULL;//������������ֵ ��Ȼ��ӡ��ʱ�����ʾ���ʶ�ȡȨ�޳�ͻ
	return L;
}




int main()
{
	LinkList L;//�ṹ��ָ������--����ͷ

	CreatList1(L);//3 4 5 6 7 9999--��������־
	PrintList(L);

	CreatList2(L);

	return 0;
}











//C++����

void Fun_print(char*& p)
{
	p = (char*)malloc(100);
	fgets(p, 100, stdin);//C++����������������һ��ָ��������м����ָ��ľ��Ƕ�Ӧָ��ָ��Ŀռ��С

}
//int main()
//{
//	char* p;
//	Fun_print(p);
//
//	printf("%s\n", p);
//	return 0;
//}