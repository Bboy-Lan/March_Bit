#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//二叉树 - 链式存储 - 层次建树


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


void preOrder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//先打印 中间结点 然后递归 打印左孩子右孩子

		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}

int main()
{
	BiTree pnew;//临时存放作用
	int i, j, pos;
	char c;

	BiTree tree = NULL;//树根
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur=NULL;//队列头 队列尾


	//abcdefghij
	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			break;
		}

		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));//calloc 申请空间并对空间初始化 赋值0
		pnew->c = c;//存入字符数据

		listpnew = (ptag_t)calloc(1, sizeof(tag_t));//给队列结点申请空间
		listpnew->p = pnew;

		if (NULL == tree)//树根为空 此时队列也是空的
		{
			tree = pnew;
			phead = listpnew;
			ptail = listpnew;

			pcur = listpnew;
			continue;
		}
		else//根节点不为空
		{
			//相当于一个小-尾插法
			ptail->pnext = listpnew;
			ptail = listpnew;
		}
		if (NULL == pcur->p->lchild)//新节点入树
		{
			pcur->p->lchild = pnew;//新节点放入需要插入的结点的左边
		}
		else if (NULL == pcur->p->rchild)
		{
			pcur->p->rchild = pnew;//pcur-始终指向要插入节点的位置

			pcur = pcur->pnext;//左右都放了结点之后 pcur 开始指向下一个元素

		}
		//注意这里队列并没有进行出队操作
	}

	printf("-----------前序遍历----------\n");
	//递归的时候代码在一块的所以打印的时候肯定也是挨着的
	preOrder(tree);


	return 0;
}