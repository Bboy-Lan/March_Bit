#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


int main()
{
	int i = 0;
	printf("�����������¼: ");
	do
	{
		char input[20];
		scanf("%s",&input);
		if (strcmp(input , "wanglan") == 0)//�Ƚ��ַ�������� ����ֵΪ0��Ϊ��
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�������\n");
		i++;

	} while (i<3);
	if(3 == i)
		printf("����������������\n");
}





// for ѭ�� --��ʼ�� �ж� ����

//int main()
//{
//	// 1!+2!+3!+...+n!
//	int j,i;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//4
//
//
//	for (j = 1; j <= 3; j++)
//	{
//		ret = 1;//���ﷸ�Ĵ����֮ǰһ�� ����ʹ��ĳ������ʱ��û�۲����ֵ�Ƿ�����ɾ�
//
//		for (i = 1; i <= j; i++)//����ĳ�����Ľ׳�
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d ", sum);
//
//	return 0;
//}





//int main()
//{
//	// do while ѭ��
//	int i=1;
//	do// һ��ʼ��ִ��
//	{
//		if (5 == i)
//			continue;//��ѭ�� 
//		printf("%d ", i);
//		i++;
//	} while (i<=10);//���ж�
//
//
//
//
//
//	//����д��
//	
//	//int x, y;
//	//for (x = 0, y = 0; x < 10 && y < 10; x++, y++)
//	//{
//	//	printf("hehe ");
//	//}
//
//
//
//	//ʡ�Գ�ʼ������
//
//	//int i = 0;
//	//int j = 0;
//
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("Bit ");
//	//	}
//	//}
//
//
//	//ʡ�Ե�������
//
//	//int i;
//	//for (i=0;;i--)//���ʡ��-���������Ѿ�����Ҫ��
//	////�жϲ���ʡ���˾ͱ�ʾ�жϺ�Ϊ�� -�������ֿ���ʡ�� ������ʡ��
//	//{
//	//	printf("11 ");
// //   }
//
//
//	//int arr[10];
//	//int i = 0;
//	//for (i = 0; i < 10; i++)//�ȽϽ����д���� ��������ҿ������д��
//	//{
//	//	scanf("%d", &arr[i]);//������������ʹ��
//	//	printf("%d ", arr[i]);
//	//}
//
//
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	if (i = 5)//��������ѭ���ڲ��ı�ѭ������ -�������� ���Ǹ�ֵ=�����== һ��Ҫ�ֿ�
//	//		printf("%d ", i);
//
//	//}
//
//
//
//	//int i = 0;
//	//for (i = 1 ; i <= 10 ; i++)
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);
//
//	//}
//
//	return 0;
//}