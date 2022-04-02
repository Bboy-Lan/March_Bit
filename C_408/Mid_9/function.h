
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//顺序存储 --堆排
//层次建树
//完全二叉树

typedef char BiElemType;

//定义树结构体
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;//左孩子
	struct BiTNode* rchild;//右孩子
}BiTNode, * BiTree;

//辅助队列
typedef struct tag {
	BiTree p;//指针类型---用于存放一个数的指针
	struct tag* pnext;

}tag_t, * ptag_t;

//前序遍历
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
	BiTree pnew;//树结构体类型指针--存放读取的数据
	char c;

	BiTree tree = NULL;//树根
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur = NULL;//队列结构体指针类型

	//abcdefghijk
	while (scanf("%c", &c) != EOF)//循环判断
	{
		if (c == '\n')
		{
			break;
		}

		//calloc 申请的空间全部都会置为 0
		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));//注意这里不要写错 结构一天类型和结构体类型指针

		//每一个新进的结点都要开辟结点空间
		pnew->c = c;//数据放进去

		listpnew = (ptag_t)calloc(1, sizeof(tag_t));//队列也申请相应空间
		listpnew->p = pnew;// 同样将值放进队列

		if (NULL == tree)//树根为空
		{
			tree = pnew;//做树根--这就是为什么后面遍历打印用 tree 的原因
			phead = listpnew;//队列头 、尾
			ptail = listpnew;

			pcur = listpnew;
			continue;
		}

		else //此时树根不再为空--先进行队列操作 后进行 树的判断插入操作
		{
			//相当于一个小尾插法--插入放在队列中

			ptail->pnext = listpnew;
			ptail = listpnew;//指向队列尾部

		}
		//将新结点 放入树中

		//pcur 相当于phead  只是用它进行遍历 其始终指向需要插入的结点位置 phead 仍保持不动 
		if (NULL == pcur->p->lchild)
		{
			//新结点放入需要插入节点的左边
			pcur->p->lchild = pnew;
		}
		else if (NULL == pcur->p->rchild)
		{
			//新结点放入需要插入节点的右边
			pcur->p->rchild = pnew;
			pcur = pcur->pnext;//左右节点都放满之后 指向队列下一个位置
		}

	}

	printf("-----------前序遍历----------\n");
	//递归的时候代码在一块的所以打印的时候肯定也是挨着的--
	preOrder(tree);

	return 0;
}