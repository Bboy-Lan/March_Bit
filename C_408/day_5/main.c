#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



//下面看一个例子
char* print_stack()//栈空间
{
	char arr[] = "I am print_stack!";
	puts(arr);
	return arr;
}

char* print_malloc()//堆空间
{
	char* p = (char*)malloc(30);
	strcpy(p, "I am print_malloc!");
	puts(p);
	return p;
}

int main()
{
	char* p;
	p = print_stack();
	//栈空间会随着函数执行的结束而释放

	puts(p);//这里已经打印不出来了 因为函数调用所创建的并且返回的数组地址已经随着函数执行结束释放  -出现乱码

	p = print_malloc();

	//堆空间不会随着函数执行完毕而释放 除非执行了free 操作
	puts(p);

}














//指针与动态内存申请
//确定数量 -栈  未知数量-堆 需要申请 还有释放操作
int main()
{
	int i;//申请空间的大小
	scanf("%d", &i);

	char* p;
	p = (char*)malloc(i);//申请的也是地址连续的一片空间 byte是基本单位

	strcpy(p, "malloc success!");
	puts(p);
	free(p);//释放空间 p的值是没有改变的 但是最后释放p的值必须和最初malloc返回的值一致
	p = NULL;//如果不将 p置为null 这时候会发生乱指向其他空间的野指针操作 -程序报错.

	return 0;
}


















//指针与一维数组

void change(char *d)//d[] 类型是char *  函数调用不能传数组 只会传递值
{
	*d = 'H';
	d[1] = 'E';
}
int main()
{
	//函数调用的本质 实参赋值给形参

	char c[10] = "hello";
	change(c);
	puts(c);


	return 0;
}


















//有点绕 需要多推敲一下

int main()
{
	//指针与自增自减运算符
	int arr[3] = { 3,5,7 };
	int* p;
	int j;
	p = arr;
	j = *p++;//j=*p ,p++ 不是*p++
	//j = *p++; 
	//j = arr[0]++;
	printf("arr[0]:%d\nj=%d\n*p=%d\n",arr[0], j,*p);// 3 3 5

	j = arr[0]++;//注意是在上面基础上 p[0]++
	printf("arr[0]:%d\nj=%d\n*p=%d\n", arr[0], j, *p);// 

	return 0;
}