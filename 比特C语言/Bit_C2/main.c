#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������

//��λ������(������λ)
int main()
{
	int a = 12;
	int b = a << 1;

	//00000000 00000000 00000000 00001100  //12
	// 
	//0000000 00000000 00000000 000011000 //24 ?  
	// 
	//12�Ķ������������������ƶ�һλ����Ĳ�����0���뼴��

	printf("%d\n", b);// 24
	return 0;
}






//int main()
//{
//	//���������� + - * /
//	int a = 5;
//	printf("%d\n", a / 2);// ��2 �� 0.5
//	//ע�� ���� / ��  ���߶�Ϊ����ִ����������  ����һ��ΪС��ִ��С������ û������
//
//
//	//  %  ȡģ������
//	int b = 7;
//	printf("%d\n", b % 2);// ��3��1
//	//�õ���������֮�������
//	return 0;
//
//}




// ���� ��һ������ һ����ͬ����Ԫ�صļ���

//int main()
//{
//	//˼��һ������ ����
//	char arr[10] = { 'a','b','c' };//�±��0��ʼ��  0 1 2 3...
//	printf("%c\n", arr[2]);
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 9;
//	while (i >= 0)
//	{
//		printf("%d\n", arr1[i]);
//		i--;
//	}
//	return 0;
//}



//����

//int ADD(int a, int b)
//{
//	int c;
//	c = a + b;
//	return c;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c=ADD(a,b);
//	printf("%d\n",c);
//
//}



//ѡ��ѭ�����

//int main()  while���
//{
//	int line = 0;
//	
//	while (line < 2000)
//	{
//		printf("����Ŭ����%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("�õ��ù�����\n");
//	return 0;
//}




//int main()    if else ���
//{
//	int ch;
//	printf("�Ƿ�ú�ѧϰ��0 or 1\n");
//	scanf("%d", &ch);
//	if (ch == 1)
//		printf("�ù�����\n");
//	else
//		printf("������ȥ�ɣ�\n");
//	return 0;
//}




//���ֻ�����ע�ͷ��  /*  */   //



//ת���ַ�-ת��ԭ���ĺ���--�� '\'

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%s\n", "c:\\test\\test.c");
//	//���������һ������ ���ַ������ȵ�ʱ��ûע��ʹ��strlen �����ó���sizeof ������ĳ��Ȳ��� ���Ƕ�һ�� \0 �ĳ���
//	printf("%d\n", strlen("c:\test\test.c"));
//	printf("%d\n", strlen("c:\\test\\test.c"));
//	printf("%d\n", strlen("c:est.c"));
//
//	//  \ddd ��ʾ����1-3���˽������� \xdd ��������ʮ����������
//
//	printf("%d\n", '\x51');//ע�����������
//	printf("%c\n", '\065');
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}



// �ַ���

//int main()
//{
//	'a';//����������Ľ��ַ� 
//	' ';//���ַ�
//	'ab';//�����ַ������淶
//	"ab";//˫�������Ľ��ַ���
//
//
//	char ch[] = "abcdef";//��\0 ������־
//	char ch1[] = {'a','b','c','d','e','f','\0'};//��\0������־ ���Ժ�����������
//
//	printf("%s\n", ch);//��ӡ����ʱ��ĸ�ʽ��Ҫע��һ��
//	printf("%s\n", ch1);
//
//
//	//�󳤶ȵ�ʱ�� \0 ���������ȵ�
//	printf("%d\n", strlen(ch));
//	printf("%d\n", strlen(ch1));
//
//
//	return 0;
//
//}




//����

//ö�ٳ���
//enum Sex//ö������ ������һ������������ʹ��
//{
//	MALE, //0
//	FEMELE,//1
//	SECRET//2   ���︳��ʼֵ���Ե�����������в��ܹ�����ö�ٳ�����ֵ
//};
//int main()
//{
//	enum Sex A = FEMELE;
//	printf("%d\n", A);
//  return 0
//}



//#define ����ı�ʶ������

//#define MAX 100
//int main()
//{
//	//int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}


//const ���ε� ������

//int main()
//{
//
//	const int a = 100;
//	// a = 30;
//	int arr[a] = { 0 };
//
//
//	printf("%d\n", a);
//
//
//}


//��������������� �ֲ��������ڵ����÷�Χ 


//extern int a;//ȫ�ֱ��������ܹ����ļ�ʹ�� ֻ��Ҫextern�������� ����������������(��Ŀ)
//int main()
//{
//	printf("%d\n", a);
//	return;
//}



//int b = 30;// ȫ�ֱ���
//void test()
//{
//	printf("b=%d\n", b); 
//
//}
//int main()
//{
//	printf("b=%d\n", b);//30
//	
//	
//	
//	int b=100;
//	{
//		printf("b=%d\n", b);//100
//	}
//	test();//30
//	printf("b=%d\n", b); //100
//	
//	
//	return 0;
//}