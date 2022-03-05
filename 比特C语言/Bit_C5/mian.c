#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 顺序结构 选择结构（分支） 循环结构
// if switch     while for do while

	//C语言中 ; 结尾就是一个语句



//int test()
//{
//	if (0)
//		return 3;
//	return -3;
//}


int main()
{
	//循环语句 

	int ch;
	while ((ch = getchar()) != EOF)//注意必要的格式-括号
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}


	//int ch = 0;
	//printf("输入密码: ");

	//char password[20] = { 0 };
	//scanf("%s", password);//这里不需要使用取地址操作符

	//// scanf(不能读取字符串之间的空格)
	//// scanf()  getchar()----->输入缓冲区<-----键盘
	////因此当需要用getchar取字符的时候都需要将缓冲区里面清空
	//printf("确认密码: ");
	////getchar();//只能取一个
	//
	//while (getchar() != '\n')
	//{
	//	;//将缓冲区清零 取了字符后不需要做什么 可以任意放一个空语句
	//}
	//ch = getchar();
	//if (ch == 'Y')
	//	printf("确认成功");
	//else
	//	printf("确认失败");




	//getchar 每次只能读取一个字符  putchar
	
	//int ch;
	////EOF -文件结束标志 当getchar()读取失败时就会返回EOF----Ctrl+z
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}



	//int ch = 0;
	//ch = getchar();
	//putchar(ch);



	//int i = 1;
	//while (i <= 10)//while 后面千万记得不要加 ；号
	//{
	//	i++;//放在前面就又不一样了
	//	if (5 == i)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//	
	//}


	//int i = 1;
	//while (i <= 10)//while 后面千万记得不要加 ；号
	//{
	//	if (5 == i)
	//	{
	//		continue;//死循环  while 中 continue容易出问题 而for不会 多思考
	//		//continue 是跳过本次循环下面的代码 直接到循环判断部分 看是否进行下一次循环
	//	}
	//	printf("%d ", i);
	//	i++;
	//}



	//while 中break是永久终止循环 而switch中只终止单独一个case语句
	
	//int i = 1;
	//while (i <= 10)//while 后面千万记得不要加；
	//{
	//	if (5 == i)
	//	{
	//		break;//终止循环
	//	}
	//	printf("%d ", i);
	//		i++;
	//}

	//while循环
	//打印1-10
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("%d ", i);
	//	i++;
	//}






	//switch语句
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)//里面必须放整形表达式
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4://需不需要加break取决于所需要的代码逻辑
	//case 5:
	//	printf("工作日");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default://当输入额外的情况时
	//	printf("数据输入有误");
	//	break;

	//}

	//判断一个数是不是奇数

	//int num=0;
	//int i;
	//for (i = 0; i < 101; i++)
	//{
	//	if (1 == i % 2)
	//	{
	//		printf("%d ", i);
	//		num = num + 1;
	//	}
	//}
	//printf("奇数共: %d\n", num);
	
	//int num = 10;

	//if (5 == num)//建议写代码赋值的方式
	//	printf("111\n");
	//else
	//	printf("222\n");

	//代码风格很重要

	//int a = test();
	


	////悬空else
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//	else//else和离他最近的if-匹配  因此加大括号的作用就体现出来了
	//		printf("haha\n");
	////无打印结果



	//if else if else
	//int age=18;
	//if (age == 18)//大括号的作用 美观 不容易出错
	//{
	//	printf("牛哇！\n");
	//	printf("牛了个逼！\n");
	//}


	return 0;
}



