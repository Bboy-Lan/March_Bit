#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>


//双链表
typedef int ElemType;
typedef struct DNode//定义双链表
{
	ElemType data;
	struct DNode* next;//后继
	struct DNode* prior;//前驱

}DNode,* DLinkList;

//头插法
DLinkList DList_head_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DL->prior = NULL;
	DL->next = NULL;//头结点的前驱后继都是空


	scanf("%d", &x);
	while (x != 9999)
	{
		DLinkList s = (DLinkList)malloc(sizeof(DNode));
		s->data = x;

		s->next = DL->next;
		if (DL->next != NULL)
		{
			DL->next->prior = s;//第一个元素 不需要这一步
		}
		s->prior = DL;
		DL->next = s;

		scanf("%d", &x);
	}
	return DL;

}

//尾插法
DLinkList DList_tail_insert(DLinkList& DL)
{
	ElemType x;
	DL = (DLinkList)malloc(sizeof(DNode));
	DNode* s, * r = DL;
	DL->prior = NULL;


	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLinkList)malloc(sizeof(DNode));
		s->data = x;

		//s->next = r->next;  ------  这一步在这里可有可无
		r->next = s;
		s->prior = r;
		r = s;
		scanf("%d", &x);
	}

	r->next = NULL;
	return DL;
}

//查找操作
DLinkList GetElem(DLinkList DL, ElemType i)
{
	ElemType j = 1;
	if (i < 1)
		return NULL;//不是 return 0或 false 什么的 不然会报错
	if (0 == i)
		return DL;

	DLinkList p = DL->next;//保证从第一个元素开始遍历
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
	//首先获取需要插入位置的前一个位置结点
	DLinkList p = GetElem(DL, i - 1);

	if (p == NULL)
		return false;
	DLinkList q = (DLinkList)malloc(sizeof(DNode));//插入都需要申请空间结点
	q->data = e;

	q->next = p->next;
	p->next->prior = q;
	q->prior = p;
	p->next = q;

	return true;
}

//删除操作
bool DListDelte(DLinkList DL, ElemType i)
{
	//获取需要删除前一个节点元素的位置
	DLinkList p = GetElem(DL, i - 1);

	DLinkList q = p->next;//需要删除的元素
	
	if (NULL == p || NULL == q)
		return false;
	p->next = q->next;
	
	if (q->next != NULL)
	{
		q->next->prior = p;

	}
	free(q);

	return true;
}

//链表打印
void DList_print(DLinkList DL)
{
	DL = DL->next;//从第一个元素开始
	while (DL != NULL )
	{
		printf("%-3d", DL->data);
		DL = DL->next;
	}
	printf("\n");

}

int main()
{
	DLinkList DL;
	//前插法
	DList_head_insert(DL);
	DList_print(DL);

	//尾插法
	DList_tail_insert(DL);
	DList_print(DL);

	//查找操作
	DLinkList search;
	search = GetElem(DL, 2);
	printf("%d\n", search->data);

	//插入操作
	bool ret;
	DListFrontInsert(DL, 3, 99);
	DList_print(DL);

	//删除操作
	DListDelte(DL, 4);
	DList_print(DL);

	return 0;
}



























////输入3 4 5 6 7 9999一串整数，9999代表结束，通过尾插法新建链表，
////查找第二个位置的值并输出，在2个位置插入99，输出为  3 99  4  5  6  7，删除第4个位置的值，打印输出为  3 99  4  5  6  7

////自定义链表结构体
//typedef int ElemType;
//typedef struct LNode
//{
//	ElemType data;//数据域
//	struct LNode* next;//结点
//
//}LNode,*LinkList;
//
////尾插法新建链表
//LinkList CreatList2(LinkList& L)//3 4 5 6 7 9999
//{
//	ElemType x;
//	L = (LinkList)malloc(sizeof(LNode));
//	LNode* s, * r = L;
//
//
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LinkList)malloc(sizeof(LNode));
//		s->data = x;
//
//		s->next = r->next;
//		r->next = s;
//		r = s;
//		scanf("%d", &x);
//	}
//	r->next = NULL;
//	return L;
//}
//
////查找操作
//LinkList GetElem(LinkList L, ElemType i)
//{
//	ElemType j = 1;
//	//判断查找元素是否合法
//	if (i < 1)
//		return 0;
//	if (0 == i)
//		return L;
//
//	LinkList p = L->next;//这里表示 从第一个元素开始遍历
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//
//	return p;
//}
//
////插入操作
//bool ListFrontInsert(LinkList L, ElemType i, ElemType e)
//{
//	//首先得到需要插入位置的前一个位置
//	LinkList p = GetElem(L, i - 1);
//	if (i < 1)
//		return false;
//	if (NULL == p)
//		return false;
//	
//	//这里不需要循环操作了已经
//	LinkList s = (LinkList)malloc(sizeof(LNode));
//	s->data = e;
//
//	s->next = p->next;
//	p->next = s;
//
//	return true;
//}
//
////删除操作
//bool ListDelete(LinkList L, ElemType i)
//{
//	//同样 首先获取删除位置前一个节点的位置
//	LinkList p = GetElem(L, i - 1);
//	if (i < 1)
//		return false;
//	if (NULL == p)//判断是否是第一个节点
//		return false;
//	LinkList q = p->next;
//
//	p->next = q->next;
//	free(q);
//
//	q = NULL;//防野指针
//	return true;
//}
//
////链表的打印
//void ListPrint(LinkList L)
//{
//	L = L->next;
//	while (L != NULL)
//	{
//		printf("%3d", L->data);
//		L = L->next;
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	LinkList L;
//	//尾插法 3 4 5 6 7 9999
//	CreatList2(L);
//	ListPrint(L);
//
//	//查找操作
//	LinkList search;
//	search = GetElem(L, 2);
//	printf("%d\n",search->data);
//
//
//	//插入操作
//	bool ret;
//	ret = ListFrontInsert(L, 2, 99);
//	ListPrint(L);
//
//	ret = ListDelete(L, 4);
//	ListPrint(L);
//
//	return 0;
//}