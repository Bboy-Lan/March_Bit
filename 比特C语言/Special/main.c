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