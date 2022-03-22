#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>
#include "maincpp.h"

//线性表的链式存储--链表
//插入-查找-删除
//双向链表
//栈 、循环队列

typedef  int ElemType;
//定义结构体
typedef struct LNode
{
	ElemType data;//存放数据元素的数据域
	struct LNode* next;//指向下一个节点的指针-指针域

}LNode,*LinkList;

// LNode这里名字相同是没问题的 --结构体变量
//LinkList 等价于 struct LNode*  起别名

//头插法 -- 创建链表
LinkList CreatList1(LinkList &L)
{
	LNode* s;
	int x;
	L = (LNode*)malloc(sizeof(LNode));//带头结点的链表-给其申请一个空间
	L->next = NULL;

	scanf("%d", &x);//读取数据
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//申请一个内存空间
		s->data = x;//将读取的值给新空间中的date 

		s->next = L->next;//让新结点的next指针指向原有的头部结点--第一个结点、元素
		L->next = s;//此时L->next 指向s  s 就为其第一个元素了

		scanf("%d", &x);
	}
	return L;
}

//打印链表
void PrintList(LinkList L)//这里打印不用引用在函数里改变链表的值 
{
	L = L->next;//通过对藏宝图遍历 打印链表
	while (L != NULL)
	{
		printf("%-3d", L->data);//注意这里打印的原理
		L = L->next;
	}
	printf("\n");

 }

//尾插法 -- 创建链表
LNode* CreatList2(LinkList& L)
//返回值强调返回的是一个节点 
//形式参数表示这是一个单链表需要在这个链表中查找某一位置特定的元素
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//申请一个带头结点的链表

	LNode* s, * r=L;//这里r代表表尾结点 指向链表尾部--这里链表是空的
	scanf("%d", &x);

	while (x != 9999)//尾部空间是-NULL
	{
		s = (LinkList)malloc(sizeof(LNode));//申请空间的操作都是一样的
		s->data= x;
		r->next= s;//尾部结点指向新结点

		r = s;//这里表示插入的s元素变成了尾结点 r 转移
		scanf("%d", &x);
	}
	r->next = NULL;//最后必须这样赋值 不然打印的时候会显示访问读取权限冲突
	return L;
}

//查找操作-按顺序、按值
LinkList GetElem(LinkList L, ElemType i)//按顺序查询
{
	int j = 1;
	if (0 == i)//首先判断查找是否合法
		return L;
	if (i < 1)
		return NULL;
	//首先进行初始化 以便 p 遍历从第一个结点开始
	LNode* p = L->next;
	while (p && j < i)
	{
		p = p->next;//没找到就往后进行
		j++;
	}
	return p;
}

//按值查询
LinkList LocateElem(LinkList L, ElemType i)
{
	LinkList p = L->next;//和上面一样 将p初始化指向第一个元素
	while (p && p->data != i)
	{
		p = p->next;

	}
	return p;
}

//插入操作-要先找到这和个元素的位置
bool ListFrontInsert(LinkList L,ElemType i,ElemType e)
{
	LinkList p = GetElem(L, i - 1);//拿到需要插入位置的前一个位置的地址值
	if (NULL == p)
		return false;//i 即要查找的位置不符合规范
	LinkList s;
	s = (LinkList)malloc(sizeof(LNode));
	s->data = e;

	s->next = p->next;//这里和头插法类似
	p->next = s;
	return true;
}

//删除操作
bool ListDelet(LinkList L,ElemType i)
{
	LinkList p;
	p = GetElem(L, i - 1);//查找删除位置的前驱结点
	if (NULL == p)
		return false;
	LinkList q = p->next;//先把前驱结点的 藏宝图放空

	p->next = q->next;//断链
	free(q);//释放对应结点的空间
	q == NULL;
	return true;


}


int main()
{
	LinkList L;//结构体指针类型--链表头
	bool ret;
	//CreatList1(L);//3 4 5 6 7 9999--做结束标志
	//PrintList(L);

	CreatList2(L);
	PrintList(L);

	ret = ListFrontInsert(L, 2, 66);
	if (ret)
	{
		printf("插入成功\n");
		PrintList(L);
	}

	ret = ListDelet(L, 3);
	if (ret)
	{
		printf("删除成功\n");
		PrintList(L);
	}


	LNode* search;
	search = GetElem(L, 2);//按序查询
	if (search != NULL)
		printf("按序号查询：%d\n", search->data);
	else
		printf("找不到\n");

	search = LocateElem(L, 7);//按值查询
	if (search != NULL)
		printf("按值查询：%d\n", search->data);
	else
		printf("找不到\n");


	return 0;
}

















//C++引用

void Fun_print(char*& p)
{
	p = (char*)malloc(100);
	fgets(p, 100, stdin);//C++引用中如果传入的是一个指针变量，中间参数指向的就是对应指针指向的空间大小

}
//int main()
//{
//	char* p;
//	Fun_print(p);
//
//	printf("%s\n", p);
//	return 0;
//}