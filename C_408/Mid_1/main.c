#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1 .typedef 自定义变量 ——起别名
// 2 .C++的引用
// 3 .逻辑结构与



//typedef struct inform 
//{
//	char name[10];
//	int num;
//	char sex;
//
//} stu, * pstu;//结构体变量及其结构体指针的别名 都能一起定义
//
//typedef int INTEGER;
//int main()
//{
//	stu s = { "haha",10086,'m' };
//	pstu p= &s;
//	//或者 stu *p;
//	printf("name:%s\nnum:%d\nsex:%c\n", p->name, p->num, p->sex);
//
//
//	return 0;
//}


//存储结构-数据结构在计算机中的具体表示---顺序存储 链式存储
//逻辑结构- 一对一 、一对多、多对多----

//顺序结构 --形如数组--对数据增删频繁的时候就会出问题
//链式存储 --数据间跳跃 相互有关系



//算法 -对特定问题求解步骤的描述
//有穷-确定-可行-输入-输出



//时间复杂度
// 为什么不用时间去记录其复杂度 原因在于同一个算法在不同硬件机器上的执行的时间差别是很大

//而是用代码运行次数去表示时间复杂度 --因为其是与时间正相关的

//时间复杂度需要忽略高阶项系数 和 低阶项的

//比如一个算法执行次数 3n^3+5^  那么它的时间复杂度就是 O(n^3)---求极限操作



//空间复杂度
//



char function(char** p1)
{

	 p1 = (char*)malloc(100);
	
	gets(p1);//到这它的地址改变了

}

int main()
{
	char* p;
	p=function(&p);
	printf("%s\n", p);


	return 0;
}