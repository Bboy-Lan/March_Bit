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
