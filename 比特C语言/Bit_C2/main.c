#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//操作符

//移位操作符(二进制位)
int main()
{
	int a = 12;
	int b = a << 1;

	//00000000 00000000 00000000 00001100  //12
	// 
	//0000000 00000000 00000000 000011000 //24 ?  
	// 
	//12的二进制序列整体向左移动一位多出的部分用0补齐即可

	printf("%d\n", b);// 24
	return 0;
}






//int main()
//{
//	//算数操作符 + - * /
//	int a = 5;
//	printf("%d\n", a / 2);// 商2 余 0.5
//	//注意 对于 / 法  两边都为整数执行整数除法  两边一边为小数执行小数除法 没有余数
//
//
//	//  %  取模操作符
//	int b = 7;
//	printf("%d\n", b % 2);// 商3余1
//	//得到的是整除之后的余数
//	return 0;
//
//}




// 数组 （一组数） 一组相同类型元素的集合

//int main()
//{
//	//思考一下正序 倒序
//	char arr[10] = { 'a','b','c' };//下标从0开始的  0 1 2 3...
//	printf("%c\n", arr[2]);
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 9;
//	while (i >= 0)
//	{
//		printf("%d\n", arr1[i]);
//		i--;
//	}
//	return 0;
//}



//函数

//int ADD(int a, int b)
//{
//	int c;
//	c = a + b;
//	return c;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c=ADD(a,b);
//	printf("%d\n",c);
//
//}



//选择循环语句

//int main()  while语句
//{
//	int line = 0;
//	
//	while (line < 2000)
//	{
//		printf("继续努力！%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("得到好工作！\n");
//	return 0;
//}




//int main()    if else 语句
//{
//	int ch;
//	printf("是否好好学习？0 or 1\n");
//	scanf("%d", &ch);
//	if (ch == 1)
//		printf("好工作！\n");
//	else
//		printf("卖红薯去吧！\n");
//	return 0;
//}




//两种基本的注释风格  /*  */   //



//转义字符-转变原来的含义--》 '\'

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%s\n", "c:\\test\\test.c");
//	//这里出现了一个问题 求字符串长度的时候没注意使用strlen 而错用成了sizeof 导致求的长度不对 老是多一个 \0 的长度
//	printf("%d\n", strlen("c:\test\test.c"));
//	printf("%d\n", strlen("c:\\test\\test.c"));
//	printf("%d\n", strlen("c:est.c"));
//
//	//  \ddd 表示后面1-3个八进制数字 \xdd 后面两个十六进制数字
//
//	printf("%d\n", '\x51');//注意这里的区别
//	printf("%c\n", '\065');
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}



// 字符串

//int main()
//{
//	'a';//单引号引起的叫字符 
//	' ';//空字符
//	'ab';//两个字符不符规范
//	"ab";//双引号引的叫字符串
//
//
//	char ch[] = "abcdef";//有\0 结束标志
//	char ch1[] = {'a','b','c','d','e','f','\0'};//无\0结束标志 所以后面会出现乱码
//
//	printf("%s\n", ch);//打印数组时候的格式需要注意一下
//	printf("%s\n", ch1);
//
//
//	//求长度的时候 \0 不算做长度的
//	printf("%d\n", strlen(ch));
//	printf("%d\n", strlen(ch1));
//
//
//	return 0;
//
//}




//常量

//枚举常量
//enum Sex//枚举类型 可以像一般数据类型来使用
//{
//	MALE, //0
//	FEMELE,//1
//	SECRET//2   这里赋初始值可以但在下面程序中不能够更改枚举常量的值
//};
//int main()
//{
//	enum Sex A = FEMELE;
//	printf("%d\n", A);
//  return 0
//}



//#define 定义的标识符常量

//#define MAX 100
//int main()
//{
//	//int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}


//const 修饰的 常变量

//int main()
//{
//
//	const int a = 100;
//	// a = 30;
//	int arr[a] = { 0 };
//
//
//	printf("%d\n", a);
//
//
//}


//作用域和生命周期 局部变量所在的作用范围 


//extern int a;//全局变量甚至能够跨文件使用 只需要extern申明即可 作用域是整个工程(项目)
//int main()
//{
//	printf("%d\n", a);
//	return;
//}



//int b = 30;// 全局变量
//void test()
//{
//	printf("b=%d\n", b); 
//
//}
//int main()
//{
//	printf("b=%d\n", b);//30
//	
//	
//	
//	int b=100;
//	{
//		printf("b=%d\n", b);//100
//	}
//	test();//30
//	printf("b=%d\n", b); //100
//	
//	
//	return 0;
//}