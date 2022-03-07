#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


int main()
{
	int i = 0;
	printf("请输入密码登录: ");
	do
	{
		char input[20];
		scanf("%s",&input);
		if (strcmp(input , "wanglan") == 0)//比较字符串用这个 返回值为0则为真
		{
			printf("密码正确\n");
			break;
		}
		else
			printf("密码错误\n");
		i++;

	} while (i<3);
	if(3 == i)
		printf("密码连续错误三次\n");
}





// for 循环 --初始化 判断 调整

//int main()
//{
//	// 1!+2!+3!+...+n!
//	int j,i;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//4
//
//
//	for (j = 1; j <= 3; j++)
//	{
//		ret = 1;//这里犯的错误和之前一样 二次使用某个变量时并没观察残余值是否清除干净
//
//		for (i = 1; i <= j; i++)//计算某个数的阶乘
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d ", sum);
//
//	return 0;
//}





//int main()
//{
//	// do while 循环
//	int i=1;
//	do// 一开始先执行
//	{
//		if (5 == i)
//			continue;//死循环 
//		printf("%d ", i);
//		i++;
//	} while (i<=10);//后判断
//
//
//
//
//
//	//灵活的写法
//	
//	//int x, y;
//	//for (x = 0, y = 0; x < 10 && y < 10; x++, y++)
//	//{
//	//	printf("hehe ");
//	//}
//
//
//
//	//省略初始化部分
//
//	//int i = 0;
//	//int j = 0;
//
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("Bit ");
//	//	}
//	//}
//
//
//	//省略调整部分
//
//	//int i;
//	//for (i=0;;i--)//如果省略-调整部分已经不重要了
//	////判断部分省略了就表示判断恒为真 -其他部分可以省略 尽量不省略
//	//{
//	//	printf("11 ");
// //   }
//
//
//	//int arr[10];
//	//int i = 0;
//	//for (i = 0; i < 10; i++)//比较建议的写法是 采用左闭右开区间的写法
//	//{
//	//	scanf("%d", &arr[i]);//数组存放数据与使用
//	//	printf("%d ", arr[i]);
//	//}
//
//
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	if (i = 5)//不可在其循环内部改变循环变量 -调整部分 就是赋值=和相等== 一定要分开
//	//		printf("%d ", i);
//
//	//}
//
//
//
//	//int i = 0;
//	//for (i = 1 ; i <= 10 ; i++)
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);
//
//	//}
//
//	return 0;
//}