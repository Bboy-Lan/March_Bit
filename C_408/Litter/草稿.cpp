#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

//栈 -队列

typedef int ElemType;
#define MaxSize 5

//新建循环队列结构体
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;

//初始化队列
void IniQueue(SqQueue& Q)
{
	Q.front = Q.rear = 0;
}

//判断队列是否为空
bool isQEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//入队
bool EnQueue(SqQueue& Q, ElemType x)
{
	//首先判断是否队满
	if (Q.front == (Q.rear + 1) % MaxSize)
		return false;
	
	Q.data[Q.rear + 1] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	
	return true;
}

//出队
bool DeQueue(SqQueue& Q, ElemType& x)
{
	//判断是否为空
	if (isQEmpty(Q))
		return false;

	x = Q.data[Q.front + 1];
	Q.front = (Q.front + 1) % MaxSize;

	return true;
}


//定义一个栈结构体
typedef struct {
	ElemType data[MaxSize];
	int Top;
}SqStack;

//初始化栈
void IniStack(SqStack &S)
{
	S.Top = -1;
}

//判断栈是否为空
bool isEmpty(SqStack S)
{
	if (-1 == S.Top)
		return true;
	else
		return false;
}

//入栈
bool Stack_Push(SqStack &S, ElemType x)
{
	if (S.Top == MaxSize -1)//栈满了
		return false;

	S.data[++S.Top] = x;
	return true;
}

//出栈
bool Stack_Pop(SqStack& S, ElemType &x)
{
	if (isEmpty(S))
		return false;
	x = S.data[S.Top--];

	return true;
}



int main()
{
	SqStack S;
	ElemType x;
//新建一个栈，读取标准输入3个整数3 4 5，入栈3 4 5，依次出栈,打印 5 4 3
	IniStack(S);

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &x);
		Stack_Push(S, x);
	}

	for (int i = 0; i < 3; i++)
	{
		Stack_Pop(S, x);
		printf("%2d", x);
	}
	printf("\n");



	//读取标准输入3 4 5 6 7，入队7时，队满，打印false，然后依次出队，输出 3 4 5 6

	SqQueue Q;
	IniQueue(Q);

	while (Q.front != (Q.rear + 1) % MaxSize)//3 4 5 6 7 
	{
		scanf("%d", &x);
		EnQueue(Q, x);
	}
	printf("false\n");


	while (DeQueue(Q, x))
	{
		printf("%2d", x);
	}


	return 0;
}