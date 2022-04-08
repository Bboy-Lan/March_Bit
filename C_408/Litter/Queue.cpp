#include"function.h"

void InitQueue(LinkQueue &Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));//分配空间给两个指针结点
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
	//链表无需进行 判断是否存满的情况
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;

	Q.rear->next = s;//尾部入队
	Q.rear = s;

	Q.length++;
}

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//判断是否为空
	if (IsQEmpty(Q))
		return false;

	LinkNode* p = Q.front->next;//指向第一个元素 因为头部出队
	x = p->data;
	Q.front->next = p->next;
	//还需要考虑删除的是最后一个元素的情况
	if (p == Q.rear)
		Q.rear = Q.front;//初始化 此时链表为空
	
	free(p);//断链
	Q.length--;
	return true;
}