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


//��������
typedef struct tag {
	BiTree p;//�����ĳһ���ڵ�ĵ�ֵַ
	struct tag* pnext;

}tag_t, * ptag_t;


//ջ��ص����ݽṹ
#define MaxSize 50
typedef BiTree ElemType;


typedef struct
{
	ElemType data[MaxSize];
	int top;//ָ���������±�
}SqStack;

void InitStack(SqStack& S);
bool StackEmpty(SqStack S);
bool Push(SqStack& S, ElemType x);
bool Pop(SqStack& S, ElemType& x);




//������ص����ݽṹ

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

