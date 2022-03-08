#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


//打印素数--什么是素数
//质数 只能被 1 和其自身整除
//
//那就将 2 ~ i-1 的数去试除 i 看其能否被整除  不能拿比他大的数 哈哈


int main()
{
	printf("%d\n", 1 % 3);
}




if()
else if()  只能选择一个 记住了!!!


int main()
{
	//打印 1-100间所有3的倍数的数

	int i;
	for (i = 3; i <= 100; i += 3)
	{
		printf("%d\n", i);
	}

}





int main()
{
	//打印 9 * 9乘法表

	//1*1 
	//1*2 2*2
	//1*3 2*3 3*3
	//...
	//1*9 2*9 3*9 .... 9*9

	int i, j;

	for (i = 1; i < 10; i++)//打印9行 -循环 9 次
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");

	}

	return 0;
}









写一个猜数字游戏
 2. 执行程序

void menu()//菜单
{
	printf("####################\n");
	printf("##### 0. PLAY ######\n");
	printf("##### 1. EXIT ######\n");
	printf("####################\n");
}

void game()//猜数字游戏的逻辑函数
{
	// 1.生成随机数 (1-100)
	int num1,num2;
	//传值为空表示不想用这个变量
	num1 = rand() % 100;//模上100 余数只能是100以内的数 不可能超过100

	// 2.猜数字
	while (1)
	{
		scanf("%d", &num2);
		if (num1 > num2)
			printf("猜小了\n");
		else if (num1 < num2)
			printf("猜大了\n");
		else
		{
			printf("恭喜你猜对了\n");
			system("cls");
			break;
		}
		
	}

}
int main()
{
	int input = 0;
	//用时间戳的变化做随机值
	srand((unsigned int)time(NULL));
	//随机数的生成起点的时候整个程序只需要一次不用频繁生成 否则会出现重复的问题

	do
	{
		menu();//一个基本菜单
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("随机数 ：");
			game();
			break;
		default:
			printf("输入有误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}



int main()
{
	// 写一个关机程序

	do
	{
		char input[20];
	again:

		printf("电脑将在1分钟内关机，输入“我是猪”即可取消： ");
		system("shutdown -s -t 60");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			printf("关机操作已注销 \n");
			break;
		}
		else
			printf("输入错误\n");
			goto again;

	} while (1);
	return 0;
}