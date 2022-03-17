#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//gets---puts函数


int main()
{

	char arr[20];
	
	//gets(arr);//只能读取字符串 一次读取一行时使用 里面放字符数组数组名
	printf("%d\n", strlen(arr));

	//strcmp 判断两字符串是否相等 大于 1 相等返回0 反之-1

	printf("%d\n", (strcmp(gets(arr), "wangdao")));
	printf("%d\n", strcmp("how", "hello"));
	//两个字符比较长度是比较两个字符的ASCII码值 从第一个一直比较到最后


	char arr1[20]="bit";
	
	strcat(arr,arr1);//拼接两个数组
	printf("%s\n", arr);
	puts(arr);

	return 0;
}

int main()
{
	//修改数组中字符串的内容 把首字母变大写
	char arr[10] = "hello";
	arr[0] = arr[0] - 32;
	printf("%c\n", arr[0]);


	return 0;
}


//字符数组-传递不需要像整形数组一样传递长度

void print1(char arr[])
{
	int i = 0;//因为可以通过判断 \0 来进一步确定长度
	//但是必须保证不访问越界 也就是初始化值要大一点
	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
}

int main()
{
	char arr[10] = "hello";
	print1(arr);

	return 0;
}