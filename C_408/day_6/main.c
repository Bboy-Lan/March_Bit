#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������ṹ��
//�����з���ֵ�ͱ���дreturn
//�������ȱ��������-->exe


struct inform //�ṹ��Ĵ�Сÿһ���������4���ֽڻ���������
	//����CPU�������ݵĴ�ȡ
{
	char name[10];
	int num;
	char sex;

};

int main()
{
	struct inform s = {"hehe",10010,'M'};
	struct inform* p;
	p = &s;//��һ����Ҫ���� ָ�������ʼ��
	printf("%s %d %c\n",p->name,p->num ,p->sex );



	//�ṹ��ָ��ƫ��-������Щ��
	struct inform arr[3] = { "hehe",100,'m',"haha",200,'w',"xixi",300,'m' };
	struct inform * p1;
	p1 = arr;
	int num = 0;
	num = p1->num++;//p1->num ; num = p1->num++
	//�����ȼ���ʱ�Ƕ�������в���
	printf("num=%d,p->num=%d\n", num, p1->num);//100 101
	
	num = p1++->num;//num = p1->num ;p1++ 
	printf("num=%d,p->num=%d\n", num, p1->num);//101 200



	//struct inform A[3];//�ṹ������
	//for (int i = 0; i < 3; i++)
	//{
	//	scanf("%s%d %c", A[i].name, &A[i].num, &A[i].sex);
	//	printf("%s %d %c\n", A[i].name, A[i].num, A[i].sex);
	//}


	return 0;
}











//����ָ��-C++������

//��Ҫ���Ӻ����иı�һ��������ֵ������ѱ����ĵ�ַ����ȥ
//��Ҫ�����Ӻ����иı�һ��ָ�������ֵ������Ѹ�ָ������ĵ�ַ����ȥ

//void change(int** pi, int *pj)//int **��ʾ����ָ��������� ר���������ָ������ĵ�ַ

//{
//	*pi = pj;
//}
//
//int main()
//{
//	int i = 5;
//	int j = 10;
//	
//	int* pi;
//	pi = &i;//����ַ����ָ��
//	
//	int* pj;
//	pj = &j;
//
//	printf("i=%d\n*pi=%d\n*pj=%d\n", i, *pi, *pj);
//	
//	//���ﵱ������Ҫת������ָ���ֵ֮�� ��Ҫ����ָ������ĵ�ַ 
//	//�ٽ���һ��ָ��  ���� *pi ��ֵ���*pj �� ����ֵ
//
//	change(&pi,pj);//��pj��ֵ pi�ĵ�ַ
//	printf("i=%d\n*pi=%d\n*pj=%d\n", i, *pi, *pj);
//
//
//	return 0;
//}








//�ַ�ָ����ַ������ʼ��


//int main()
//{
//	char* p = "hello";//���ַ����ͳ���hello ���׵�ַ����p
//	char arr[10] = "hello"; // �ȼ���strcpy��c��"hello"��
//	
//	arr[0] = "H";//���� arr ȴ���Խ����޸�
//	p[0] = "H";
//	
//	//Ϊʲô���ﲻ���� -д�����Ȩ�޳�ͻ������
//	//�����ԶԳ��������ݽ����޸�
//
//
//	p = "world";//���ַ��� world��ַ���� p
//	//arr = "world";
//	//�����������ڱ��� ���ܽ���������ֵ
//
//
//	printf("p[0]:%c\narr[0]:%c\n", p[0], arr[0]);// h h 
//
//
//	return 0;
//}













//int main()
//{
//	//����һ����������Ȼ�������Ӧ��С�ռ��ڴ棬Ȼ���ȡһ���ַ������ַ��������볤��С������������������С��������������ַ���
//	int i;
//	char c;
//	scanf("%d", &i);
//
//	char* p;
//	p = (char*)malloc(i);
//	scanf("%c", &c);//��֮ǰ�����\0 ��ȡ�� ��Ȼû���
//	gets(p);
//	puts(p);
//
//
//
//	return 0;
//}