
#define MaxSize 20
typedef int ElemType;


typedef struct
{
	ElemType data[MaxSize];
	int top;//指的是数组下标

}SqStack;

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
