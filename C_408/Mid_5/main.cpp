#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//线性表链式存储--链表

//1 .自定义链表
typedef int Elemtype;

typedef struct LNode
{
	Elemtype date;//数据域
	struct LNode* next;//结构体指针结点

}LNode,* LinkList;//重命名结构体名称和指针

//头插法
LinkList CreatList1(LNode* &L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode*));
	LinkList s;
	L->next = NULL;//最好初始化带头结点的链表 将其指向结点赋为 NULL

	scanf("%d", &x);//读取元素进行插入
	while (x != 9999)
	{
		s = (LinkList)malloc(sizeof(LNode));//定义一个空链表元素用于插入操作
	
		s->date = x;//赋元素值

		s->next = L->next;
		L->next = s;

		scanf("%d", &x);
	}

	return L;
}

//尾插法
LinkList CreatList2(LNode*& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;//这里定义的 r 认为它指向表尾结点 指向链表尾部 
	L->next = NULL;//初始化结点

	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->date = x;

		r->next = s;//尾部结点指向新节点
		r = s;//这里表示r从最开始的元素转移到新增加的元素 

		scanf("%d", &x);
	}
	r->next = NULL;//最后一个值 不是 s->next 因为最后一个元素已经从s 转为r了 其实一直都是r 因为 r = s 这一步不可缺少 

	return L;
}

//打印链表
void PrintList(LinkList L)
{
	L = L->next;

	while (L != NULL)//不等于 空就说明还没完成 则继续打印
	{
		printf("%-3d", L->date);
		L = L->next;
	}
	printf("\n");
}

int main()
{
	LinkList L;
	//CreatList1(L);
	//PrintList(L);


	CreatList2(L);
	PrintList(L);



	return 0;
}

