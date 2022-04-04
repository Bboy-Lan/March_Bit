#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


typedef char BiElemType;

typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;


//辅助队列
typedef struct tag {
	BiTree p;//存放树某一个节点的地址值
	struct tag* pnext;

}tag_t, * ptag_t;


//栈相关的数据结构
#define MaxSize 50
typedef BiTree ElemType;


typedef struct
{
	ElemType data[MaxSize];
	int top;//指的是数组下标
}SqStack;

void InitStack(SqStack& S);
bool StackEmpty(SqStack S);
bool Push(SqStack& S, ElemType x);
bool Pop(SqStack& S, ElemType& x);




//队列相关的数据结构

typedef struct LinkNode {
	ElemType data;
	struct LinkNode* next;
}LinkNode;


typedef struct {
	LinkNode* front, * rear;
	int length;
}LinkQueue;


void EnQueue(LinkQueue& Q, ElemType x);
bool DeQueue(LinkQueue& Q, ElemType& x);
bool IsQEmpty(LinkQueue Q);
void InitQueue(LinkQueue& Q);

