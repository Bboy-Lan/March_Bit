#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//���� --����

typedef int ElemType;

typedef struct LinkNode {
	ElemType data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;//��ʾ����ͷ����β
}LinkQueue;

//��ʼ����������
void InitQueue(LinkQueue& Q)
{
	//ͷ��βָ��ͬһ���¿��ٵĽ��
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;//ͷ����nextָ��ΪNULL
}

//�ж��Ƿ�Ϊ��
bool isEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//���-β�巨
void EnQueue(LinkQueue& Q, ElemType x)
{
	//�����²���Ԫ������Ҫ�Ŀռ�
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;

	Q.rear->next = s;//��ʾ��ǰһ��Ԫ��ָ���һ��Ԫ��
	Q.rear = s;

}

//���� - ͷ��ɾ����

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//���ж϶����Ƿ�Ϊ��
	if (Q.front == Q.rear)
		return false;
	LinkNode* p = Q.front->next;//ͷ������һ��λ��

	x = p->data;
	Q.front->next = p->next;//����Ҫ��ɾ�����Ƿ������һ��Ԫ��
	if (Q.rear == p)
		Q.rear = Q.front;//�����һ��Ԫ��ɾ�� ����Ϊ�� ��Ҫ��rear �������ͳ�ʼʱһ�� �� ����Ϊ�� rear  =  front
	free(p);


	return true;
}

int main()
{
	//����һ��Ϊʲô��β�巨�½����� -- �Ƚ��ȳ� ������

	LinkQueue Q;//ע�ⲻ�� LinkNode
	//��ʼ����������
	InitQueue(Q);

	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);

	return 0;
}