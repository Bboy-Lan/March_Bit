#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//����������-��α���
typedef char BiElemType;

typedef struct BiTNode {
	BiElemType data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;//���Һ���
}BiTNode, * BiTree;

//�������д���
typedef struct tag {
	BiTree p;
	struct tag* next;
}tag_t, * ptag_t;



//ջ���������

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


//���е��������

typedef struct LinkNode{
	ElemType data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;
	int length;//��¼��ǰ����
}LinkQueue;


void InitQueue(LinkQueue& Q);
bool IsQEmpty(LinkQueue Q);
void EnQueue(LinkQueue& Q, ElemType x);
bool DeQueue(LinkQueue& Q, ElemType& x);