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
