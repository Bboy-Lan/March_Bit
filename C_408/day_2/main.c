#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{
	int a;
	scanf("%d", &a);//char 类型的时候 最好不要尝试用 %d
	printf("%c\n", a);
	return 0;
}



//int main()
//{
//	//自增自减运算符 ++/--
//	//前置就是先操作后赋值 后置则是先赋值后操作
//	int i = -1;
//
//	int k = ++i < -1;
//	int j = i++ > -1;
//	printf("%d %d %d", i, j,k);//3 1 3
//
//	//赋值运算符 = 左边只能放变量 不能放表达式 a + 3 =10;这样是不对的
//	//int a = 10;
//	//printf("%d ", a > 10 ? a : 10);
//	return 0;
//}


//int main()
//{
//	//任何非0的数都表示真 0表示假
//	//学习逻辑非  !+任何数或者表达式都得到相反结果
//	int i = 5;
//	int j = !!i;//从右到左运算 而不是两个！就能够抵消了
//	printf("%d\n", j);
//
//	return 0;
//}




//判断两个浮点数是否相等

//必须用这种方法
//int main()
//{
//	float f = 234.56;
//	if(234.56 -f > -0.001 && f - 234.56 < 0.0001)
//		//意思就是多的很少 或者差的不多
//		printf("f is equal to 234.26\n");
//	else
//		printf("f is not equal to 234.26\n");
//	return 0;
//}



//int main()
//{
//	float f = 234.56;//无限逼近
//
//	if (f == 234.56)
//	{
//		printf("f is equal to 234.26\n");
//	}
//	else
//		printf("f is not equal to 234.26\n");
//
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	while (a != 0)
//	{
//			printf("%d ", a % 10);//打印尾数
//			a = a / 10;
//	}
//	return 0;
//}

//int main()
//{
// //思维太固定化了
//	//输入 1234 输出4321
//	int a;
//	scanf("%d", &a);
//	//1234 % 10--4
//	//1234 / 10--123
//	while (1)
//	{
//		if (a > 9)
//		{
//			printf("%d ", a % 10);//打印尾数
//			a = a / 10;
//		}
//		else if (a < 9)//当到个位数 最后打印走出来然后
//		{
//			printf("%d ", a % 10);
//			break;
//		}
//	}
//
//	//printf("%d", 10 + 5 * 6 / 9 % 5);
//	return 0;
//}



//int main()
//{
//
//	//scanf()循环读取
//	char i;
//	while (scanf("%c", &i) != EOF)
//	{
//		if (i != '\0')
//			printf("%c", i-32);
//	}
//	return 0;
//
//}