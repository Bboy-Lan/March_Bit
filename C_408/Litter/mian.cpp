#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>


//˫����
typedef int ElemType;
typedef struct DNode//����˫����
{
	ElemType data;
	struct DNode* next;//���
	struct DNode* prior;//ǰ��

}DNode,* DLinkList;

//ͷ�巨
DLinkList DList_head_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DL->prior = NULL;
	DL->next = NULL;//ͷ����ǰ����̶��ǿ�


	scanf("%d", &x);
	while (x != 9999)
	{
		DLinkList s = (DLinkList)malloc(sizeof(DNode));
		s->data = x;

		s->next = DL->next;
		if (DL->next != NULL)
		{
			DL->next->prior = s;//��һ��Ԫ�� ����Ҫ��һ��
		}
		s->prior = DL;
		DL->next = s;

		scanf("%d", &x);
	}
	return DL;

}

//β�巨
DLinkList DList_tail_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DNode* s, * r = DL;
	DL->prior = NULL;


	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLinkList)malloc(sizeof(DNode));
		s->data = x;

		//s->next = r->next;  ------  ��һ����������п���
		r->next = s;
		s->prior = r;
		r = s;
		scanf("%d", &x);
	}

	r->next = NULL;
	return DL;
}

//���Ҳ���
DLinkList GetElem(DLinkList DL, ElemType i)
{
	ElemType j = 1;
	if (i < 1)
		return NULL;//���� return 0�� false ʲô�� ��Ȼ�ᱨ��
	if (0 == i)
		return DL;

	DLinkList p = DL->next;//��֤�ӵ�һ��Ԫ�ؿ�ʼ����
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

//�������
bool DListFrontInsert(DLinkList DL, ElemType i, ElemType e)
{
	//���Ȼ�ȡ��Ҫ����λ�õ�ǰһ��λ�ý��
	DLinkList p = GetElem(DL, i - 1);

	if (p == NULL)
		return false;
	DLinkList q = (DLinkList)malloc(sizeof(DNode));//���붼��Ҫ����ռ���
	q->data = e;

	q->next = p->next;
	p->next->prior = q;
	q->prior = p;
	p->next = q;

	return true;
}

//ɾ������
bool DListDelte(DLinkList DL, ElemType i)
{
	//��ȡ��Ҫɾ��ǰһ���ڵ�Ԫ�ص�λ��
	DLinkList p = GetElem(DL, i - 1);

	DLinkList q = p->next;//��Ҫɾ����Ԫ��
	
	if (NULL == p || NULL == q)
		return false;
	p->next = q->next;
	
	if (q->next != NULL)
	{
		q->next->prior = p;

	}
	free(q);

	return true;
}

//�����ӡ
void DList_print(DLinkList DL)
{
	DL = DL->next;//�ӵ�һ��Ԫ�ؿ�ʼ
	while (DL != NULL )
	{
		printf("%-3d", DL->data);
		DL = DL->next;
	}
	printf("\n");

}

int main()
{
	DLinkList DL;
	//ǰ�巨
	DList_head_insert(DL);
	DList_print(DL);

	//β�巨
	DList_tail_insert(DL);
	DList_print(DL);

	//���Ҳ���
	DLinkList search;
	search = GetElem(DL, 2);
	printf("%d\n", search->data);

	//�������
	bool ret;
	DListFrontInsert(DL, 3, 99);
	DList_print(DL);

	//ɾ������
	DListDelte(DL, 4);
	DList_print(DL);

	return 0;
}



























////����3 4 5 6 7 9999һ��������9999���������ͨ��β�巨�½�����
////���ҵڶ���λ�õ�ֵ���������2��λ�ò���99�����Ϊ  3 99  4  5  6  7��ɾ����4��λ�õ�ֵ����ӡ���Ϊ  3 99  4  5  6  7

////�Զ�������ṹ��
//typedef int ElemType;
//typedef struct LNode
//{
//	ElemType data;//������
//	struct LNode* next;//���
//
//}LNode,*LinkList;
//
////β�巨�½�����
//LinkList CreatList2(LinkList& L)//3 4 5 6 7 9999
//{
//	ElemType x;
//	L = (LinkList)malloc(sizeof(LNode));
//	LNode* s, * r = L;
//
//
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LinkList)malloc(sizeof(LNode));
//		s->data = x;
//
//		s->next = r->next;
//		r->next = s;
//		r = s;
//		scanf("%d", &x);
//	}
//	r->next = NULL;
//	return L;
//}
//
////���Ҳ���
//LinkList GetElem(LinkList L, ElemType i)
//{
//	ElemType j = 1;
//	//�жϲ���Ԫ���Ƿ�Ϸ�
//	if (i < 1)
//		return 0;
//	if (0 == i)
//		return L;
//
//	LinkList p = L->next;//�����ʾ �ӵ�һ��Ԫ�ؿ�ʼ����
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//
//	return p;
//}
//
////�������
//bool ListFrontInsert(LinkList L, ElemType i, ElemType e)
//{
//	//���ȵõ���Ҫ����λ�õ�ǰһ��λ��
//	LinkList p = GetElem(L, i - 1);
//	if (i < 1)
//		return false;
//	if (NULL == p)
//		return false;
//	
//	//���ﲻ��Ҫѭ���������Ѿ�
//	LinkList s = (LinkList)malloc(sizeof(LNode));
//	s->data = e;
//
//	s->next = p->next;
//	p->next = s;
//
//	return true;
//}
//
////ɾ������
//bool ListDelete(LinkList L, ElemType i)
//{
//	//ͬ�� ���Ȼ�ȡɾ��λ��ǰһ���ڵ��λ��
//	LinkList p = GetElem(L, i - 1);
//	if (i < 1)
//		return false;
//	if (NULL == p)//�ж��Ƿ��ǵ�һ���ڵ�
//		return false;
//	LinkList q = p->next;
//
//	p->next = q->next;
//	free(q);
//
//	q = NULL;//��Ұָ��
//	return true;
//}
//
////����Ĵ�ӡ
//void ListPrint(LinkList L)
//{
//	L = L->next;
//	while (L != NULL)
//	{
//		printf("%3d", L->data);
//		L = L->next;
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	LinkList L;
//	//β�巨 3 4 5 6 7 9999
//	CreatList2(L);
//	ListPrint(L);
//
//	//���Ҳ���
//	LinkList search;
//	search = GetElem(L, 2);
//	printf("%d\n",search->data);
//
//
//	//�������
//	bool ret;
//	ret = ListFrontInsert(L, 2, 99);
//	ListPrint(L);
//
//	ret = ListDelete(L, 4);
//	ListPrint(L);
//
//	return 0;
//}