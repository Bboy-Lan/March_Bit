#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//ָ��-���ݺ�ƫ��

//�����ƫ�ƾ��� --��ַ����ļӼ�����
//�ڴ� ��Ϊ�ɶ���д��ִ�� ���տɶ���д

int main()
{
	int arr[10] = { 1,2,3,4,5 };

	int* p;//Ұָ��ָ���� û�н��г�ʼ����ָ��

	p = arr;//����arr ��������ʾ����������Ԫ�صĵ�ַ --���丳ֵ���� p
	//arr ֵ������ȷʵ��һ������ָ��
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}


//void change(int* i)
//{
//	*i = 10;
//}
//int main()
//{
//	int i = 5;
//	change(&i);
//	printf("%d\n", i);
//
//
//	return 0;
//}


//int main()
//{
//	//����n�Ľ׳�ֵ
//	int i,n;
//	int sum = 1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int* a, * b, * c;//��������ָ��
//	*p = 20;//��ӷ���--������
//	printf("%d\n", i);//ֱ�ӷ���
//	printf("%d\n", p);
//	printf("%d\n", &i);
//	printf("%d\n", &*p);//�� i�ȼ� ������д
//
//	return 0;
//}


//ĳ���뽫���е�һ����ֵ100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��ֵ��Ʊ�ӡ�Ҫ������40�ţ���ÿ��Ʊ������һ�š��ʣ��м��ֻ�����


//int main()
//{
//	int m10,m5,m2,m1;
//	int sum = 0;
//	for (m10 = 1; m10 <40 ; m10++)
//	{
//		for (m5 = 1; m5 < 40; m5++)
//		{
//			for (m2 = 1; m2 < 40; m2++)
//			{
//				for (m1 = 1; m1 < 40; m1++)
//				{
//					if ((m10 * 10 + m5 * 5 + m2 * 2 + m1 == 100) && (m10 + m5 + m2 + m1 == 40))
//					{
//						sum += 1;
//						
//					}
//				}
//
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i;
//	int j = 0;
//	char a[20];//��ʼ����
//	gets(a);
//	int sum = strlen(a);
//	char b[20];//��ת֮�������
//	b[sum] = '\0';
//
//	for (i = 0; i <(strlen(a)); i++)//��a����������ַ��������ӡ
//	{
//
//		b[sum - 1] = a[i];
//		sum--;
//	}
//
//	int result = strcmp(a, b);
//	if (result < 0)
//	{
//		printf("%d\n", -1);
//	}
//	else if (result > 0)
//	{
//		printf("%d\n", 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	return 0;
//}


//
//int main()
//{
//
//	return 0;
//}



//int main()
//{
//
//	int i = 5;
//	int j = 4;//�ϵ�����þ��� ���Ե�ʱ��۲����ݸ�ֱ�� ���ɫ���
//	int arr[5] = { 1,2,3,4,5 };
//	return 0;
//}