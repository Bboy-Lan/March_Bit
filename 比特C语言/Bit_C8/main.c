#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>//使用库函数 必须要引头文件
#include<string.h>


// 函数 -库函数/自定义函数
//函数可以嵌套调用 但不可以嵌套定义  因为无论是main还是其它函数都是并列的

//所以才会有 函数定义在main函数之外的说法



int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//为什么打印的是4321
	//printf函数的返回值是其在屏幕上打印的字符的个数
	//printf("%d", 43) 先打印43  两个字符 然后返回2
	//printf("%d", printf("%d", 43)) == printf("%d", 2)  先打印2 然后返回1
	//最后 printf("%d", 1)  这一步就直接打印 1


	//而 scanf() 返回值是其成功读到的有效字符的个数
	return 0;
}

//int main()
//{
//	//函数的链式访问-把一个函数的返回值直接作为另一个函数的参数
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	// 比如这里 printf()函数 直接将strlen返回值作为参数
//
//	char arr1[20] = "######";
//	char arr2[20] = "hello";
//
//
//	printf("%s\n",strcpy(arr1,arr2));//这里返回值就是arr1
//	return 0;
//
//}

//写一个函数 使得每调用一次这个函数 num 增加 1


//void ADD(int* a)
//{
//	*a += 1;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	//题目给定的意思就是 我的函数有能力改变 main 函数内部的值 即传址调用(也可以普通方法)
//	return 0;
//}






//写个函数 表示整形有序数组二分查找

//int distinguish(int k,int arr[],int sz)//可以改成 传 左右
//{
//	int left=0;
//	int right=sz-1;//函数这里并不是极简 还需要进一步简化
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//		return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k=7;//需要查找下标的数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int num = distinguish(k,arr,sz);//这里注意预先需要传入函数的值
//	if (num == 0)
//		printf("没找到");
//	else
//	{
//		printf("找到了: %d\n", num);
//	}
//	return 0;
//}



//写函数 -表示闰年

//int is_year(int i)
//{
//	return ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0));

//}
//int main()
//{
//	int i;
//	int ret = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_year(i) == 1)
//		{
//			printf("%d ", i);
//			ret++;
//		}
//	}
//	printf("\n%d", ret);
//	return 0;
//}




//int is_num(int a)//判断素数函数 试除法
//{
//	int j;
//	for (j = 2; j < sqrt(a); j++)
//	{
//		if(a % j ==0)
//			return 0;
//	}
//	return 1;
//}
//
////写一个函数表示素数
//int main()
//{
//	int i;
//	int ret = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		//判断是否为素数 一个函数-返回值
//		if(is_num(i) == 1)
//		{
//			printf("%d ", i);
//			ret++;
//		}
//	}
//	printf("\n%d", ret);
//	return 0;
//}


//形参在函数用完之后就会自动销毁

//void swap(int* x, int* y)//无返回值
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//
//}
////调试的时候 逐步调试 F10\F11 的使用
//int main()
//{
//	int a=10;
//	int b = 20;
//	printf("交换前：%d %d\n", a,b);
//
//	swap(&a,&b);
//	//实参 a,b传给形式参数 x y 形参将会是实参的一份临时拷贝
//	//且 改变形参的值 在函数内 是不会影响实参的
//	printf("交换后：%d %d\n", a,b);
//
//	return 0;
//}



//int get_max(int x, int y)//形参
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
//	int max = get_max(a, b);//实参
//	printf("%d\n", max);
//	return 0;
//}






