#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//线性表的顺序存储--顺序表

typedef struct Student
{
	int id[20];
	char name[20];
	char sex;
}List;


int main()
{
	List L;
	scanf("%s%s %c", L.id, L.name, &L.sex);//整形数组打印也需要 --% s
	printf("%s %s %c\n", L.id, L.name, L.sex);


	return 0;
}



//初始化顺序表（顺序表中元素为整型），里边的元素是1,2,3，然后通过scanf读取一个元素（假如插入的是6），插入到第2个位置，打印输出顺序表，每个元素占3个空格，格式为1  6  2  3，然后scanf读取一个整型数，是删除的位置（假如输入为1），然后输出顺序表  6  2  3，。提醒，Language一定要选为C++。

#define MaxSize 50

//1 .定义一个结构体数组顺序表
typedef struct
{
	int date[MaxSize];
	int length;//顺序表长度
}SqList;

//插入操作
bool ListInsert(SqList &L,int i,int e)
{
	if (i<1 || i > L.length + 1)//判断执行是否合法
		return false;
	if (L.length > MaxSize)
		return false;

	//插入操作--也就是前面的元素往后覆盖赋值
	for (int j = L.length; j >= i; j--)
	{
		L.date[j] = L.date[j-1];
	}

	L.date[i - 1] = e;//对插入空位进行赋值
	L.length++;
	return true;
}

//打印操作
void ListPrint(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.date[i]);
	}
	printf("\n");
}

//删除操作
bool ListDelete(SqList &L,int i,int e)
{
	if (i<1 || i > L.length + 1)//判断执行是否合法
		return false;
	if (L.length == 0)
		return false;
	//执行删除---也就是后面的数据全部往前面覆盖赋值
	e = L.date[i - 1];//现将这个元素去掉后面进行赋值
	for (int j = i; j <=L.length ; j++)
	{
		L.date[j-1] = L.date[j];
	}

	L.length--;
	return true;

}


int main()
{
	SqList L;
	int a, b;
	int del=0;
	bool ret;
	L.date[0] = 1;
	L.date[1] = 2;
	L.date[2] = 3;
	L.length = 3;

	scanf("%d", &a);//读取一个数到时候插入到第2个位置
	ret = ListInsert(L,2,a);
	ListPrint(L);

	scanf("%d", &b);//读取一个需要删除的位置
	ret = ListDelete(L,b, del);
	if (ret != true)
		printf("false\n");
	else
		ListPrint(L);

	//假如输入的位置不合法，输出false字符串
	
	return 0;
}

















//1. 定义一个结构体

#define MaxSize 50 
typedef int Elemtype;//int类型 --重命名 

typedef struct
{
	Elemtype date[MaxSize];
	Elemtype length;//顺序表元素个数

}SqList;

//打印链表
void PrintList(SqList &L)
{
	for (int i = 0; i < L.length; i++)
		printf("%-3d", L.date[i]);
	printf("\n");
}
//执行插入
bool ListInsert(SqList& L, Elemtype i, Elemtype e)
{
	//判断操作的数是否合法
	if (i < 1 || i > L.length+1)
		return false;
	if (i >= MaxSize)
		return false;
	//执行插入操作--将插入位置后的元素依次往后移动一位进行 -赋值
	for (int j = L.length; j >= i; j--)
	{
		L.date[j] = L.date[j-1];
	}
	L.date[i - 1] = e;//将需要赋的值插入对应位置 数组下标从0开始
	L.length++;
	return true;
}
//执行删除
bool ListDelete(SqList& L, Elemtype i, Elemtype &e)
{
	if (i <1 || i>L.length+1)//判断操作数的合理性
		return false;
	if (L.length == 0)//顺序表长度为0 
		return false;

	//删除-将对应元素后的元素依次往前赋值
	e = L.date[i - 1];
	//需要先将对应操作的元素删掉 --也相当于赋值给 e 这里改变了e的值 
	//因此传参的时候需要加个引用符号
	for (int j = i; j <= L.length; j++)
	{
		L.date[j-1] = L.date[j];
	}
	L.length--;
	return true;
	

}
//执行查找
Elemtype ListSearch(SqList L,Elemtype e)
{
	for (int j = 0; j < L.length; j++)
	{
		if (L.date[j] == e)//如果查找成功返回元素位置
			return j+1;
	}
	return 0;
}


int main()
{
	SqList L;
	//2. 往数组里面添加元素
	L.date[0] = 6;
	L.date[1] = 6;
	L.date[2] = 99;
	L.date[3] = 6;
	L.length = 4;//链表初始长度

	bool ret;//布尔类型用于判断

	// 3 .执行插入操作

	ret = ListInsert(L,2,88);//C++引用传址 表示在L链表之中 一、二元素间插入 88 

	if (ret)
	{
		printf("插入成功\n");
		PrintList(L);
	}
	else
		printf("插入失败\n");


	//4 . 执行删除操作
	Elemtype del;
	ret = ListDelete(L,3,del);//将顺序表中的第三个元素删除 
	if (ret)
	{
		printf("删除成功\n");
		PrintList(L);
		printf("删除的元素:%d\n", del);
	}
	else
		printf("删除失败\n");

	// 5. 执行查找
	Elemtype num;
	num = ListSearch(L, 99);
	if (num != 0)
		printf("第 %d 个元素\n",num);
	else
		printf("找不到\n");
	return 0;
}












