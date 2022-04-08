#include "function.h"



//初始化栈
void InitStack(SqStack& S)
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
bool Push(SqStack& S, ElemType x)
{
	if (S.top == MaxSize - 1)
		//注意这里的判断 因为不是循环 而且 S.Top的值每次都是记录变化的 所以不用区间
	{
		return false;//栈满了
	}
	S.data[++S.top] = x;
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

