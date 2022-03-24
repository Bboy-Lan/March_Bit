#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//���Ա���ʽ�洢--����

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

//���Ҳ���-��˳���ѯ-��������&
LinkList GetElem(LinkList L,Elemtype i)
{
	//�жϲ���λ���Ƿ�Ϸ�
	int j = 1;
	if (0 == i)
		return L;//�����ʾ��0��λ�� ����ͷ���
	if (i < 1)
		return NULL;

	LNode* p = L->next;//�����ʾ�� p �ӵ�һ���ڵ㿪ʼ����
	
	while (p != NULL && j < i)//p ���ǿ�ָ��
	{
		p = p->next;
		j++;
	}
	return p;
}

//��ֵ���в�ѯ
LinkList LocateList(LinkList L,Elemtype e)
{
	LNode* p = L->next;
	while (p != NULL && p->date != e)
	{
		p = p->next;
	}
	return p;
}

//�������-bool ����ֵ
bool ListFrontInsert(LinkList L, Elemtype i, Elemtype e)
{
	LinkList p = GetElem(L, i - 1);//����֮ǰ���Һ��� �ҵ���Ҫ�����λ�õ�ǰһ���ڵ�
	if (p == NULL)
		return false;

	LinkList s = (LinkList)malloc(sizeof(LNode));//������Ԫ�صı������-����ռ�
	s->date = e;

	s->next = p->next;
	p->next = s;

	return true;
}

//ɾ������-bool
bool ListDelete(LinkList L, Elemtype i)
{
	//ͬ����Ҫ����֮ǰ���� �õ���Ҫɾ��λ�õ�Ԫ�ص�ǰһ���ڵ�
	LinkList p = GetElem(L, i - 1);
	if (p == NULL)
		return false;

	LinkList q = p->next;

	if (q == NULL)
		return false;//����Ҫ�ж��Ƿ�Ϊ��ָ��

	p->next = q->next;
	free(q);//������Ҫ���ͷ�
	q = NULL;//�������ΪҰָ��

	return true;
}


int main()
{
	LinkList L;
	//CreatList1(L);
	//PrintList(L);


	CreatList2(L);
	PrintList(L);

	//�������
	bool ret;
	ret = ListFrontInsert(L, 3, 66);
	if (ret)
	{
		printf("����ɹ�\n");
		PrintList(L);
	}
	else
		printf("����ʧ��\n");

	//ɾ������
	ret = ListDelete(L, 4);//ɾ�����ĸ����
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		PrintList(L);
	}
	else
		printf("ɾ��ʧ��\n");



	//��˳���ѯ
	LinkList search;//���ڴ����õ���ĳһ�ڵ�
	search = GetElem(L, 1);
	if (search)
		printf("��2��λ��:%d\n", search->date);
	else
		printf("��˳�����ʧ��\n");

	//��ֵ����
	search = LocateList(L, 4);
	if (search)
		printf("�ҵ���:%d\n", search->date);
	else
		printf("��ֵ����ʧ��\n");


	return 0;
}

