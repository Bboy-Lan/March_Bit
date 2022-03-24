#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>

//线性表链式存储--链表

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

//查找操作-按顺序查询-无需引用&
LinkList GetElem(LinkList L,Elemtype i)
{
	//判断查找位置是否合法
	int j = 1;
	if (0 == i)
		return L;//这里表示第0个位置 就是头结点
	if (i < 1)
		return NULL;

	LNode* p = L->next;//这里表示的 p 从第一个节点开始遍历
	
	while (p != NULL && j < i)//p 不是空指针
	{
		p = p->next;
		j++;
	}
	return p;
}

//按值进行查询
LinkList LocateList(LinkList L,Elemtype e)
{
	LNode* p = L->next;
	while (p != NULL && p->date != e)
	{
		p = p->next;
	}
	return p;
}

//插入操作-bool 返回值
bool ListFrontInsert(LinkList L, Elemtype i, Elemtype e)
{
	LinkList p = GetElem(L, i - 1);//调用之前查找函数 找到需要插入的位置的前一个节点
	if (p == NULL)
		return false;

	LinkList s = (LinkList)malloc(sizeof(LNode));//插入新元素的必须操作-申请空间
	s->date = e;

	s->next = p->next;
	p->next = s;

	return true;
}

//删除操作-bool
bool ListDelete(LinkList L, Elemtype i)
{
	//同样需要调用之前函数 得到需要删除位置的元素的前一个节点
	LinkList p = GetElem(L, i - 1);
	if (p == NULL)
		return false;

	LinkList q = p->next;

	if (q == NULL)
		return false;//都需要判断是否为空指针

	p->next = q->next;
	free(q);//将不需要的释放
	q = NULL;//避免其成为野指针

	return true;
}


int main()
{
	LinkList L;
	//CreatList1(L);
	//PrintList(L);


	CreatList2(L);
	PrintList(L);

	//插入操作
	bool ret;
	ret = ListFrontInsert(L, 3, 66);
	if (ret)
	{
		printf("插入成功\n");
		PrintList(L);
	}
	else
		printf("插入失败\n");

	//删除操作
	ret = ListDelete(L, 4);//删除第四个结点
	if (ret)
	{
		printf("删除成功\n");
		PrintList(L);
	}
	else
		printf("删除失败\n");



	//按顺序查询
	LinkList search;//用于储存拿到的某一节点
	search = GetElem(L, 1);
	if (search)
		printf("第2个位置:%d\n", search->date);
	else
		printf("按顺序查找失败\n");

	//按值查找
	search = LocateList(L, 4);
	if (search)
		printf("找到了:%d\n", search->date);
	else
		printf("按值查找失败\n");


	return 0;
}

