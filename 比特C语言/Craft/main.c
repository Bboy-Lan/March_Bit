#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


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
    int arr[] = { 0 };
    int sum = 0;

    scanf("%d", &n);//输入一个数n

    while (n > 0)//第二行输入n个空格隔开的数
    {
        scanf("%d ", &arr[n - 1]);
        n--;
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