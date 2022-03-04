#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()//变量 & 常量
{
	//全局变量main函数外面  局部变量-大括号内部(名字相同时局部优先.不建议相同)

	//两个数相加
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("%d\n", c);

}



//int main()
//{
//	char ch = 'e';//ASCII 码表  A_Z 65-90  a_z 97-122
//	printf("%c\n", ch);
//	return 0;
//}




//int main()
//
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));//byte 字节 = 8 bit
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}



//int main()//标准写法 void 已经过时
//{
//	
//	
//	
//	
//	
//	
//	
//	printf("hello_world!\n");
//	printf("hello_world!\n");
//	printf("hello_world!\n");
//	printf("hello_world!\n");
//	printf("hello_world!\n");
//
//
//	return 0;
//}