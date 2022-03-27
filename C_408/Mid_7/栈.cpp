#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//ջ������

//ջ - �Ƚ����
//������ʵ��ջ -����ͷ�巨 ��ÿ��ɾ��ͷ��� ��Ϊͷ�巨�ǵ����ӡ�� 
//����������ú���ʱ ����Ҫ�Ĳ�����������

#define MaxSize 10
typedef int ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int top;//ָ���������±�
}SqStack;

//��ʼ��ջ
void InitStack(SqStack &S)
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
bool Push(SqStack& S,ElemType x)
{
	if (S.top == MaxSize - 1)
	//ע��������ж� ��Ϊ����ѭ�� ���� S.Top��ֵÿ�ζ��Ǽ�¼�仯�� ���Բ�������
	{
		return false;//ջ����
	}
	S.data[++S.top] = x;
	return true;
}

//��ȡջ��Ԫ��
bool GetTop(SqStack S, ElemType& x)//��Ҫ�ı�ԭm��ֵ ����Ҫ��������
{
	//���ж�ջ�Ƿ�Ϊ��
	if (StackEmpty(S))
	{
		return false;
	}
	x = S.data[S.top];//������ ���������� 5
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


int main()
{
	//�Ƚ���� FILO LIFO  ��ʼ��
	
	SqStack S;//ע������-S ������ָ�� ��ͬ������
	bool flag;
	ElemType m;//�洢���ó���ջ��Ԫ��

	InitStack(S);//��ʼ��ջ
	flag = StackEmpty(S);
	if (flag)
		printf("ջ�ǿյ�\n");
	else
		printf("ջ��Ϊ��\n");

	//��ջ
	Push(S, 3);
	Push(S, 4);
	Push(S, 5);

	//��ȡջ��Ԫ��
	flag = GetTop(S, m);//S ��������  ,  m ��Ҫ������
	if (flag)
	{
		printf("ջ��Ԫ��%d:\n", m);
	}


	//��ջ-��ջ �����ǵ���ջ��Ԫ�� ������ﶼ��һ���� m ����֮ǰ��ȡ��ջ��Ԫ��m ֵ
	flag = Pop(S, m);
	if (flag)
	{
		printf("����Ԫ��%d:\n", m);
	}

	return 0;
}