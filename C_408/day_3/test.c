#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//gets---puts����


int main()
{

	char arr[20];
	
	//gets(arr);//ֻ�ܶ�ȡ�ַ��� һ�ζ�ȡһ��ʱʹ�� ������ַ�����������
	printf("%d\n", strlen(arr));

	//strcmp �ж����ַ����Ƿ���� ���� 1 ��ȷ���0 ��֮-1

	printf("%d\n", (strcmp(gets(arr), "wangdao")));
	printf("%d\n", strcmp("how", "hello"));
	//�����ַ��Ƚϳ����ǱȽ������ַ���ASCII��ֵ �ӵ�һ��һֱ�Ƚϵ����


	char arr1[20]="bit";
	
	strcat(arr,arr1);//ƴ����������
	printf("%s\n", arr);
	puts(arr);

	return 0;
}

int main()
{
	//�޸��������ַ��������� ������ĸ���д
	char arr[10] = "hello";
	arr[0] = arr[0] - 32;
	printf("%c\n", arr[0]);


	return 0;
}


//�ַ�����-���ݲ���Ҫ����������һ�����ݳ���

void print1(char arr[])
{
	int i = 0;//��Ϊ����ͨ���ж� \0 ����һ��ȷ������
	//���Ǳ��뱣֤������Խ�� Ҳ���ǳ�ʼ��ֵҪ��һ��
	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
}

int main()
{
	char arr[10] = "hello";
	print1(arr);

	return 0;
}