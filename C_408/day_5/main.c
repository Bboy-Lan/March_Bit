#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



//���濴һ������
char* print_stack()//ջ�ռ�
{
	char arr[] = "I am print_stack!";
	puts(arr);
	return arr;
}

char* print_malloc()//�ѿռ�
{
	char* p = (char*)malloc(30);
	strcpy(p, "I am print_malloc!");
	puts(p);
	return p;
}

int main()
{
	char* p;
	p = print_stack();
	//ջ�ռ�����ź���ִ�еĽ������ͷ�

	puts(p);//�����Ѿ���ӡ�������� ��Ϊ���������������Ĳ��ҷ��ص������ַ�Ѿ����ź���ִ�н����ͷ�  -��������

	p = print_malloc();

	//�ѿռ䲻�����ź���ִ����϶��ͷ� ����ִ����free ����
	puts(p);

}














//ָ���붯̬�ڴ�����
//ȷ������ -ջ  δ֪����-�� ��Ҫ���� �����ͷŲ���
int main()
{
	int i;//����ռ�Ĵ�С
	scanf("%d", &i);

	char* p;
	p = (char*)malloc(i);//�����Ҳ�ǵ�ַ������һƬ�ռ� byte�ǻ�����λ

	strcpy(p, "malloc success!");
	puts(p);
	free(p);//�ͷſռ� p��ֵ��û�иı�� ��������ͷ�p��ֵ��������malloc���ص�ֵһ��
	p = NULL;//������� p��Ϊnull ��ʱ��ᷢ����ָ�������ռ��Ұָ����� -���򱨴�.

	return 0;
}


















//ָ����һά����

void change(char *d)//d[] ������char *  �������ò��ܴ����� ֻ�ᴫ��ֵ
{
	*d = 'H';
	d[1] = 'E';
}
int main()
{
	//�������õı��� ʵ�θ�ֵ���β�

	char c[10] = "hello";
	change(c);
	puts(c);


	return 0;
}


















//�е��� ��Ҫ������һ��

int main()
{
	//ָ���������Լ������
	int arr[3] = { 3,5,7 };
	int* p;
	int j;
	p = arr;
	j = *p++;//j=*p ,p++ ����*p++
	//j = *p++; 
	//j = arr[0]++;
	printf("arr[0]:%d\nj=%d\n*p=%d\n",arr[0], j,*p);// 3 3 5

	j = arr[0]++;//ע��������������� p[0]++
	printf("arr[0]:%d\nj=%d\n*p=%d\n", arr[0], j, *p);// 

	return 0;
}