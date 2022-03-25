#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//线性表--后面的问题都是引用C++解决的
//比如数组 前驱_后继
//本能将线性表（逻辑结构）、顺序表和链表混为一谈

//动态分配的数组仍然属于顺序存储结构

//善用调试 看下每步代码的执行效果是否符合预期

#define MaxSize 50
typedef int Elemtype;//这种自定义更方便


//注意：
//插入要考虑元素是否在区间以内 并且是不是超出了范围 即 没有这么大的空间
//删除除了考虑元素是否在区间内以外 并且 有没有元素给他删 即 原本是否为空


typedef struct 
{
	Elemtype date[MaxSize];//定义数组 用于存储元素
	int length;//顺序表中元素个数

}SqList;//结构体变量的别名
//元素的增加
bool ListInsert(SqList &L,int i, Elemtype e)//返回值布尔类型
{
	if (i < 1 || i > L.length + 1)//判断插入的位置是否合法
		return false;
	if (L.length >= MaxSize)//元素存满了，不能再存了
		return false;

	for (int j = L.length; j >= i; j--)//移动数组中的元素 依次往后移动
	{
		L.date[j] = L.date[j-1];
	}
	L.date[i - 1] = e;
	L.length++;
	return true;//插入成功

}
//元素的删除
bool ListDelete(SqList &L,int i , Elemtype &del)//删除元素操作
//注意这里变量 del 为什么有引用
{
	if (i < 1 || i > L.length + 1)//判断删除的元素位置是否合法
		return false;
	if (L.length == 0)//没有元素
		return false;
	del = L.date[i - 1];//获取顺序表中对应的元素赋值给 e---相当于删除
	
	for (int j = i;j < L.length;j++)
	{
		L.date[j-1] = L.date[j];//从i的位置依次把元素往前覆盖
	}
	L.length--;
	return true;

}
//元素的查找
Elemtype LocatEle(SqList L,int e)//查找元素对应的位置
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.date[i] = e)
			return i + 1;
		else
			return 0;
	}

}
//链表的打印
void PrintList(SqList &L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.date[i]);
	}
	printf("\n");
}

int main()
{
	SqList L;
	bool ret;//布尔类型 --查看返回值 True False （C++里面特有）
	Elemtype del;//需要删除的元素

	L.date[0] = 1;//手动往数组里面添加元素
	L.date[1] = 2;
	L.date[2] = 3;

	L.length = 3;
	ret = ListInsert(L,2,60);//传值 第二个位置插入60

	if (ret)//判断是否插入成功
	{
		printf("插入成功\n");
		PrintList(L);
	}
	else
	{
		printf("插入失败\n");
	}
	

	ret = ListDelete(L, 1, del);//删除第一个位置的元素 并将值输出

	if (ret)//判断是否插入成功
	{
		printf("删除成功\n");
		//PrintList(L);
		printf("%d\n", del);
		PrintList(L);

	}
	else
	{
		printf("删除失败\n");
	}

	int loca=LocatEle(L, 60);
	if (loca)//判断是否插入成功
	{
		printf("查找成功\n");
		printf("元素位置：%d\n", loca);
	}
	else
	{
		printf("查找失败\n");
	}
	
	
	return 0;
}

