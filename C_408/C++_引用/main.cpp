#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//C++的引用--源文件后缀必须是 .cpp 不然会编译不通
//C++里面 将&写到形参里面是允许的 int &i；

//起到了在子函数里面修改变量的作用--代替了C里面 较复杂的二级指针


//void modify_num(int& b)//相比C语言更不容易出错
//{
//	b = b + 1;//相当于C语言里面的传址调用 
//}
//void modify_point(int *&p1)
//{
//	p1 = (int*)malloc(20);
//	p1[0] = 5;
//
//}
//int main()
//{
//	int a = 10;
//	modify_num(a);
//	printf("a=%d\n",a);
//
//	int* p = NULL;//指针初始化
//	modify_point(p);
//	printf("p =%d\n", p[0]);
//	return 0;
//}

//在主函数定义字符指针 char *p,然后在子函数内malloc申请空间，通过fgets读取字符串，然后在主函数中进行输出；要求子函数使用C++的引用，注意在C++中从标准输入读取字符串，需要使用fgets(p,100,stdin)

void function(char*& p)
{
	p = (char*)malloc(100);
	fgets(p, 100, stdin);

}

int main()
{
	char* p = NULL;
	function(p);
	printf("%s\n", p);

	return 0;

}