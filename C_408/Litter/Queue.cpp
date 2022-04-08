#include"function.h"

void InitQueue(LinkQueue &Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));//����ռ������ָ����
	Q.front->next = NULL;
	Q.length = 0;
}

bool IsQEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear && Q.length ==0)
		return true;
	else
		return false;
}

void EnQueue(LinkQueue& Q, ElemType x)
{
	//����������� �ж��Ƿ���������
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;

	Q.rear->next = s;//β�����
	Q.rear = s;

	Q.length++;
}

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//�ж��Ƿ�Ϊ��
	if (IsQEmpty(Q))
		return false;

	LinkNode* p = Q.front->next;//ָ���һ��Ԫ�� ��Ϊͷ������
	x = p->data;
	Q.front->next = p->next;
	//����Ҫ����ɾ���������һ��Ԫ�ص����
	if (p == Q.rear)
		Q.rear = Q.front;//��ʼ�� ��ʱ����Ϊ��
	
	free(p);//����
	Q.length--;
	return true;
}