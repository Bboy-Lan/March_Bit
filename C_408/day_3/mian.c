#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//���� -�ں�����Ҳ�ɶ���д
//����ʱ��Ԫ�ظ������ݲ���ȥ

//int main()
//{
//
//	char a[20],b[20];
//	scanf("%s %s", a, b);//������scanfʱ����ȡ��ַ
//	printf("%s------%s\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int i;
//	char c[5] = { 'h','e','l','l','o' };
//	//�����ַ�����ʱ���С���д��һ�� ��Ȼ�Ų���'\0' ��������� ���ַ������С�ȿ������ַ���������+1
//
//	char c1[10] = "hello";
//	for (i = 0; i < 10; i++)
//	{
//		if (c[i] == '\0')
//			break;
//		printf("%c", c[i]);
//
//	}
//	printf("\n%s\n", c1);
//
//	return 0;
//}


void print(int arr[],int ret)//��˴���������ֵ��ʱ ��Ҫ�ٽ��䳤�ȴ��ݹ�ȥ
{
	int i;
	//��ӡ���ݹ�������ĸ���Ԫ��
	for (i = 0; i <ret ; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	arr[3] = 11;//-�ں�����Ҳ�ɶ���д
}

//
//int main()
//{
//	//һά����
//	int i = 12;
//	int arr[5] = {1,2,3,4,5};//���鶨����Բ���ʼ��
//	int ret = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,ret);
//	printf("%d\n", arr[3]);
//	int j = 20;
//
//	//arr[5]=20;
//	//arr[6] = 21;
//	//arr[7] = 22;//����Խ��-���ʳ���������ʵ�ʶ����С ���������ֵ�ĸı�
//	//arr[8] = 23;
//
//	return 0;
//}



//int main()
//{
//
//	int i;
//	char j;
//	float k;
//
//	int ret = scanf("%d %c%f", &i, &j, &k);//%c ���������ո��\n 
//	//�������ʱ����%c ��Ҫ����һ���ո�
//	printf("i=%d j=%c k=%f", i, j, k);
//	
//	return 0;
//
//}