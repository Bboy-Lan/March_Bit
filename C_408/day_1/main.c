#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//printf ������ʽ  %d ǰ����� +/- �����Ű���ÿ�
	printf("name=%s age=%-3d sex=%s num=%.2f\n", "��������", 21, "�� ", 1236.9999);
	return 0;
}


//������������ �������

int main()
{
	int i;
	char j;
	float k;

	int ret = scanf("%d %c%f", &i, &j, &k);//%c ���������ո��\n 
	//�������ʱ����%c ��Ҫ����һ���ո�
	printf("i=%d j=%c k=%f", i, j, k);
	
	return 0;
}



//��ĸת�� ѭ����ȡ�ַ�

int main()
{
	char a;
	while (scanf("%c", &a) != EOF)//�ж��Ƿ�ȡ���ַ� �ڻ����������ȡ
	{
		if (a != '\0')
			printf("%c", a - 32);
		else
			printf("\n");
	}
}


 //EOF---ֵ�� -1
//scanf()ѭ����ȡ

int main()
{
	int i;
	while (rewind(stdin),(scanf("%d", &i)) != EOF)//�����	�������ַ�ʱ ����ѭ����ӡ
	{
		printf("i =%d ", i);
	}
	//scanf()����ֵ�� �ǳɹ���ֵ���ֵ������

	return 0;
}


//�������� �����������ʽ
#define PI 3//���ų���

//scanf() %d %f %s ������������� �ո� �Լ����з�ʲô�Ķ��ᱻ���� 
//�� %c ������������Զ�������뻺����


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
	float j = (float)i / 2;//ǿ������ת��
	printf("%f\n", j);

	return 0;
}


int main()
{
	//PI = 10;
	//printf("%d\n", PI);
	char input;//��ĸ��Сдת��

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
		printf("�����ַ�����\n");
	return 0;
}