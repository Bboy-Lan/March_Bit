#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�ṹ��-�������Ӷ���

//struct student
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char id[11];
//};
//struct Book
//{
//	char name[20];
//	int price;
//	char author[20];
//};
//
//int main() 
//{
//	struct student s1 = { "����",16,"��","10086" };
//	struct student s2 = { "˿˿",20,"Ů","3834015" };
//	struct Book b1 = { "����",99,"����" };
//	
//	//����ע��ʲô������ʲô��ӡ int d  char c/s
//	printf("������%s\n�۸�%dԪ\n���ߣ�%s\n",b1.name,b1.price,b1.author );
//	//�ṹ�����.--���ò�����
//
//
//	struct student* pa = &s1;//*pa �����ô�ӡ��ʱ�� ��ü������� --().
//	printf("������%s\n���䣺%d\n�Ա�%s\n��ϵ��ʽ��%s\n", (*pa).name,(*pa).age, (*pa).sex , (*pa).id);
//	// pa->   ָ��+��ͷ
//	
//	printf("������%s\n���䣺%d\n�Ա�%s\n��ϵ��ʽ��%s\n", pa->
//		name, pa->age, pa->sex, pa->id);
//
//	//���ִ�ӡ��ʽ
//	
//
//	return 0;
//}





//ָ��-��һ����ŵ�ַ�ı���

//int main()
//{
//	//ָ������� ��С 64λ8byte 32λ4byte  ˼��һ��Ϊʲô��
//	/*printf("%d\n", sizeof(char*));*/
//	//(��ַ��)32λΪ��  һ����ַ����Ҫ32��bitλ4���ֽ� ����64 λ 8���ֽ�
//	//�� ָ�������Ҫ��ʾһ������ַ�� ��ȫ�����Ͷ���Ҫһ�����ڴ� ��4or8
//
//
//	//������Ҫ���ؿ��ǿ���
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", *pa);
//	printf("%d\n", a);
//
//
//	////����ȡ��ַ�õ����� ��ռ�ֽ�����С����һ����ַ
//	//int a = 10;
//	//printf("%p\n",&a);
//	//int* pa = &a;//pa ��ŵ�ַ�ı�������ָ�����
//	////int ��ʾָ�������������� *�ű�ʾ��ָ��
//	//// ����֪�� *pa ������� a
//
//
//	//char c = 'w';
//	//char* pc = &c;//& ���Ų�Ҫ��
//
//	////����ַ������֮��϶�����Ҫ�����ҵ��������ı��
//	//*pa=20;//* �����ʾ�����ò�����
//	//*pc = 'H';
//
//	//printf("%d\n", a);
//	//printf("%c\n", c);
//
//	return 0;
//}