#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//只能在对尾入队 队首出队 ————单链表的阉割版本

typedef int ElemType;

//先定一个链表结构
typedef struct LinkNode {
	ElemType data;//注意 链表这里不是数组 是数据实际值 不是数据域
	struct LinkNode* next;
}LinkNode;

//再定义一个链表-用于表示之前的链表头链表尾
typedef struct {
	LinkNode* front, * rear;
	int length;//也可以这样定义一个 变量用于记录结点的个数
}LinkQueue;

//初始化队列链表
void InitQueue(LinkQueue& Q)
{
	//初始时都指向头结点
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next == NULL;
	Q.length = 0;

}

//判断队列是否为空
bool IsEmpty(LinkQueue Q)
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
	if (IsEmpty(Q))
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

//一般没有队满的情况 --不同于 数组存储
int main()
{
	LinkQueue Q;
	ElemType x;
	InitQueue(Q);//初始化队列

	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);






	return 0;
}