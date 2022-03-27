#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//栈、队列

//栈 - 先进后出
//用链表实现栈 -考虑头插法 和每次删除头结点 因为头插法是倒序打印的 
//函数里面调用函数时 所需要的参数不能忘记

#define MaxSize 10
typedef int ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int top;//指的是数组下标
}SqStack;

//初始化栈
void InitStack(SqStack &S)
{
	S.top = -1;//代表栈为空
}

//判断栈是否为空
bool StackEmpty(SqStack S)//只去读 不需要加引用 
{
	if (-1 == S.top)
	{
		return true;
	}
	return false;
}

//入栈
bool Push(SqStack& S,ElemType x)
{
	if (S.top == MaxSize - 1)
	//注意这里的判断 因为不是循环 而且 S.Top的值每次都是记录变化的 所以不用区间
	{
		return false;//栈满了
	}
	S.data[++S.top] = x;
	return true;
}

//获取栈顶元素
bool GetTop(SqStack S, ElemType& x)//需要改变原m的值 故需要加上引用
{
	//先判断栈是否为空
	if (StackEmpty(S))
	{
		return false;
	}
	x = S.data[S.top];//先入后出 所以这里是 5
	return true;
}

//弹栈-出栈
bool Pop(SqStack& S, ElemType& x)
{
	if (StackEmpty(S))
	{
		return false;
	}
	//出栈
	x = S.data[S.top--];
	//等价于
	
	//x = S.data[S.top];
	//S.top--;
	return true;
}


int main()
{
	//先进后出 FILO LIFO  初始化
	
	SqStack S;//注意这里-S 并不是指针 不同于链表
	bool flag;
	ElemType m;//存储所拿出的栈顶元素

	InitStack(S);//初始化栈
	flag = StackEmpty(S);
	if (flag)
		printf("栈是空的\n");
	else
		printf("栈不为空\n");

	//入栈
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);

	//获取栈顶元素
	flag = GetTop(S, m);//S 不需引用  ,  m 需要加引用
	if (flag)
	{
		printf("栈顶元素%d:\n", m);
	}


	//弹栈-出栈 、就是弹出栈顶元素 因此这里都是一样的 m 就是之前获取的栈顶元素m 值
	flag = Pop(S, m);
	if (flag)
	{
		printf("弹出元素%d:\n", m);
	}

	return 0;
}