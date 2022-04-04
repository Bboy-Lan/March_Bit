#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//循环队列应该是可以只表示逻辑上的，但是基本循环队列都默认数组实现 

//因此循环队列是存储结构




//队列 FIFO --在表的一端进行插入 、另一端进行删除
//对头-Front出队、对尾-Rear入队

//循环队列--它的循环是通过 取余 % 操作实现的

//队列的链式存储  、 斐波那契数列

#define MaxSize 5
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];//数组 存储 MaxSize -1 个元素
	//必须空出一个用于判断队列是否已经装满
	int front, rear;//队列头/队列尾
	//有些时候为了不浪费多出的那个空间 还需要再定义一个变量 用于判断

}SqQueue;


//初始化循环队列-让队列为空
void IniQueue(SqQueue &Q)
{
	Q.front = Q.rear = 0;
}

//判断是否为空
bool isEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)//指向同一个地方就行了 不是说一定都要为 0
	{
		return true;
	}
	else
		return false;
}

//入队
bool EnQueue(SqQueue& Q, ElemType x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
	{
		return false;//队列满
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;//向后移动一个
	return true;

}

//出队
bool DeQueue(SqQueue& Q, ElemType &x)
{
	if (Q.front == Q.rear)//规定好的
	{
		return false;
	}

	x = Q.data[Q.front];//先进先出
	Q.front = (Q.front + 1) % MaxSize;

	return true;

}



int main()
{
	SqQueue Q;
	bool ret;
	ElemType element;
	IniQueue(Q);//初始化循环队列

	ret = isEmpty(Q);
	if (ret)
	{
		printf("队列为空\n");
	}
	else
	{
		printf("队列不为空\n");
	}


	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	ret = EnQueue(Q, 6);
	ret = EnQueue(Q, 7);

	if (ret)
	{
		printf("入队成功\n");
	}
	else
	{
		printf("入队失败\n");
	}
	
	//出队
	ret = DeQueue(Q, element);
	if (ret)
	{
		printf("出队成功:%d\n", element);
	}
	else
	{
		printf("出队失败\n");
	}

	return 0;
}