#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//普通二叉树线索化过程

typedef char BiElemType;

//普通二叉树
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;


//定义几个全局变量
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

//中序遍历
void InOrder(BiTNode * T)
{
	if (T != NULL)
	{
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}
