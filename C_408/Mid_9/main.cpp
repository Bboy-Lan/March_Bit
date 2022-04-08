#include"function.h"

//前序遍历--深度优先遍历
void preOrder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//先打印 中间结点 然后递归 打印左孩子右孩子

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
		putchar(p->c);//中间打印即可
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
		putchar(p->c);
	}
}

//中序遍历非递归-执行效率更高
void InOrder2(BiTree T)
{
	SqStack S;
	InitStack(S);
	BiTree p = T;
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->lchild;//如果p结点不为空 压栈 并获取左孩子
		}
		else
		{
			Pop(S, p);
			putchar(p->c);
			p = p->rchild;//弹出栈中元素并打印 获取打印元素的右节点
		}
	}
}

//广度优先遍历----层序遍历、即一层一层的遍历 -----一般考察小题
void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q, T);//树根先入队
	while (!IsQEmpty(Q))//表示空为假 非空开始循环
	{
		DeQueue(Q, p);//出队当前结点并打印
		putchar(p->c);
		if (p->lchild != NULL)
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}

}

int main()
{
	BiTree pnew;//临时存放作用
	char c;

	BiTree tree = NULL;//树根
	ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;//队列头 队列尾


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


	//递归的时候代码在一块的所以打印的时候肯定也是挨着的

	printf("\n-----------前序遍历----------\n");//先序遍历 当前结点-左孩子-右孩子

	preOrder(tree);// abdhiejcfg

	printf("\n-----------中序遍历----------\n");//左孩子 - 根 - 右孩子
	InOrder(tree);// hdibjeafcg

	printf("\n-----------后序遍历----------\n");//左孩子 - 右孩子 - 根
	PostOrder(tree);// hidjebfgca

	printf("\n-----------中序遍历非递归----------\n");
	InOrder2(tree);

	printf("\n-----------广度优先遍历----------\n");
	LevelOrder(tree);
	return 0;
}

