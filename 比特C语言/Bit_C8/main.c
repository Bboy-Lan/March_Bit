#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>


//1-100 ֮������3��������
int main()
{
	int i;
	
	for (i = 3; i < 101; i += 3)
	{
		printf("%d ", i);
	}
	return 0;
}







   //��ӡ 1000-2000������

	//1 .�ܱ�4���������ܱ�100����
	//2 .���ܱ�400����

//int main()
//{

//	int i;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//
//			sum += 1;
//		}
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//д���뽫�������������Ӵ�С�����


//int main()
//{
//	int a, b, c;
//	int mid = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�涨���ľ���a>b>c ͨ���Ƚ�һ��һ�㸳ֵ
//
//	if (a < b)
//	{
//		mid = a;
//		a = b;
//		b = mid;
//	}
//	if (a < c)
//	{
//		mid = a;
//		a = c;
//		c = mid;
//	}
//	if (b < c)
//	{
//		mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d > %d > %d\n", a, b, c);
//
//	return 0;
//}


//1��+2��+3��+...+10��


//int main()
//{
// int sum = 1;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//�� 1/1 - 1/2 +1/3 -1/4+...-1/99 + 1/100

//int main()
//{
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//
//	for (i = 1; i < 101; i++)
//	{
//		sum += (sign)*(1.0 / i);
//		sign = -(sign);
//	}
//	printf("%f\n", sum);
//	return 0;
//}




//int main()
//{
//	int i,j;
//	double sum = 0.0;
//	for (i = 1,j = 2; i < 100,j<=100; i+=2,j+=2)
//	{
//		sum += ((1.0 / i) - (1.0 / j));
//	}
//	printf("%f\n", sum);
//	return 0;
//}





//���ֲ��� - ��������

//int main()
//{
//	int k = 7;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//���鳤��
//
//	int left = 0;
//	int right = sz - 1;//�����±�
//	
//	while (right >= left)
//	{
//		int mid = ((left + right) / 2);
//		if (arr[mid] < k)//��k���
//			left = mid + 1;
//		else if (arr[mid] > k)//��k�ұ�
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��� ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�������\n");
//
//	return 0;
//}







// ��ĳ�����������Լ�� 18  24
// 24 % 18 = 6
// 18 % 6  = 0 //˵�� 6���������������Լ��


//�������
// 18 24 ���жϳ� ������˭���� Ȼ�� �������С���� ���ģ������0��һֱ�� ֱ��0 ���ϵ��Գ�


//int main()
//{
//	int a = 0;
//	int b=0;
//	scanf("%d%d", &a, &b);
//	int c = (a > b ? b : a);
//	while (1)
//	{
//		if (a % c == 0 && b % c == 0)//����������ģ������
//		{
//			printf("%d\n", c);
//			break;
//		}
//		else
//			c--;
//	}
//	return 0;
//}




//շת��������

//int main()
//{
//	int a, b;
//	int c=0;
//	scanf("%d%d", &a, &b);
//
//	while (1)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//
//		if (a % b == 0)
//		{
//			printf("%d\n", b);
//			break;
//		}
//	}
//	return 0;
//}





//��ӡ����(100-200) -ֻ�ܱ�1 ���������������� 
//ֻ��Ҫ�ڱ���С���������ҵ��������������� ok  
//ż���������� Ҳ�������� ��2 ��

//// ����������漰���˼����Ż�����Ĳ��� ���Է�����Ħ˼��
//
//int main()
//{
//	int i,j;
//	for (i = 101; i < 200; i+=2)//3.��Ϊ˵�� ż������������ ���� 100-200 ֮������ֻ����������j++�ĳ�j+=2
//	{
//		int sign = 1;
//		for (j = 2; j < sqrt(i); j++)// 1.���� 2~99���� �����Գ�
//			//2 .sqrt���� ֱ�ӽ���������һ���
//		{
//			if (i % j == 0)
//			{
//				sign = -1;//����
//				break;//���ֲ��Ǿͼ�ʱ�˳� --�Ż�����
//			}
//		}
//		if(sign == 1)//�Ժ���Զ�һ�����ּ�д��
//			printf("%d ", i);
//
//
//	}
//	return 0;
//}




//��������Ϸ
// ������Ϸ�˵�
//����һ������� 0-100
//��Ϸִ��


//// ��Ϸ�˵�
//void menu()
//{
//	printf("######################\n");
//	printf("#######1. PLAY #######\n");
//	printf("#######0. EXIT #######\n");
//	printf("######################\n");
//}
//
//
////��Ϸִ��
//void game()
//{
//	//����һ�������
//	int num1;
//	int num2;
//	num1 = rand() % 100;// ģֻ����100���ڵ���
//	
//	while (1)
//	{
//		printf("�������� ��");
//		scanf("%d", &num2);
//		if (num1 > num2)//��С��
//			printf("��С��\n");
//
//		else if (num1 < num2)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//ʱ���  ��Ҫ�ظ�����
//	int input;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}













//��дһ���ػ�����

//int main()
//{
//	char input[20];
//
//	system("shutdown -s -t 60");// ִ�йػ�����
//
//again:
//	printf("���Լ���60s�ڹػ������롰ȡ���ػ������ ��");
//
//	scanf("%s", &input);
//	
//	if (strcmp(input , "ȡ���ػ�") == 0)// ���
//	{
//		system("shutdown -a");//ȡ���ػ�
//		printf("�ɹ�ע������\n");
//	}
//	else
//	{
//		printf("ָ����Ч\n");
//		goto again;
//	}
//
//	return 0;
//}