#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�Գ��� -��ת֮�󻹺���ǰ�������

int main()
{
	int a;
	int b=0;
	scanf("%d", &a);
	int c = a;
	while (a)
	{
		b = b * 10 + a % 10;//���˽������� *10�Ĳ���
		a /= 10;

	}
	if (c == b)//ע������ֵ���޸�����ʹ�õ�ʱ������
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}



int main()
{
	int i,total;
	for (i = 1, total = 0; i <= 100; i++);
 //�����������Ϸֺ� ������ѭ�����ǲ���ִ������Ĵ��� ֻ������һ�н���֮�� ��ʼ��һ�����
	{
		total += i;

	}
	printf("%d\n", total);//101
	return 0;
}



//������������ȼ� > ��ϵ����� > �߼������---�����߼������ȼ����

int main()
{
	int a;
	
	printf("%d\n", 5>3 && 8<4-!0);//0
	return 0;
}


int main()
{
	int a;
	scanf("%d", &a);//char ���͵�ʱ�� ��ò�Ҫ������ %d
	printf("%c\n", a);
	return 0;
}



int main()
{
	//�����Լ������ ++/--
	//ǰ�þ����Ȳ�����ֵ ���������ȸ�ֵ�����
	int i = -1;

	int k = ++i < -1;
	int j = i++ > -1;
	printf("%d %d %d", i, j,k);//3 1 3

	//��ֵ����� = ���ֻ�ܷű��� ���ܷű��ʽ a + 3 =10;�����ǲ��Ե�
	//int a = 10;
	//printf("%d ", a > 10 ? a : 10);
	return 0;
}


int main()
{
	//�κη�0��������ʾ�� 0��ʾ��
	//ѧϰ�߼���  !+�κ������߱��ʽ���õ��෴���
	int i = 5;
	int j = !!i;//���ҵ������� ���������������ܹ�������
	printf("%d\n", j);

	return 0;
}




//�ж������������Ƿ����

//���������ַ���
int main()
{
	float f = 234.56;
	if(234.56 -f > -0.001 && f - 234.56 < 0.0001)
		//��˼���Ƕ�ĺ��� ���߲�Ĳ���
		printf("f is equal to 234.26\n");
	else
		printf("f is not equal to 234.26\n");
	return 0;
}



int main()
{
	float f = 234.56;//���ޱƽ�

	if (f == 234.56)
	{
		printf("f is equal to 234.26\n");
	}
	else
		printf("f is not equal to 234.26\n");

	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	while (a != 0)
	{
			printf("%d ", a % 10);//��ӡβ��
			a = a / 10;
	}
	return 0;
}

int main()
{
 //˼ά̫�̶�����
	//���� 1234 ���4321
	int a;
	scanf("%d", &a);
	//1234 % 10--4
	//1234 / 10--123
	while (1)
	{
		if (a > 9)
		{
			printf("%d ", a % 10);//��ӡβ��
			a = a / 10;
		}
		else if (a < 9)//������λ�� ����ӡ�߳���Ȼ��
		{
			printf("%d ", a % 10);
			break;
		}
	}

	//printf("%d", 10 + 5 * 6 / 9 % 5);
	return 0;
}



int main()
{

	//scanf()ѭ����ȡ
	char i;
	while (scanf("%c", &i) != EOF)
	{
		if (i != '\0')
			printf("%c", i-32);
	}
	return 0;

}