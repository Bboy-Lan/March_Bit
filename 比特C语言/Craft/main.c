#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


	//��10 �����������ֵ
	// д�������� ���䰴�� ��С ���
int main()
{
	int a, b, c;
	//�涨��������a 
	scanf("%d%d%d", &a, &b, &c);
	// �Ƚ� ������ֵ��a
	int tmp = 0;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d>%d>%d\n", a, b, c);//��ӡ

	return 0;
}



int main()
{
    //��ӡ 9 * 9�˷���

    //1*1 
    //1*2 2*2
    //1*3 2*3 3*3
    //...
    //1*9 2*9 3*9 .... 9*9

    int i, j;

    for (i = 1; i < 10; i++)//��ӡ9�� -ѭ�� 9 ��
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", j, i, i * j);
        }
        printf("\n");

    }

    return 0;
}



int main()
{
    //goto ���һ�㲻��ôʹ�� ��������Ҫ�������Ƕ��ѭ����ʱ�������

    // дһ���ػ�����

    do
    {
        char input[20];
    again:

        printf("���Խ���1�����ڹػ������롰����������ȡ���� ");
        system("shutdown -s -t 60");
        scanf("%s", input);
        if (strcmp(input, "������") == 0)
        {
            system("shutdown -a");
            printf("�ػ�������ע�� \n");
            break;
        }
        else
            printf("�������\n");
        goto again;

    } while (1);
    return 0;
}





//��д���� ��ʾ����ַ������˵��ƶ������м���

int main()
{
    char arr1[20] = { "##################" };
    char arr2[20] = { "-> hello__world <-" };

    //������ַ����ĳ���

    int sz = strlen(arr1);
    int left = 0;
    int right = sz-1;//�ǵü�1 �� ����ʱ�̼�ס������

    while (left <= right)
    {
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        left++;
        right--;

        printf("%s\n", arr1);
        Sleep(500);
        system("cls");

    }

    printf("%s\n", arr1);

    return 0;
}








// 1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

int main()
{
   
    int i, j;
    double sum = 0.0;
    for (i = 2, j = 1; i <= 100 && j <= 99; i += 2, j += 2)
    {
        sum += 1.0 / j - 1.0 / i;
    }
    printf("%f", sum);


    return 0;
}

int  main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("%lf\n", sum);
    return 0;
}



//���� n�Ľ׳�
//1!+2!+...+10!






int main()
{
    // 1�� 100 �����������г��ֶ��ٸ�����9
    int i;
    int sum = 0;
    for (i = 0; i < 101; i++)
    {
        if (i / 10 == 9 || i % 10 == 9)
        {
            sum = sum + 1;
            printf("%d\n", i);
        }

    }
    printf("%d\n", sum);
    return 0;

}

int main()
{
    //����while����forѭ������n����ֵ��
    int i = 0;
    int n;
    scanf("%d", &n);
    int end = n;

    for (i = 1; i < n; i++)
    {

        //n����1*2*3��*n
        end = end * (n - i);

    }
    printf("%d\n", end);

    return 0;
}



int main()
{
    int n;
    scanf("%d", &n);
    //����һ�����������ж��Ƿ��ǶԳ���������ǣ����yes���������no�����ÿ����������������int���ʹ治�£����ÿ��Ǹ�ֵ��


    //�Գ���Ӧ�������ж�?
    int arr[1000];


    //���� 12321�ǶԳ��������yes��124421�ǶԳ��������yes��1231���ǶԳ��������no
    return 0;
}



int main()
{
    int i;
    char j;
    float k;
    scanf("%d %c %f", &i, &j, &k);
    //��ȡһ�����������ַ������������ֱ𵽱���i��j��k��


    //��i��j��kֱ����Ӳ������С���������λС��������������ĸ�������С�����ֳ�������λ
    printf("%.2f", i + j + k);

    return 0;
}


// �����Լ�ע�� д��������ʽ�������  &&-�߼���
int main()
{
    int sort;
    scanf("%d", &sort);
    if (90 < sort && sort <= 100)
        printf("A\n");
    else if (80 <= sort && sort < 90)
        printf("B\n");
    else if (70 <= sort && sort < 80)
        printf("C\n");
    else if (60 <= sort && sort < 70)
        printf("D\n");
    else if (0 <= sort && sort < 60)
        printf("E\n");
    else
        printf("F\n");

    return 0;
}




int main()
{
    int n;
    int x;
    int i = 0;
    int j = 0;
    int arr[100];
    int sum = 0;

    scanf("%d", &n);//����һ����n

    //while (n > 0)//�ڶ�������n���ո��������
    //{
    //	scanf("%d ", &arr[n - 1]);
    //	n--;
    //}

    for (j = 0; j < n; j++)
    {
        scanf("%d ", &arr[j]);
    }
    scanf("%d", &x);


    for (i = 0; i < n; i++)//ѭ��n��
    {
        if (arr[i] == x)//�ж����Ƿ���ͬ����
        {
            sum = sum + 1;
        }
    }

    printf("%d\n", sum);//Ϊɶ��������0 
    return 0;
}





int main()
{
    printf("printf(\"Hello world!\\n\");\n");
    printf("cout << \"Hello world!\" << endl;");

    return 0;
}



int main()
{
    int x;
    scanf("%d\n", &x);
    if (x < 0)
        printf("1");
    else if (x == 0)
        printf("0");
    else
        printf("-1");
    return 0;
}



int main()
{
    //�����ܷ� 5����  % ��������0
    int M;
    scanf("%d\n", &M);
    if (M % 5 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}





int Com(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int com = Com(x, y);
	printf("�ϴ����: %d\n", com);
}