#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ˳��ṹ ѡ��ṹ����֧�� ѭ���ṹ
// if switch     while for do while

	//C������ ; ��β����һ�����



//int test()
//{
//	if (0)
//		return 3;
//	return -3;
//}


int main()
{
	//ѭ����� 

	int ch;
	while ((ch = getchar()) != EOF)//ע���Ҫ�ĸ�ʽ-����
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}


	//int ch = 0;
	//printf("��������: ");

	//char password[20] = { 0 };
	//scanf("%s", password);//���ﲻ��Ҫʹ��ȡ��ַ������

	//// scanf(���ܶ�ȡ�ַ���֮��Ŀո�)
	//// scanf()  getchar()----->���뻺����<-----����
	////��˵���Ҫ��getcharȡ�ַ���ʱ����Ҫ���������������
	//printf("ȷ������: ");
	////getchar();//ֻ��ȡһ��
	//
	//while (getchar() != '\n')
	//{
	//	;//������������ ȡ���ַ�����Ҫ��ʲô ���������һ�������
	//}
	//ch = getchar();
	//if (ch == 'Y')
	//	printf("ȷ�ϳɹ�");
	//else
	//	printf("ȷ��ʧ��");




	//getchar ÿ��ֻ�ܶ�ȡһ���ַ�  putchar
	
	//int ch;
	////EOF -�ļ�������־ ��getchar()��ȡʧ��ʱ�ͻ᷵��EOF----Ctrl+z
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}



	//int ch = 0;
	//ch = getchar();
	//putchar(ch);



	//int i = 1;
	//while (i <= 10)//while ����ǧ��ǵò�Ҫ�� ����
	//{
	//	i++;//����ǰ����ֲ�һ����
	//	if (5 == i)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//	
	//}


	//int i = 1;
	//while (i <= 10)//while ����ǧ��ǵò�Ҫ�� ����
	//{
	//	if (5 == i)
	//	{
	//		continue;//��ѭ��  while �� continue���׳����� ��for���� ��˼��
	//		//continue ����������ѭ������Ĵ��� ֱ�ӵ�ѭ���жϲ��� ���Ƿ������һ��ѭ��
	//	}
	//	printf("%d ", i);
	//	i++;
	//}



	//while ��break��������ֹѭ�� ��switch��ֻ��ֹ����һ��case���
	
	//int i = 1;
	//while (i <= 10)//while ����ǧ��ǵò�Ҫ�ӣ�
	//{
	//	if (5 == i)
	//	{
	//		break;//��ֹѭ��
	//	}
	//	printf("%d ", i);
	//		i++;
	//}

	//whileѭ��
	//��ӡ1-10
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("%d ", i);
	//	i++;
	//}






	//switch���
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)//�����������α��ʽ
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4://�費��Ҫ��breakȡ��������Ҫ�Ĵ����߼�
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//case 7:
	//	printf("��Ϣ��\n");
	//	break;
	//default://�������������ʱ
	//	printf("������������");
	//	break;

	//}

	//�ж�һ�����ǲ�������

	//int num=0;
	//int i;
	//for (i = 0; i < 101; i++)
	//{
	//	if (1 == i % 2)
	//	{
	//		printf("%d ", i);
	//		num = num + 1;
	//	}
	//}
	//printf("������: %d\n", num);
	
	//int num = 10;

	//if (5 == num)//����д���븳ֵ�ķ�ʽ
	//	printf("111\n");
	//else
	//	printf("222\n");

	//���������Ҫ

	//int a = test();
	


	////����else
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//	else//else�����������if-ƥ��  ��˼Ӵ����ŵ����þ����ֳ�����
	//		printf("haha\n");
	////�޴�ӡ���



	//if else if else
	//int age=18;
	//if (age == 18)//�����ŵ����� ���� �����׳���
	//{
	//	printf("ţ�ۣ�\n");
	//	printf("ţ�˸��ƣ�\n");
	//}


	return 0;
}



