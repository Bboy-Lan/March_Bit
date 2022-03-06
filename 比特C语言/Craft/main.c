#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>





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
    int arr[1000] = {};


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