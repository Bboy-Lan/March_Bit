#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>


//栈
// 定义
typedef int ElemType;
#define MaxSize 50

typedef struct {
	ElemType data[MaxSize];//数组
	int Top;//代表栈数组的下标 用int 而不是 ElemType

}Stack;

//栈的 初始化
bool IniStack(Stack& S)
{
	S.Top = -1;
	return true;
}

//判断栈是否为空
bool StackEmpyt(Stack S)
{
	if (-1 == S.Top)
	{
		return true;

	}
	
		return false;
}

//入栈
bool Stack_Psuh(Stack& S, ElemType x)
{
	//先判断栈是否满了 满了就不能再入栈
	if (S.Top == MaxSize - 1)//刚好满元素
		return false;

	S.data[++S.Top] = x;
	return true;
}

//获取栈顶元素
bool GetTop(Stack S, ElemType& x)
{
	//差一步 判断栈是否为空
	if (StackEmpyt(S))
		return false;
	//获取元素将其放入 x变量里
	x = S.data[S.Top];
	return true;
}

//出栈-弹出栈顶元素
bool Pop_Stack(Stack& S, ElemType &x)
{
	if (StackEmpyt(S))//判断栈是否为空
		return false;

	x = S.data[S.Top--];
	return true;
}

//打印-栈
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

	flag = GetTop(S, x);//这里引不引用完全看所建立函数的返回值 这里bool 因此需要引用
	if (flag)
	{
		printf("栈顶元素%d:\n", x);
	}

	flag = Pop_Stack(S, x);
	if (flag)
	{
		printf("弹出元素%d:\n", x);
	}
	Stack_Print(S);


	//判断栈是否为空
	flag = StackEmpyt(S);
	if (flag)
		printf("栈为空\n");
	else
		printf("栈不为空\n");


	return 0;
}






















////顺序表
//typedef int ElemType;
//#define MaxSize 50
//
//typedef struct {
//	ElemType data[MaxSize];
//	int length;//顺序表长度--这里用int 而不是 ElemType
//
//}SqList;
//
////插入操作
//bool SqList_Insert(SqList& s, ElemType i,ElemType e)
//{
//	//判断数据是否合法
//	if (i < 1 || i > s.length + 1)
//		return false;
//	if (s.length >= MaxSize)//已经满元素了
//		return false;
//
//	//插入操作--即前面的元素往后进行覆盖
//	for (int j = s.length; j >= i; j--)
//	{
//		s.data[j] = s.data[j-1];//注意这里是数组 --长度本来就是下标加 - 1 
//		//所以最大s.length
//	}
//	s.data[i - 1] = e;
//
//	s.length++;//插入元素长度 + 1
//	return true;
//}
//
////删除操作
//bool SqList_Delete(SqList& s, ElemType i)
//{
//	//判断数据是否合法
//	if (i < 1 || i > s.length + 1)
//		return false;
//	if (s.length == 0)
//		return false;
//
//	//删除-就是将后面的元素往前进行赋值
//	for (int j = i; j <= s.length; j++)
//	{
//		s.data[j-1] = s.data[j];
//	}
//
//	s.length--;
//	return true;
//}
//
////打印操作
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
//	s.data[2] = 2;//初始化 顺序表元素
//	s.data[3] = 3;
//	s.data[4] = 4;
//	s.length = 5;
//
//
//
//	bool ret;
//	//插入操作
//	ret = SqList_Insert(s,2,6);
//	if (ret)
//		SqList_Print(s);
//	else
//		printf("插入失败\n");
//	
//
//	//删除操作
//	ret = SqList_Delete(s,4);
//	if (ret)
//		SqList_Print(s);
//	else
//		printf("删除失败\n");
//
//	return 0;
//}