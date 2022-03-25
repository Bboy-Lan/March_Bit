#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//注意：为什么后面的操作都没有& 引用  只有当需要改变头结点的时候才需要引用 只要不改变头结点就不需要进行引用 
//这里就算没有引用注意也是 传址调用 因为它是指针类型 的变量


//双向链表--弥补了单向链表不能从后向前遍历的缺点



typedef int ElemType;
//定义双向链表-结构体类型
typedef struct DNode
{
	ElemType data;
	struct DNode* prior;//前驱指针
	struct DNode* next;//后继指针
}DNode,*DLinkList ;

//头插法
DLinkList Dlist_head_insert(DLinkList &DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));//DL--就是头结点
	DL->next = NULL;
	DL->prior = NULL;//将前驱后继结点赋为空值

	scanf("%d", &x);
	while (x != 9999)
	{
		DLinkList s = (DLinkList)malloc(sizeof(DNode));//初始化需要存储值的空间
		s->data = x;

		s->next = DL->next;//交换藏宝图
		//当为一个元素 
		if (DL->next != NULL)
		{
			//即说明头结点后面有值了 所以用头插法无论如何都需要这个条件
			
			DL->next->prior = s;//s插入位置 的后一个值的prior 指向s

		}
		s->prior = DL;
		DL->next = s;

		scanf("%d", &x);
	}
	return DL;
}

//尾插法
DLinkList Dlist_tail_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DNode* s, * r = DL;
	DL->prior = NULL;

	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLinkList)malloc(sizeof(DNode));//初始化需要存储值的空间
		s->data = x;

		r->next = s;
		s->prior = r;
		r = s;//这里意思就是将 r 一直作为表尾

		scanf("%d", &x);
	}
	r->next = NULL;
	return DL;
}

//查找操作-按顺序
DLinkList GetElem(DLinkList DL, ElemType i)
{
	ElemType j = 1;
	if (0 == i)
		return DL;//当查找元素是第0个的时候 返回头结点DL
	if (i < 1)
		return NULL;
	DLinkList p = DL->next;//将p设定为指向首元素

	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

//插入操作
bool DListFrontInsert(DLinkList DL, ElemType i, ElemType e)
{
	DLinkList p = GetElem(DL, i - 1);//获取前一个元素节点位置
	if (p == NULL)
		return false;
	
	//按照惯例插入都需要开辟一个新节点

	DLinkList s = (DLinkList)malloc(sizeof(DNode));
	s->data = e;

	s->next = p->next;
	p->next->prior = s;

	s->prior = p;
	p->next = s;

	return true;

}

//删除操作
bool DListDelte(DLinkList DL, ElemType i)
{
	DLinkList p = GetElem(DL, i - 1);//获取前一个元素节点位置
	if (NULL == p)
		return false;
	DLinkList q;
	q = p->next;

	if (NULL == q)//删除的元素不存在 即可能为最后一个节点
		return false;

	p->next = q->next;
	if (q->next != NULL)
	{
		//注意这一步一定要写这个验证 就像前面头插法也必须写那一步验证一样
		q->next->prior = p;
	}
	free(q);

	return true;

}

//双链表的打印
void DListPrint(DLinkList DL)
{
	DL = DL->next;
	while (DL != NULL)
	{
		printf("%-3d", DL->data);
		DL = DL->next;

	}
	printf("\n");
}

int main()
{
	DLinkList DL;//头结点
	bool ret;

	//头插法
	//Dlist_head_insert(DL);
	//DListPrint(DL);


	//尾插法
	Dlist_tail_insert(DL);
	DListPrint(DL);


	//插入元素
	ret = DListFrontInsert(DL, 3, 99);
	
	if (ret)
		DListPrint(DL);
	else
		printf("找不到\n");


	//删除元素
	ret = DListDelte(DL, 4);

	if (ret)
		DListPrint(DL);
	else
		printf("删除失败\n");


	//查找元素
	DLinkList search;
	search = GetElem(DL, 2);
	if (search != NULL)
	{
		printf("找到了:%d\n", search->data);
	}
	else
		printf("找不到\n");



	return 0;
}