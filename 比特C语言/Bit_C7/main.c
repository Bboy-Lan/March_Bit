#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


//��ӡ����--ʲô������
//���� ֻ�ܱ� 1 ������������
//
//�Ǿͽ� 2 ~ i-1 ����ȥ�Գ� i �����ܷ�����  �����ñ�������� ����


int main()
{
	printf("%d\n", 1 % 3);
}




if()
else if()  ֻ��ѡ��һ�� ��ס��!!!


int main()
{
	//��ӡ 1-100������3�ı�������

	int i;
	for (i = 3; i <= 100; i += 3)
	{
		printf("%d\n", i);
	}

}





int main()
{
	//��ӡ 9 * 9�˷���

	//1*1 
	//1*2 2*2
	//1*3 2*3 3*3
	//...
	//1*9 2*9 3*9 .... 9*9

	int i, j;

	for (i = 1; i < 10; i++)//��ӡ9�� -ѭ�� 9 ��
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");

	}

	return 0;
}









дһ����������Ϸ
 2. ִ�г���

void menu()//�˵�
{
	printf("####################\n");
	printf("##### 0. PLAY ######\n");
	printf("##### 1. EXIT ######\n");
	printf("####################\n");
}

void game()//��������Ϸ���߼�����
{
	// 1.��������� (1-100)
	int num1,num2;
	//��ֵΪ�ձ�ʾ�������������
	num1 = rand() % 100;//ģ��100 ����ֻ����100���ڵ��� �����ܳ���100

	// 2.������
	while (1)
	{
		scanf("%d", &num2);
		if (num1 > num2)
			printf("��С��\n");
		else if (num1 < num2)
			printf("�´���\n");
		else
		{
			printf("��ϲ��¶���\n");
			system("cls");
			break;
		}
		
	}

}
int main()
{
	int input = 0;
	//��ʱ����ı仯�����ֵ
	srand((unsigned int)time(NULL));
	//���������������ʱ����������ֻ��Ҫһ�β���Ƶ������ ���������ظ�������

	do
	{
		menu();//һ�������˵�
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("����� ��");
			game();
			break;
		default:
			printf("������������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}



int main()
{
	// дһ���ػ�����

	do
	{
		char input[20];
	again:

		printf("���Խ���1�����ڹػ������롰����������ȡ���� ");
		system("shutdown -s -t 60");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("�ػ�������ע�� \n");
			break;
		}
		else
			printf("�������\n");
			goto again;

	} while (1);
	return 0;
}