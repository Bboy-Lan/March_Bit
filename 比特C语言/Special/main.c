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



//求两个数最大公约数

int main()
{
	//可以整除这几个数中的最大的数 如18和24的公约数 2，3，6三个，其中以6为最大，6就是18和24的最大公约数

	//暴力求解 
	int a, b, i;
	scanf("%d%d", &a, &b);
	int m = (a > b ? b : a);

	while (1)
	{
		if (a % m == 0 && b % m == 0)
		{
			printf("%d\n", m);
			break;
		}
		m--;
	}
	return 0;
}


//辗转相除法求最大公约数

int main()
{
	int m, a, b;
	scanf("%d%d", &a, &b);

	while (m = a % b)
	{
		a = b;
		b = m;

	}
	printf("%d\n", b);
	return 0;
}



//打印素数--什么是素数
//质数 只能被 1 和其自身整除

//那就将 2 ~ i-1 的数去试除 i 看其能否被整除  不能拿比他大的数 哈哈

// 如果 有 m =a*b  a b 之间至少一个数 <= 开平方m  sqrt(m)

//偶数不可能是素数 除了2 

int main()
{
	int i, j;
	for (i = 101; i <= 200; i+=2)//写成奇数 3
	{
		int ret = 1;//位置不要放错了 在外面就是另一个结果
		for (j = 2; j <= i - 1; j++)//试除  这里i-1 可以换做 sqrt(i) 1
		{
			if (i % j == 0)//说明能被整除
			{
				ret = 0;
				break;//再次优化 2
			}
		}
		if (ret == 1)
			printf("%d ", i);
	}
	return 0;
}


//写个函数 表示整形有序数组二分查找

int distinguish(int k,int arr[],int sz)//可以改成 传 左右
{
	int left=0;
	int right=sz-1;//函数这里并不是极简 还需要进一步简化

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
			return mid;
	}
	if (left > right)
		return 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k=7;//需要查找下标的数
	int sz = sizeof(arr) / sizeof(arr[0]);

	int num = distinguish(k,arr,sz);//这里注意预先需要传入函数的值
	if (num == 0)
		printf("没找到");
	else
	{
		printf("找到了: %d\n", num);
	}
	return 0;
}


//编写函数 不允许创建临时变量 求字符串长度

int my_strlen(char* s)//首地址传过来
{

	if (*s != '\0')//h e l l o
	{
		return 1 + my_strlen(s + 1);//数组中地址是顺序排列的
	}
	else
		return 0;

}
int main()
{

	char arr[] = "hello";
	int num = my_strlen(arr);
	printf("%d", num);
	return 0;
}