#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// C语言中规定 变量需要创建在当前代码块最前面



int main()
{
	int ch = 0;
	printf("输入密码: ");

	char password[20] = { 0 };
	scanf("%s", password);//这里不需要使用取地址操作符
	
	//gets(password);gets()可以用来读取空格这些
	//printf("%s", password);


	// scanf(不能读取字符串之间的空格)
	// scanf()  getchar()----->输入缓冲区<-----键盘
	//因此当需要用getchar取字符的时候都需要将缓冲区里面清空
	
	printf("确认密码: ");
	//getchar();//只能取一个

	while (getchar() != '\n')
	{
		;//将缓冲区清零 取了字符后不需要做什么 可以任意放一个空语句
	}
	ch = getchar();
	if (ch == 'Y')
		printf("确认成功");
	else
		printf("确认失败");

	return 0;
}




int main()
{
	// 1!+2!+3!+...+n!
	int j, i;
	int ret = 1;
	int sum = 0;
	//scanf("%d", &n);//4


	for (j = 1; j <= 3; j++)
	{
		ret = 1;//这里犯的错误和之前一样 二次使用某个变量时并没观察残余值是否清除干净

		for (i = 1; i <= j; i++)//计算某个数的阶乘
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d ", sum);

	return 0;
}


//输入：
//5
//1 1 2 1 3
//1
//输出：
//3

int main()
{
	int n;
	int x;
	int i = 0;
	int j = 0;
	int arr[100];
	int sum = 0;

	scanf("%d", &n);//输入一个数n

	//while (n > 0)//第二行输入n个空格隔开的数
	//{
	//	scanf("%d ", &arr[n - 1]);
	//	n--;
	//}

	for (j = 0; j < n; j++)
	{
		scanf("%d ", &arr[j]);
	}
	scanf("%d", &x);


	for (i = 0; i < n; i++)//循环n次
	{
		if (arr[i] == x)//判断有是否相同的数
		{
			sum = sum + 1;
		}
	}

	printf("%d\n", sum);//为啥最后输出是0 
	return 0;
}



//有序数组中查找某一个数-----> 二分（拆半）查找


int main()
{
	int i, k = 6;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//遍历查找
	int sz = sizeof(arr) / sizeof(arr[0]);//一种数组元素表示方法

	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])//在这里找到了 跳出循环
			break;
	}
	if (i == sz)
		printf("找不到\n");
	else
		printf("找到了:%d\n", i);
	return 0;
}


            //二分查找

int main()
{
	int k = 6;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	//int mid = sz / 2;  这一步不需要
	int left = 0;
	int right = sz - 1;//不是 sz


	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了: % d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("找不到");

	return 0;

}

               //写一个猜数字游戏

#include<windows.h>
#include<time.h>
#include<stdlib.h>


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
	int num1, num2;
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
			game();//游戏函数
			break;
		default:
			printf("输入有误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}