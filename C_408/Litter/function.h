#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//二叉树建树-层次遍历
typedef char BiElemType;

typedef struct BiTNode {
	BiElemType data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;//左右孩子
}BiTNode, * BiTree;

//辅助队列创建
typedef struct tag {
	BiTree p;
	struct tag* next;
}tag_t, * ptag_t;



//栈的相关申明

#define MaxSize 50
typedef BiTree ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;


void InitStack(SqStack& S);
bool IsEmpty(SqStack S);
bool Push(SqStack& S, ElemType x);
bool Pop(SqStack& S, ElemType& x);


//队列的相关申明

typedef struct LinkNode{
	ElemType data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;
	int length;//记录当前长度
}LinkQueue;


void InitQueue(LinkQueue& Q);
bool IsQEmpty(LinkQueue Q);
void EnQueue(LinkQueue& Q, ElemType x);
bool DeQueue(LinkQueue& Q, ElemType& x);