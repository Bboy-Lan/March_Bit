#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//结构体-描述复杂对象

//struct student
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char id[11];
//};
//struct Book
//{
//	char name[20];
//	int price;
//	char author[20];
//};
//
//int main() 
//{
//	struct student s1 = { "三三",16,"男","10086" };
//	struct student s2 = { "丝丝",20,"女","3834015" };
//	struct Book b1 = { "鹏哥",99,"比特" };
//	
//	//这里注意什么类型用什么打印 int d  char c/s
//	printf("书名：%s\n价格：%d元\n作者：%s\n",b1.name,b1.price,b1.author );
//	//结构体变量.--引用操作符
//
//
//	struct student* pa = &s1;//*pa 解引用打印的时候 最好加上括号 --().
//	printf("姓名：%s\n年龄：%d\n性别：%s\n联系方式：%s\n", (*pa).name,(*pa).age, (*pa).sex , (*pa).id);
//	// pa->   指针+箭头
//	
//	printf("姓名：%s\n年龄：%d\n性别：%s\n联系方式：%s\n", pa->
//		name, pa->age, pa->sex, pa->id);
//
//	//三种打印方式
//	
//
//	return 0;
//}





//指针-是一个存放地址的变量

//int main()
//{
//	//指针变量的 大小 64位8byte 32位4byte  思考一下为什么？
//	/*printf("%d\n", sizeof(char*));*/
//	//(地址线)32位为例  一根地址线需要32个bit位4个字节 所以64 位 8个字节
//	//而 指针变量需要表示一整根地址线 故全部类型都需要一样的内存 即4or8
//
//
//	//这里需要着重考虑考虑
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", *pa);
//	printf("%d\n", a);
//
//
//	////这里取地址拿到的是 所占字节中最小的那一个地址
//	//int a = 10;
//	//printf("%p\n",&a);
//	//int* pa = &a;//pa 存放地址的变量就是指针变量
//	////int 表示指向对象的数据类型 *号表示是指针
//	//// 可以知道 *pa 这里就是 a
//
//
//	//char c = 'w';
//	//char* pc = &c;//& 符号不要忘
//
//	////将地址存起来之后肯定是需要重新找到并且作改变的
//	//*pa=20;//* 这里表示解引用操作符
//	//*pc = 'H';
//
//	//printf("%d\n", a);
//	//printf("%c\n", c);
//
//	return 0;
//}