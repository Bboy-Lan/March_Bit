#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>


//ջ
// ����
typedef int ElemType;
#define MaxSize 50

typedef struct {
	ElemType data[MaxSize];//����
	int Top;//����ջ������±� ��int ������ ElemType

}Stack;

//ջ�� ��ʼ��
bool IniStack(Stack& S)
{
	S.Top = -1;
	return true;
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpyt(Stack S)
{
	if (-1 == S.Top)
	{
		return true;

	}
	
		return false;
}

//��ջ
bool Stack_Psuh(Stack& S, ElemType x)
{
	//���ж�ջ�Ƿ����� ���˾Ͳ�������ջ
	if (S.Top == MaxSize - 1)//�պ���Ԫ��
		return false;

	S.data[++S.Top] = x;
	return true;
}

//��ȡջ��Ԫ��
bool GetTop(Stack S, ElemType& x)
{
	//��һ�� �ж�ջ�Ƿ�Ϊ��
	if (StackEmpyt(S))
		return false;
	//��ȡԪ�ؽ������ x������
	x = S.data[S.Top];
	return true;
}

//��ջ-����ջ��Ԫ��
bool Pop_Stack(Stack& S, ElemType &x)
{
	if (StackEmpyt(S))//�ж�ջ�Ƿ�Ϊ��
		return false;

	x = S.data[S.Top--];
	return true;
}

//��ӡ-ջ
void Stack_Print(Stack S)
{
	for (int i = 0; i <= S.Top; i++)
	{
		printf("%-3d", S.data[i]);
	}
	printf("\n");
}

int main()
{
	Stack S;
	bool flag;
	ElemType x;
	IniStack(S);

	Stack_Psuh(S, 1);
	Stack_Psuh(S, 2);
	Stack_Psuh(S, 3);
	Stack_Psuh(S, 4);
	Stack_Print(S);

	flag = GetTop(S, x);//��������������ȫ�������������ķ���ֵ ����bool �����Ҫ����
	if (flag)
	{
		printf("ջ��Ԫ��%d:\n", x);
	}

	flag = Pop_Stack(S, x);
	if (flag)
	{
		printf("����Ԫ��%d:\n", x);
	}
	Stack_Print(S);


	//�ж�ջ�Ƿ�Ϊ��
	flag = StackEmpyt(S);
	if (flag)
		printf("ջΪ��\n");
	else
		printf("ջ��Ϊ��\n");


	return 0;
}






















////˳���
//typedef int ElemType;
//#define MaxSize 50
//
//typedef struct {
//	ElemType data[MaxSize];
//	int length;//˳�����--������int ������ ElemType
//
//}SqList;
//
////�������
//bool SqList_Insert(SqList& s, ElemType i,ElemType e)
//{
//	//�ж������Ƿ�Ϸ�
//	if (i < 1 || i > s.length + 1)
//		return false;
//	if (s.length >= MaxSize)//�Ѿ���Ԫ����
//		return false;
//
//	//�������--��ǰ���Ԫ��������и���
//	for (int j = s.length; j >= i; j--)
//	{
//		s.data[j] = s.data[j-1];//ע������������ --���ȱ��������±�� - 1 
//		//�������s.length
//	}
//	s.data[i - 1] = e;
//
//	s.length++;//����Ԫ�س��� + 1
//	return true;
//}
//
////ɾ������
//bool SqList_Delete(SqList& s, ElemType i)
//{
//	//�ж������Ƿ�Ϸ�
//	if (i < 1 || i > s.length + 1)
//		return false;
//	if (s.length == 0)
//		return false;
//
//	//ɾ��-���ǽ������Ԫ����ǰ���и�ֵ
//	for (int j = i; j <= s.length; j++)
//	{
//		s.data[j-1] = s.data[j];
//	}
//
//	s.length--;
//	return true;
//}
//
////��ӡ����
//void SqList_Print(SqList s)
//{
//	int i;
//	for (i = 0;i < s.length; i++)
//	{
//		printf("%-3d", s.data[i]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	SqList s;
//	s.data[0] = 0;
//	s.data[1] = 1;
//	s.data[2] = 2;//��ʼ�� ˳���Ԫ��
//	s.data[3] = 3;
//	s.data[4] = 4;
//	s.length = 5;
//
//
//
//	bool ret;
//	//�������
//	ret = SqList_Insert(s,2,6);
//	if (ret)
//		SqList_Print(s);
//	else
//		printf("����ʧ��\n");
//	
//
//	//ɾ������
//	ret = SqList_Delete(s,4);
//	if (ret)
//		SqList_Print(s);
//	else
//		printf("ɾ��ʧ��\n");
//
//	return 0;
//}