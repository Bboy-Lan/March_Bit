#include"function.h"


void InitStack(SqStack& S)
{
	S.top = -1;
}
bool IsEmpty(SqStack S)
{
	if (-1 == S.top)
		return true;
	else
		return false;
}
bool Push(SqStack& S, ElemType x)
{
	//判断元素是否已经存满
	if (S.top == MaxSize - 1)
		return false;
	S.data[++S.top] = x;
	return true;
}
bool Pop(SqStack& S, ElemType& x)
{
	//判断是否为空
	if (IsEmpty(S))
		return false;
	x = S.data[S.top--];
	return true;
}