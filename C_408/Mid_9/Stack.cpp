#include "function.h"



//��ʼ��ջ
void InitStack(SqStack& S)
{
	S.top = -1;//����ջΪ��
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(SqStack S)//ֻȥ�� ����Ҫ������ 
{
	if (-1 == S.top)
	{
		return true;
	}
	return false;
}

//��ջ
bool Push(SqStack& S, ElemType x)
{
	if (S.top == MaxSize - 1)
		//ע��������ж� ��Ϊ����ѭ�� ���� S.Top��ֵÿ�ζ��Ǽ�¼�仯�� ���Բ�������
	{
		return false;//ջ����
	}
	S.data[++S.top] = x;
	return true;
}

//��ջ-��ջ
bool Pop(SqStack& S, ElemType& x)
{
	if (StackEmpty(S))
	{
		return false;
	}
	//��ջ
	x = S.data[S.top--];
	//�ȼ���

	//x = S.data[S.top];
	//S.top--;
	return true;
}

