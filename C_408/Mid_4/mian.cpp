#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>
#include "maincpp.h"

//线性表的链式存储--链表

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
LinkList CreatList2(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r=L;//为什么这样写 其实都一样  这里r代表表尾节点 指向链表尾部
	scanf("%d", &x);

	while (x != 9999)//尾部空间是-NULL
	{
		s = (LinkList)malloc(sizeof(LNode));//申请空间的操作都是一样的
		s->data= x;
		r->next= s;//尾部结点指向新节点

		scanf("%d", &x);
	}
	r->next = NULL;//最后必须这样赋值 不然打印的时候会显示访问读取权限冲突
	return L;
}




int main()
{
	LinkList L;//结构体指针类型--链表头

	CreatList1(L);//3 4 5 6 7 9999--做结束标志
	PrintList(L);

	CreatList2(L);

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