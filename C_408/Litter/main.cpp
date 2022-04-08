#include"function.h"



//前序遍历
void preOrder(BiTree p)
{
	if (p != NULL)
	{
		//前序遍历 在前面打印
		putchar(p->data);
		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}

//中序遍历
void InOrder(BiTree p)
{
	if (p != NULL)
	{
		InOrder(p->lchild);
		putchar(p->data);
		InOrder(p->rchild);
	}
}

//后序遍历
void PostOrder(BiTree p)
{
	if (p != NULL)
	{
		PostOrder(p->lchild);
		PostOrder(p->rchild);
		putchar(p->data);
	}
}

//中序遍历非递归-执行效率更高
void InOrder2(BiTree T)
{
	SqStack S;
	InitStack(S);
	BiTree p = T;
	while (p || !IsEmpty(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->lchild;//如果p结点不为空 压栈 并获取左孩子
		}
		else
		{
			Pop(S, p);
			putchar(p->data);
			p = p->rchild;//弹出栈中元素并打印 获取打印元素的右节点
		}
	}
}

//层序遍历
void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q,T);//树根先入队
	while (!IsQEmpty(Q))//非空的时候开始循环
	{
		DeQueue(Q, p);//出队
		putchar(p->data);
		if (p->lchild != NULL)//先进就先出
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}
}

int main()
{
	BiTree pnew;
	BiElemType c;
	
	BiTree root = NULL;//树根
	ptag_t listpnew=NULL, phead = NULL, ptail = NULL, pcur = NULL;

	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
			break;//遇见回车循环结束

		//注意这里插入新的元素都需要申请空间-进行初始化、每个分支看成一个结点
		pnew = (BiTNode*)calloc(1, (sizeof(BiTNode)));
		pnew->data = c;
		
		listpnew = (tag_t *)calloc(1, (sizeof(tag_t)));
		listpnew->p = pnew;//树中元素进行赋值

		//判断根是否为空 
		if (NULL == root)
		{
			root = pnew;
			phead = listpnew;
			ptail= listpnew;

			pcur = listpnew;//根为空 初始化队列
			continue;
		}
		else//元素入树
		{
			ptail->next = listpnew;
			ptail = listpnew;//patil 一直保持在最后一个元素身上
		}
		//pcur 一直指向遍历的元素
		if (pcur->p->lchild == NULL)
		{
			pcur->p->lchild = pnew;
		}
		else if (pcur->p->rchild == NULL)
		{
			pcur->p->rchild = pnew;
			pcur = pcur->next;
		}
	}


	printf("\n--------- 前序遍历 ---------\n");
	preOrder(root);

	printf("\n--------- 中序遍历 ---------\n");
	InOrder(root);

	printf("\n--------- 后序遍历 ---------\n");
	PostOrder(root);

	printf("\n--------- 中序遍历非递归 ---------\n");
	InOrder2(root);

	printf("\n--------- 层序遍历 ---------\n");
	LevelOrder(root);

	return 0;
}