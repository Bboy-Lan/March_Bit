#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//队列 --链表

typedef int ElemType;

typedef struct LinkNode {
	ElemType data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;//表示链表头链表尾
}LinkQueue;

//初始化队列链表
void InitQueue(LinkQueue& Q)
{
	//头和尾指向同一个新开辟的结点
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;//头结点的next指针为NULL
}

//判断是否为空
bool isEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//入队-尾插法
void EnQueue(LinkQueue& Q, ElemType x)
{
	//开辟新插入元素所需要的空间
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;

	Q.rear->next = s;//表示由前一个元素指向后一个元素
	Q.rear = s;

}

//出队 - 头部删除法

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	//先判断队列是否为空
	if (Q.front == Q.rear)
		return false;
	LinkNode* p = Q.front->next;//头结点的下一个位置

	x = p->data;
	Q.front->next = p->next;//还需要看删除的是否是最后一个元素
	if (Q.rear == p)
		Q.rear = Q.front;//当最后一个元素删除 队列为空 需要将rear 重置至和初始时一样 即 队列为空 rear  =  front
	free(p);


	return true;
}

int main()
{
	//考虑一下为什么用尾插法新建链表 -- 先进先出 更方便

	LinkQueue Q;//注意不是 LinkNode
	//初始化队列链表
	InitQueue(Q);

	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);

	return 0;
}