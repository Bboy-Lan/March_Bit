#include "function.h"



//初始化队列链表
void InitQueue(LinkQueue& Q)
{
	//初始时都指向头结点
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
	Q.length = 0;

}

//判断队列是否为空
bool IsQEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear && Q.length == 0)
		return true;
	else
		return false;
}

//新元素入队
void EnQueue(LinkQueue& Q, ElemType x)
{
	//尾插法
	LinkNode* s = (LinkNode*)malloc((sizeof(LinkNode)));
	s->next = NULL;//最后一个元素
	s->data = x;

	Q.rear->next = s;//新节点插入到 rear 之后
	Q.rear = s;//修改表尾指针 由 s  变成rear 是最后

	Q.length++;
}

//元素出队
bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//判断队列是否为空
	if (IsQEmpty(Q))
		return false;

	LinkNode* p = Q.front->next;//p 表示指向第一个节点 除 头结点
	x = p->data;
	Q.front->next = p->next;

	if (Q.rear == p)//当删除的为最后一个结点
		Q.rear = Q.front;

	free(p);
	Q.length--;


	return true;

}