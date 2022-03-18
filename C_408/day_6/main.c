#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//函数与结构体
//函数有返回值就必须写return
//程序都是先编译后链接-->exe


struct inform //结构体的大小每一块变量都是4个字节或者整数倍
	//方便CPU进行数据的存取
{
	char name[10];
	int num;
	char sex;

};

int main()
{
	struct inform s = {"hehe",10010,'M'};
	struct inform* p;
	p = &s;//这一步不要忘了 指针变量初始化
	printf("%s %d %c\n",p->name,p->num ,p->sex );



	//结构体指针偏移-这里有些绕
	struct inform arr[3] = { "hehe",100,'m',"haha",200,'w',"xixi",300,'m' };
	struct inform * p1;
	p1 = arr;
	int num = 0;
	num = p1->num++;//p1->num ; num = p1->num++
	//当优先级高时是对整体进行操作
	printf("num=%d,p->num=%d\n", num, p1->num);//100 101
	
	num = p1++->num;//num = p1->num ;p1++ 
	printf("num=%d,p->num=%d\n", num, p1->num);//101 200



	//struct inform A[3];//结构体数组
	//for (int i = 0; i < 3; i++)
	//{
	//	scanf("%s%d %c", A[i].name, &A[i].num, &A[i].sex);
	//	printf("%s %d %c\n", A[i].name, A[i].num, A[i].sex);
	//}


	return 0;
}











//二级指针-C++的引用

//想要在子函数中改变一个变量的值，必须把变量的地址传进去
//想要在在子函数中改变一个指针变量的值，必须把该指针变量的地址传进去

//void change(int** pi, int *pj)//int **表示二级指针变量类型 专门用来存放指针变量的地址

//{
//	*pi = pj;
//}
//
//int main()
//{
//	int i = 5;
//	int j = 10;
//	
//	int* pi;
//	pi = &i;//将地址赋给指针
//	
//	int* pj;
//	pj = &j;
//
//	printf("i=%d\n*pi=%d\n*pj=%d\n", i, *pi, *pj);
//	
//	//这里当我们想要转换两个指针的值之后 需要传递指针变量的地址 
//	//再进行一次指针  比如 *pi 的值变成*pj 的 交换值
//
//	change(&pi,pj);//传pj的值 pi的地址
//	printf("i=%d\n*pi=%d\n*pj=%d\n", i, *pi, *pj);
//
//
//	return 0;
//}








//字符指针和字符数组初始化


//int main()
//{
//	char* p = "hello";//把字符串型常量hello 的首地址赋给p
//	char arr[10] = "hello"; // 等价于strcpy（c，"hello"）
//	
//	arr[0] = "H";//这里 arr 却可以进行修改
//	p[0] = "H";
//	
//	//为什么这里不可以 -写入访问权限冲突（报错）
//	//不可以对常量区数据进行修改
//
//
//	p = "world";//将字符串 world地址赋给 p
//	//arr = "world";
//	//数组名不属于变量 不能进行这样赋值
//
//
//	printf("p[0]:%c\narr[0]:%c\n", p[0], arr[0]);// h h 
//
//
//	return 0;
//}













//int main()
//{
//	//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串
//	int i;
//	char c;
//	scanf("%d", &i);
//
//	char* p;
//	p = (char*)malloc(i);
//	scanf("%c", &c);//将之前残余的\0 给取走 不然没结果
//	gets(p);
//	puts(p);
//
//
//
//	return 0;
//}