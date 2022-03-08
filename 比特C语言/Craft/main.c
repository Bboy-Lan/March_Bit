#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


	//求10 个整数中最大值
	// 写三个整数 将其按从 大到小 输出
int main()
{
	int a, b, c;
	//规定最大的数是a 
	scanf("%d%d%d", &a, &b, &c);
	// 比较 将最大的值给a
	int tmp = 0;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d>%d>%d\n", a, b, c);//打印

	return 0;
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



int main()
{
    //goto 语句一般不怎么使用 但是在需要跳出多层嵌套循环的时候很有用

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





//编写代码 演示多个字符从两端点移动，向中间汇聚

int main()
{
    char arr1[20] = { "##################" };
    char arr2[20] = { "-> hello__world <-" };

    //先求出字符串的长度

    int sz = strlen(arr1);
    int left = 0;
    int right = sz-1;//记得减1 啊 数组时刻记住！！！

    while (left <= right)
    {
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        left++;
        right--;

        printf("%s\n", arr1);
        Sleep(500);
        system("cls");

    }

    printf("%s\n", arr1);

    return 0;
}








// 1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

int main()
{
   
    int i, j;
    double sum = 0.0;
    for (i = 2, j = 1; i <= 100 && j <= 99; i += 2, j += 2)
    {
        sum += 1.0 / j - 1.0 / i;
    }
    printf("%f", sum);


    return 0;
}

int  main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("%lf\n", sum);
    return 0;
}



//计算 n的阶乘
//1!+2!+...+10!






int main()
{
    // 1到 100 的所有整数中出现多少个数字9
    int i;
    int sum = 0;
    for (i = 0; i < 101; i++)
    {
        if (i / 10 == 9 || i % 10 == 9)
        {
            sum = sum + 1;
            printf("%d\n", i);
        }

    }
    printf("%d\n", sum);
    return 0;

}

int main()
{
    //利用while或者for循环计算n！的值。
    int i = 0;
    int n;
    scanf("%d", &n);
    int end = n;

    for (i = 1; i < n; i++)
    {

        //n！＝1*2*3…*n
        end = end * (n - i);

    }
    printf("%d\n", end);

    return 0;
}



int main()
{
    int n;
    scanf("%d", &n);
    //输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值；


    //对称数应该怎样判定?
    int arr[1000];


    //例如 12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no
    return 0;
}



int main()
{
    int i;
    char j;
    float k;
    scanf("%d %c %f", &i, &j, &k);
    //读取一个整型数，字符，浮点数，分别到变量i，j，k中


    //将i，j，k直接相加并输出，小数点后保留两位小数，不考虑输入的浮点数的小数部分超过了两位
    printf("%.2f", i + j + k);

    return 0;
}


// 这里自己注意 写连续不等式必须借助  &&-逻辑与
int main()
{
    int sort;
    scanf("%d", &sort);
    if (90 < sort && sort <= 100)
        printf("A\n");
    else if (80 <= sort && sort < 90)
        printf("B\n");
    else if (70 <= sort && sort < 80)
        printf("C\n");
    else if (60 <= sort && sort < 70)
        printf("D\n");
    else if (0 <= sort && sort < 60)
        printf("E\n");
    else
        printf("F\n");

    return 0;
}




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





int main()
{
    printf("printf(\"Hello world!\\n\");\n");
    printf("cout << \"Hello world!\" << endl;");

    return 0;
}



int main()
{
    int x;
    scanf("%d\n", &x);
    if (x < 0)
        printf("1");
    else if (x == 0)
        printf("0");
    else
        printf("-1");
    return 0;
}



int main()
{
    //整数能否被 5整除  % 余数等于0
    int M;
    scanf("%d\n", &M);
    if (M % 5 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}





int Com(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int com = Com(x, y);
	printf("较大的数: %d\n", com);
}