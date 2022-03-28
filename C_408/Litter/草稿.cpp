#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

//ջ -����

typedef int ElemType;
#define MaxSize 5

//�½�ѭ�����нṹ��
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;

//��ʼ������
void IniQueue(SqQueue& Q)
{
	Q.front = Q.rear = 0;
}

//�ж϶����Ƿ�Ϊ��
bool isQEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//���
bool EnQueue(SqQueue& Q, ElemType x)
{
	//�����ж��Ƿ����
	if (Q.front == (Q.rear + 1) % MaxSize)
		return false;
	
	Q.data[Q.rear + 1] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	
	return true;
}

//����
bool DeQueue(SqQueue& Q, ElemType& x)
{
	//�ж��Ƿ�Ϊ��
	if (isQEmpty(Q))
		return false;

	x = Q.data[Q.front + 1];
	Q.front = (Q.front + 1) % MaxSize;

	return true;
}


//����һ��ջ�ṹ��
typedef struct {
	ElemType data[MaxSize];
	int Top;
}SqStack;

//��ʼ��ջ
void IniStack(SqStack &S)
{
	S.Top = -1;
}

//�ж�ջ�Ƿ�Ϊ��
bool isEmpty(SqStack S)
{
	if (-1 == S.Top)
		return true;
	else
		return false;
}

//��ջ
bool Stack_Push(SqStack &S, ElemType x)
{
	if (S.Top == MaxSize -1)//ջ����
		return false;

	S.data[++S.Top] = x;
	return true;
}

//��ջ
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
//�½�һ��ջ����ȡ��׼����3������3 4 5����ջ3 4 5�����γ�ջ,��ӡ 5 4 3
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



	//��ȡ��׼����3 4 5 6 7�����7ʱ����������ӡfalse��Ȼ�����γ��ӣ���� 3 4 5 6

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