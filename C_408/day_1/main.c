#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//printf 基本格式  %d 前面加上 +/- 数字排版更好看
	printf("name=%s age=%-3d sex=%s num=%.2f\n", "撒给宝宝", 21, "男 ", 1236.9999);
	return 0;
}


//多种数据类型 混合输入

int main()
{
	int i;
	char j;
	float k;

	int ret = scanf("%d %c%f", &i, &j, &k);//%c 不会跳过空格和\n 
	//混合输入时遇见%c 需要加上一个空格
	printf("i=%d j=%c k=%f", i, j, k);
	
	return 0;
}



//字母转换 循环读取字符

int main()
{
	char a;
	while (scanf("%c", &a) != EOF)//判断是否取到字符 在缓冲区里面读取
	{
		if (a != '\0')
			printf("%c", a - 32);
		else
			printf("\n");
	}
}


 //EOF---值是 -1
//scanf()循环读取

int main()
{
	int i;
	while (rewind(stdin),(scanf("%d", &i)) != EOF)//当你的	输入用字符时 会死循环打印
	{
		printf("i =%d ", i);
	}
	//scanf()返回值？ 是成功赋值后的值的数量

	return 0;
}


//数据类型 运算符及其表达式
#define PI 3//符号常量

//scanf() %d %f %s 这三种情况里面 空格 以及换行符什么的都会被忽略 
//而 %c 中它不会帮你自动清空输入缓冲区


int main()
{
	int a,b;
	scanf("%d", &a);
	printf("b = %d\n", a);


	scanf("%d", &b);
	printf("b = %c\n", b);
	//scanf("%c", &b);
	//printf("c = %c\n", b);

	return 0;
}




int main()
{
	int i = 5;
	float j = (float)i / 2;//强制类型转换
	printf("%f\n", j);

	return 0;
}


int main()
{
	//PI = 10;
	//printf("%d\n", PI);
	char input;//字母大小写转换

	scanf("%c", &input);
	if (input >= 97 && input <= 127)
	{
		printf("%c-%c: \n", input,input - 32);
		printf("ASCII:%d-:%d\n", input, input - 32);

	}
	else if ((input >= 65 && input <= 90))
	{
		printf("%c-%c: \n", input, input + 32);
		printf("ASCII:%d-:%d\n", input, input + 32);

	}
	else
		printf("输入字符不符\n");
	return 0;
}