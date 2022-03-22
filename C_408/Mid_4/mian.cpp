#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>
#include "maincpp.h"

//���Ա����ʽ�洢--����
//����-����-ɾ��
//˫������
//ջ ��ѭ������

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
LNode* CreatList2(LinkList& L)
//����ֵǿ�����ص���һ���ڵ� 
//��ʽ������ʾ����һ����������Ҫ����������в���ĳһλ���ض���Ԫ��
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//����һ����ͷ��������

	LNode* s, * r=L;//����r�����β��� ָ������β��--���������ǿյ�
	scanf("%d", &x);

	while (x != 9999)//β���ռ���-NULL
	{
		s = (LinkList)malloc(sizeof(LNode));//����ռ�Ĳ�������һ����
		s->data= x;
		r->next= s;//β�����ָ���½��

		r = s;//�����ʾ�����sԪ�ر����β��� r ת��
		scanf("%d", &x);
	}
	r->next = NULL;//������������ֵ ��Ȼ��ӡ��ʱ�����ʾ���ʶ�ȡȨ�޳�ͻ
	return L;
}

//���Ҳ���-��˳�򡢰�ֵ
LinkList GetElem(LinkList L, ElemType i)//��˳���ѯ
{
	int j = 1;
	if (0 == i)//�����жϲ����Ƿ�Ϸ�
		return L;
	if (i < 1)
		return NULL;
	//���Ƚ��г�ʼ�� �Ա� p �����ӵ�һ����㿪ʼ
	LNode* p = L->next;
	while (p && j < i)
	{
		p = p->next;//û�ҵ����������
		j++;
	}
	return p;
}

//��ֵ��ѯ
LinkList LocateElem(LinkList L, ElemType i)
{
	LinkList p = L->next;//������һ�� ��p��ʼ��ָ���һ��Ԫ��
	while (p && p->data != i)
	{
		p = p->next;

	}
	return p;
}

//�������-Ҫ���ҵ���͸�Ԫ�ص�λ��
bool ListFrontInsert(LinkList L,ElemType i,ElemType e)
{
	LinkList p = GetElem(L, i - 1);//�õ���Ҫ����λ�õ�ǰһ��λ�õĵ�ֵַ
	if (NULL == p)
		return false;//i ��Ҫ���ҵ�λ�ò����Ϲ淶
	LinkList s;
	s = (LinkList)malloc(sizeof(LNode));
	s->data = e;

	s->next = p->next;//�����ͷ�巨����
	p->next = s;
	return true;
}

//ɾ������
bool ListDelet(LinkList L,ElemType i)
{
	LinkList p;
	p = GetElem(L, i - 1);//����ɾ��λ�õ�ǰ�����
	if (NULL == p)
		return false;
	LinkList q = p->next;//�Ȱ�ǰ������ �ر�ͼ�ſ�

	p->next = q->next;//����
	free(q);//�ͷŶ�Ӧ���Ŀռ�
	q == NULL;
	return true;


}


int main()
{
	LinkList L;//�ṹ��ָ������--����ͷ
	bool ret;
	//CreatList1(L);//3 4 5 6 7 9999--��������־
	//PrintList(L);

	CreatList2(L);
	PrintList(L);

	ret = ListFrontInsert(L, 2, 66);
	if (ret)
	{
		printf("����ɹ�\n");
		PrintList(L);
	}

	ret = ListDelet(L, 3);
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		PrintList(L);
	}


	LNode* search;
	search = GetElem(L, 2);//�����ѯ
	if (search != NULL)
		printf("����Ų�ѯ��%d\n", search->data);
	else
		printf("�Ҳ���\n");

	search = LocateElem(L, 7);//��ֵ��ѯ
	if (search != NULL)
		printf("��ֵ��ѯ��%d\n", search->data);
	else
		printf("�Ҳ���\n");


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