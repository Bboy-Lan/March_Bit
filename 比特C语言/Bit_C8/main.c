#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>//ʹ�ÿ⺯�� ����Ҫ��ͷ�ļ�
#include<string.h>


// ���� -�⺯��/�Զ��庯��
//��������Ƕ�׵��� ��������Ƕ�׶���  ��Ϊ������main���������������ǲ��е�

//���ԲŻ��� ����������main����֮���˵��



int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//Ϊʲô��ӡ����4321
	//printf�����ķ���ֵ��������Ļ�ϴ�ӡ���ַ��ĸ���
	//printf("%d", 43) �ȴ�ӡ43  �����ַ� Ȼ�󷵻�2
	//printf("%d", printf("%d", 43)) == printf("%d", 2)  �ȴ�ӡ2 Ȼ�󷵻�1
	//��� printf("%d", 1)  ��һ����ֱ�Ӵ�ӡ 1


	//�� scanf() ����ֵ����ɹ���������Ч�ַ��ĸ���
	return 0;
}

//int main()
//{
//	//��������ʽ����-��һ�������ķ���ֱֵ����Ϊ��һ�������Ĳ���
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	// �������� printf()���� ֱ�ӽ�strlen����ֵ��Ϊ����
//
//	char arr1[20] = "######";
//	char arr2[20] = "hello";
//
//
//	printf("%s\n",strcpy(arr1,arr2));//���ﷵ��ֵ����arr1
//	return 0;
//
//}

//дһ������ ʹ��ÿ����һ��������� num ���� 1


//void ADD(int* a)
//{
//	*a += 1;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	//��Ŀ��������˼���� �ҵĺ����������ı� main �����ڲ���ֵ ����ַ����(Ҳ������ͨ����)
//	return 0;
//}






//д������ ��ʾ��������������ֲ���

//int distinguish(int k,int arr[],int sz)//���Ըĳ� �� ����
//{
//	int left=0;
//	int right=sz-1;//�������ﲢ���Ǽ��� ����Ҫ��һ����
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//		return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k=7;//��Ҫ�����±����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int num = distinguish(k,arr,sz);//����ע��Ԥ����Ҫ���뺯����ֵ
//	if (num == 0)
//		printf("û�ҵ�");
//	else
//	{
//		printf("�ҵ���: %d\n", num);
//	}
//	return 0;
//}



//д���� -��ʾ����

//int is_year(int i)
//{
//	return ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0));

//}
//int main()
//{
//	int i;
//	int ret = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_year(i) == 1)
//		{
//			printf("%d ", i);
//			ret++;
//		}
//	}
//	printf("\n%d", ret);
//	return 0;
//}




//int is_num(int a)//�ж��������� �Գ���
//{
//	int j;
//	for (j = 2; j < sqrt(a); j++)
//	{
//		if(a % j ==0)
//			return 0;
//	}
//	return 1;
//}
//
////дһ��������ʾ����
//int main()
//{
//	int i;
//	int ret = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		//�ж��Ƿ�Ϊ���� һ������-����ֵ
//		if(is_num(i) == 1)
//		{
//			printf("%d ", i);
//			ret++;
//		}
//	}
//	printf("\n%d", ret);
//	return 0;
//}


//�β��ں�������֮��ͻ��Զ�����

//void swap(int* x, int* y)//�޷���ֵ
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//
//}
////���Ե�ʱ�� �𲽵��� F10\F11 ��ʹ��
//int main()
//{
//	int a=10;
//	int b = 20;
//	printf("����ǰ��%d %d\n", a,b);
//
//	swap(&a,&b);
//	//ʵ�� a,b������ʽ���� x y �βν�����ʵ�ε�һ����ʱ����
//	//�� �ı��βε�ֵ �ں����� �ǲ���Ӱ��ʵ�ε�
//	printf("������%d %d\n", a,b);
//
//	return 0;
//}



//int get_max(int x, int y)//�β�
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
//	int max = get_max(a, b);//ʵ��
//	printf("%d\n", max);
//	return 0;
//}






/* memset example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


//memset()


//int main()
//{
//	char arr1[] = "hello_world";
//
//	memset(arr1, '4', 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcpy()

//int main()
//{
//	char arr1[] = "hello";
//	char arr2[]="########";
//
//	char * tet=strcpy(arr2,arr1);//����ֵ�� ָ����ڴ�ռ�
//	printf("%s\n", arr2);
//	printf("%s\n", tet);// �������Ľ�����־ " / 0"Ҳ����copy��ȥ��
//	
//	return 0;
//}


//1-100 ֮������3��������
//int main()
//{
//	int i;
//	
//	for (i = 3; i < 101; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




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