#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��ͨ����������������

typedef char BiElemType;

//��ͨ������
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;


//���弸��ȫ�ֱ���
BiTNode* p;
BiTNode* pre = NULL;
BiTNode* final = NULL;

void visit(BiTNode* q)
{
	if (q == p)
		final = pre;
	else
		pre = q;
}

//�������
void InOrder(BiTNode * T)
{
	if (T != NULL)
	{
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}
