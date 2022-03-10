#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"add.h"


//函数-递归(把大事化小)
 
 
 //编写函数 不允许创建临时变量 求字符串长度

int my_strlen(char* s)//首地址传过来
{

	if(*s != '\0')//h e l l o
	{
		return 1 + my_strlen(s+1);//数组中地址是顺序排列的
	}
	else
		return 0;

}
int main()
{

	char arr[] = "hello";
	int num = my_strlen(arr);
	printf("%d",num);
	return 0;
}




//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int num = my_strlen(arr);//这里数组名表示的是数组首元素的地址
//	printf("%d",num);
//	return 0;
//}



//void print(unsigned int n)
//{
//	if (n > 9)//必须有条件闲限制 无限递归下去会导致栈溢出
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	//接受一个整数型(无符号) 按顺序打印它的每一位
//	//1234 
//
//	// 1234 %10 --4
//    // 1234/10--123
//    // 123 % 10---3
//	// 123 / 10--12
//	// 12 % 10 ---2
//	// 12 / 10 ---1
//	// 1 % 10 ----1
//
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//自己定义的函数用- " "
//虽然写在不同的文件中 但是程序链接阶段都能找到这个函数
//函数的申明和定义

//分模块写代码  可以进行一定的封装和隐藏  可以多人协作

#pragma comment(lib,"add.lib")

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

