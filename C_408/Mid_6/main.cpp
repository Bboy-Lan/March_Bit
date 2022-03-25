#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//ע�⣺Ϊʲô����Ĳ�����û��& ����  ֻ�е���Ҫ�ı�ͷ����ʱ�����Ҫ���� ֻҪ���ı�ͷ���Ͳ���Ҫ�������� 
//�������û������ע��Ҳ�� ��ַ���� ��Ϊ����ָ������ �ı���


//˫������--�ֲ��˵��������ܴӺ���ǰ������ȱ��



typedef int ElemType;
//����˫������-�ṹ������
typedef struct DNode
{
	ElemType data;
	struct DNode* prior;//ǰ��ָ��
	struct DNode* next;//���ָ��
}DNode,*DLinkList ;

//ͷ�巨
DLinkList Dlist_head_insert(DLinkList &DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));//DL--����ͷ���
	DL->next = NULL;
	DL->prior = NULL;//��ǰ����̽�㸳Ϊ��ֵ

	scanf("%d", &x);
	while (x != 9999)
	{
		DLinkList s = (DLinkList)malloc(sizeof(DNode));//��ʼ����Ҫ�洢ֵ�Ŀռ�
		s->data = x;

		s->next = DL->next;//�����ر�ͼ
		//��Ϊһ��Ԫ�� 
		if (DL->next != NULL)
		{
			//��˵��ͷ��������ֵ�� ������ͷ�巨������ζ���Ҫ�������
			
			DL->next->prior = s;//s����λ�� �ĺ�һ��ֵ��prior ָ��s

		}
		s->prior = DL;
		DL->next = s;

		scanf("%d", &x);
	}
	return DL;
}

//β�巨
DLinkList Dlist_tail_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DNode* s, * r = DL;
	DL->prior = NULL;

	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLinkList)malloc(sizeof(DNode));//��ʼ����Ҫ�洢ֵ�Ŀռ�
		s->data = x;

		r->next = s;
		s->prior = r;
		r = s;//������˼���ǽ� r һֱ��Ϊ��β

		scanf("%d", &x);
	}
	r->next = NULL;
	return DL;
}

//���Ҳ���-��˳��
DLinkList GetElem(DLinkList DL, ElemType i)
{
	ElemType j = 1;
	if (0 == i)
		return DL;//������Ԫ���ǵ�0����ʱ�� ����ͷ���DL
	if (i < 1)
		return NULL;
	DLinkList p = DL->next;//��p�趨Ϊָ����Ԫ��

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
	DLinkList p = GetElem(DL, i - 1);//��ȡǰһ��Ԫ�ؽڵ�λ��
	if (p == NULL)
		return false;
	
	//���չ������붼��Ҫ����һ���½ڵ�

	DLinkList s = (DLinkList)malloc(sizeof(DNode));
	s->data = e;

	s->next = p->next;
	p->next->prior = s;

	s->prior = p;
	p->next = s;

	return true;

}

//ɾ������
bool DListDelte(DLinkList DL, ElemType i)
{
	DLinkList p = GetElem(DL, i - 1);//��ȡǰһ��Ԫ�ؽڵ�λ��
	if (NULL == p)
		return false;
	DLinkList q;
	q = p->next;

	if (NULL == q)//ɾ����Ԫ�ز����� ������Ϊ���һ���ڵ�
		return false;

	p->next = q->next;
	if (q->next != NULL)
	{
		//ע����һ��һ��Ҫд�����֤ ����ǰ��ͷ�巨Ҳ����д��һ����֤һ��
		q->next->prior = p;
	}
	free(q);

	return true;

}

//˫����Ĵ�ӡ
void DListPrint(DLinkList DL)
{
	DL = DL->next;
	while (DL != NULL)
	{
		printf("%-3d", DL->data);
		DL = DL->next;

	}
	printf("\n");
}

int main()
{
	DLinkList DL;//ͷ���
	bool ret;

	//ͷ�巨
	//Dlist_head_insert(DL);
	//DListPrint(DL);


	//β�巨
	Dlist_tail_insert(DL);
	DListPrint(DL);


	//����Ԫ��
	ret = DListFrontInsert(DL, 3, 99);
	
	if (ret)
		DListPrint(DL);
	else
		printf("�Ҳ���\n");


	//ɾ��Ԫ��
	ret = DListDelte(DL, 4);

	if (ret)
		DListPrint(DL);
	else
		printf("ɾ��ʧ��\n");


	//����Ԫ��
	DLinkList search;
	search = GetElem(DL, 2);
	if (search != NULL)
	{
		printf("�ҵ���:%d\n", search->data);
	}
	else
		printf("�Ҳ���\n");



	return 0;
}