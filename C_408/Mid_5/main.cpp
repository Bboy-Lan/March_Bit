#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//���Ա���ʽ�洢--����

//1 .�Զ�������
typedef int Elemtype;

typedef struct LNode
{
	Elemtype date;//������
	struct LNode* next;//�ṹ��ָ����

}LNode,* LinkList;//�������ṹ�����ƺ�ָ��

//ͷ�巨
LinkList CreatList1(LNode* &L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode*));
	LinkList s;
	L->next = NULL;//��ó�ʼ����ͷ�������� ����ָ���㸳Ϊ NULL

	scanf("%d", &x);//��ȡԪ�ؽ��в���
	while (x != 9999)
	{
		s = (LinkList)malloc(sizeof(LNode));//����һ��������Ԫ�����ڲ������
	
		s->date = x;//��Ԫ��ֵ

		s->next = L->next;
		L->next = s;

		scanf("%d", &x);
	}

	return L;
}

//β�巨
LinkList CreatList2(LNode*& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;//���ﶨ��� r ��Ϊ��ָ���β��� ָ������β�� 
	L->next = NULL;//��ʼ�����

	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->date = x;

		r->next = s;//β�����ָ���½ڵ�
		r = s;//�����ʾr���ʼ��Ԫ��ת�Ƶ������ӵ�Ԫ�� 

		scanf("%d", &x);
	}
	r->next = NULL;//���һ��ֵ ���� s->next ��Ϊ���һ��Ԫ���Ѿ���s תΪr�� ��ʵһֱ����r ��Ϊ r = s ��һ������ȱ�� 

	return L;
}

//��ӡ����
void PrintList(LinkList L)
{
	L = L->next;

	while (L != NULL)//������ �վ�˵����û��� �������ӡ
	{
		printf("%-3d", L->date);
		L = L->next;
	}
	printf("\n");
}

int main()
{
	LinkList L;
	//CreatList1(L);
	//PrintList(L);


	CreatList2(L);
	PrintList(L);



	return 0;
}

