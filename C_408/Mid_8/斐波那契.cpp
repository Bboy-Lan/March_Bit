#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//�ݹ�
// 0 1 1 2 3 5
//ÿһ����������ǰ���������������
//f(n) = f(n -1) + f(n-2)

int Fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int num;
	while (scanf("%d", &num) != EOF)
	{
		printf("Fib(%d) = %d\n",num,Fib(num));
	}


	return 0;
}