/* memset example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


//memset()


//int main()
//{
//	char arr1[] = "hello_world";
//
//	memset(arr1, '4', 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcpy()

//int main()
//{
//	char arr1[] = "hello";
//	char arr2[]="########";
//
//	char * tet=strcpy(arr2,arr1);//返回值是 指向的内存空间
//	printf("%s\n", arr2);
//	printf("%s\n", tet);// 并且随后的结束标志 " / 0"也跟着copy过去了
//	
//	return 0;
//}


//1-100 之间所有3倍数的数
//int main()
//{
//	int i;
//	
//	for (i = 3; i < 101; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




   //打印 1000-2000的闰年

	//1 .能被4整除但不能被100整除
	//2 .不能被400整除

//int main()
//{

//	int i;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//
//			sum += 1;
//		}
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//写代码将三个整数数按从大到小输出。


//int main()
//{
//	int a, b, c;
//	int mid = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//规定最大的就是a>b>c 通过比较一层一层赋值
//
//	if (a < b)
//	{
//		mid = a;
//		a = b;
//		b = mid;
//	}
//	if (a < c)
//	{
//		mid = a;
//		a = c;
//		c = mid;
//	}
//	if (b < c)
//	{
//		mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d > %d > %d\n", a, b, c);
//
//	return 0;
//}


//1！+2！+3！+...+10！


//int main()
//{
// int sum = 1;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求 1/1 - 1/2 +1/3 -1/4+...-1/99 + 1/100

//int main()
//{
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//
//	for (i = 1; i < 101; i++)
//	{
//		sum += (sign)*(1.0 / i);
//		sign = -(sign);
//	}
//	printf("%f\n", sum);
//	return 0;
//}




//int main()
//{
//	int i,j;
//	double sum = 0.0;
//	for (i = 1,j = 2; i < 100,j<=100; i+=2,j+=2)
//	{
//		sum += ((1.0 / i) - (1.0 / j));
//	}
//	printf("%f\n", sum);
//	return 0;
//}





//二分查找 - 有序数组

//int main()
//{
//	int k = 7;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组长度
//
//	int left = 0;
//	int right = sz - 1;//左右下标
//	
//	while (right >= left)
//	{
//		int mid = ((left + right) / 2);
//		if (arr[mid] < k)//在k左边
//			left = mid + 1;
//		else if (arr[mid] > k)//在k右边
//			right = mid - 1;
//		else
//		{
//			printf("找到了 ：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到该数\n");
//
//	return 0;
//}







// 求某两个数的最大公约数 18  24
// 24 % 18 = 6
// 18 % 6  = 0 //说明 6是这两个数的最大公约数


//暴力求解
// 18 24 先判断出 两个数谁更大 然后 大的数除小的数 如果模不等于0则一直减 直至0 不断地试除


//int main()
//{
//	int a = 0;
//	int b=0;
//	scanf("%d%d", &a, &b);
//	int c = (a > b ? b : a);
//	while (1)
//	{
//		if (a % c == 0 && b % c == 0)//必须两个的模都满足
//		{
//			printf("%d\n", c);
//			break;
//		}
//		else
//			c--;
//	}
//	return 0;
//}




//辗转相除法求解

//int main()
//{
//	int a, b;
//	int c=0;
//	scanf("%d%d", &a, &b);
//
//	while (1)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//
//		if (a % b == 0)
//		{
//			printf("%d\n", b);
//			break;
//		}
//	}
//	return 0;
//}





//打印素数(100-200) -只能被1 或者自身整除的数 
//只需要在比它小的数里面找到能整除它的数就 ok  
//偶数不是素数 也就是质数 除2 外

//// 这个例子中涉及到了几个优化代码的操作 可以反复观摩思考
//
//int main()
//{
//	int i,j;
//	for (i = 101; i < 200; i+=2)//3.因为说过 偶数不会是素数 所以 100-200 之间我们只考虑奇数故j++改成j+=2
//	{
//		int sign = 1;
//		for (j = 2; j < sqrt(i); j++)// 1.遍历 2~99的数 挨个试除
//			//2 .sqrt函数 直接将运算量简化一大半
//		{
//			if (i % j == 0)
//			{
//				sign = -1;//不是
//				break;//发现不是就即时退出 --优化代码
//			}
//		}
//		if(sign == 1)//以后可以多一点这种简化写法
//			printf("%d ", i);
//
//
//	}
//	return 0;
//}




//猜数字游戏
// 基本游戏菜单
//生成一个随机数 0-100
//游戏执行


//// 游戏菜单
//void menu()
//{
//	printf("######################\n");
//	printf("#######1. PLAY #######\n");
//	printf("#######0. EXIT #######\n");
//	printf("######################\n");
//}
//
//
////游戏执行
//void game()
//{
//	//生成一个随机数
//	int num1;
//	int num2;
//	num1 = rand() % 100;// 模只能是100以内的数
//	
//	while (1)
//	{
//		printf("输入数字 ：");
//		scanf("%d", &num2);
//		if (num1 > num2)//猜小了
//			printf("猜小了\n");
//
//		else if (num1 < num2)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//时间戳  不要重复定义
//	int input;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("游戏结束\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入有误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}













//编写一个关机程序

//int main()
//{
//	char input[20];
//
//	system("shutdown -s -t 60");// 执行关机操作
//
//again:
//	printf("电脑即将60s内关机，输入“取消关机”解除 ：");
//
//	scanf("%s", &input);
//	
//	if (strcmp(input , "取消关机") == 0)// 相等
//	{
//		system("shutdown -a");//取消关机
//		printf("成功注销操作\n");
//	}
//	else
//	{
//		printf("指令无效\n");
//		goto again;
//	}
//
//	return 0;
//}