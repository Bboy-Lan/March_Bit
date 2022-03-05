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