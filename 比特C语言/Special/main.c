#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// C�����й涨 ������Ҫ�����ڵ�ǰ�������ǰ��



int main()
{
	int ch = 0;
	printf("��������: ");

	char password[20] = { 0 };
	scanf("%s", password);//���ﲻ��Ҫʹ��ȡ��ַ������
	
	//gets(password);gets()����������ȡ�ո���Щ
	//printf("%s", password);


	// scanf(���ܶ�ȡ�ַ���֮��Ŀո�)
	// scanf()  getchar()----->���뻺����<-----����
	//��˵���Ҫ��getcharȡ�ַ���ʱ����Ҫ���������������
	
	printf("ȷ������: ");
	//getchar();//ֻ��ȡһ��

	while (getchar() != '\n')
	{
		;//������������ ȡ���ַ�����Ҫ��ʲô ���������һ�������
	}
	ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("ȷ��ʧ��");

	return 0;
}




int main()
{
	// 1!+2!+3!+...+n!
	int j, i;
	int ret = 1;
	int sum = 0;
	//scanf("%d", &n);//4


	for (j = 1; j <= 3; j++)
	{
		ret = 1;//���ﷸ�Ĵ����֮ǰһ�� ����ʹ��ĳ������ʱ��û�۲����ֵ�Ƿ�����ɾ�

		for (i = 1; i <= j; i++)//����ĳ�����Ľ׳�
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d ", sum);

	return 0;
}


//���룺
//5
//1 1 2 1 3
//1
//�����
//3

int main()
{
	int n;
	int x;
	int i = 0;
	int j = 0;
	int arr[100];
	int sum = 0;

	scanf("%d", &n);//����һ����n

	//while (n > 0)//�ڶ�������n���ո��������
	//{
	//	scanf("%d ", &arr[n - 1]);
	//	n--;
	//}

	for (j = 0; j < n; j++)
	{
		scanf("%d ", &arr[j]);
	}
	scanf("%d", &x);


	for (i = 0; i < n; i++)//ѭ��n��
	{
		if (arr[i] == x)//�ж����Ƿ���ͬ����
		{
			sum = sum + 1;
		}
	}

	printf("%d\n", sum);//Ϊɶ��������0 
	return 0;
}



//���������в���ĳһ����-----> ���֣���룩����


int main()
{
	int i, k = 6;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//��������
	int sz = sizeof(arr) / sizeof(arr[0]);//һ������Ԫ�ر�ʾ����

	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])//�������ҵ��� ����ѭ��
			break;
	}
	if (i == sz)
		printf("�Ҳ���\n");
	else
		printf("�ҵ���:%d\n", i);
	return 0;
}


            //���ֲ���

int main()
{
	int k = 6;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	//int mid = sz / 2;  ��һ������Ҫ
	int left = 0;
	int right = sz - 1;//���� sz


	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���: % d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("�Ҳ���");

	return 0;

}

               //дһ����������Ϸ

#include<windows.h>
#include<time.h>
#include<stdlib.h>


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
	int num1, num2;
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
			game();//��Ϸ����
			break;
		default:
			printf("������������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}