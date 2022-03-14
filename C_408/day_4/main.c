#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//指针-传递和偏移

//数组的偏移就是 --地址层面的加减运算
//内存 分为可读可写可执行 掌握可读可写

int main()
{
	int arr[10] = { 1,2,3,4,5 };

	int* p;//野指针指的是 没有进行初始化的指针

	p = arr;//这里arr 数组名表示的是数组首元素的地址 --将其赋值给了 p
	//arr 值的类型确实是一个整形指针
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}


//void change(int* i)
//{
//	*i = 10;
//}
//int main()
//{
//	int i = 5;
//	change(&i);
//	printf("%d\n", i);
//
//
//	return 0;
//}


//int main()
//{
//	//计算n的阶乘值
//	int i,n;
//	int sum = 1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int* a, * b, * c;//连续定义指针
//	*p = 20;//间接访问--解引用
//	printf("%d\n", i);//直接访问
//	printf("%d\n", p);
//	printf("%d\n", &i);
//	printf("%d\n", &*p);//和 i等价 不这样写
//
//	return 0;
//}


//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？


//int main()
//{
//	int m10,m5,m2,m1;
//	int sum = 0;
//	for (m10 = 1; m10 <40 ; m10++)
//	{
//		for (m5 = 1; m5 < 40; m5++)
//		{
//			for (m2 = 1; m2 < 40; m2++)
//			{
//				for (m1 = 1; m1 < 40; m1++)
//				{
//					if ((m10 * 10 + m5 * 5 + m2 * 2 + m1 == 100) && (m10 + m5 + m2 + m1 == 40))
//					{
//						sum += 1;
//						
//					}
//				}
//
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i;
//	int j = 0;
//	char a[20];//初始数组
//	gets(a);
//	int sum = strlen(a);
//	char b[20];//逆转之后的数组
//	b[sum] = '\0';
//
//	for (i = 0; i <(strlen(a)); i++)//将a数组里面的字符串倒序打印
//	{
//
//		b[sum - 1] = a[i];
//		sum--;
//	}
//
//	int result = strcmp(a, b);
//	if (result < 0)
//	{
//		printf("%d\n", -1);
//	}
//	else if (result > 0)
//	{
//		printf("%d\n", 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	return 0;
//}


//
//int main()
//{
//
//	return 0;
//}



//int main()
//{
//
//	int i = 5;
//	int j = 4;//断点的作用就是 调试的时候观察数据更直观 会红色标记
//	int arr[5] = { 1,2,3,4,5 };
//	return 0;
//}