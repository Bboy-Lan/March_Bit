#include "function.h"



//��ʼ����������
void InitQueue(LinkQueue& Q)
{
	//��ʼʱ��ָ��ͷ���
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
	Q.length = 0;

}

//�ж϶����Ƿ�Ϊ��
bool IsQEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear && Q.length == 0)
		return true;
	else
		return false;
}

//��Ԫ�����
void EnQueue(LinkQueue& Q, ElemType x)
{
	//β�巨
	LinkNode* s = (LinkNode*)malloc((sizeof(LinkNode)));
	s->next = NULL;//���һ��Ԫ��
	s->data = x;

	Q.rear->next = s;//�½ڵ���뵽 rear ֮��
	Q.rear = s;//�޸ı�βָ�� �� s  ���rear �����

	Q.length++;
}

//Ԫ�س���
bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//�ж϶����Ƿ�Ϊ��
	if (IsQEmpty(Q))
		return false;

	LinkNode* p = Q.front->next;//p ��ʾָ���һ���ڵ� �� ͷ���
	x = p->data;
	Q.front->next = p->next;

	if (Q.rear == p)//��ɾ����Ϊ���һ�����
		Q.rear = Q.front;

	free(p);
	Q.length--;


	return true;

}