#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//数组 -在函数内也可读可写
//传递时其元素个数传递不过去

//int main()
//{
//
//	char a[20],b[20];
//	scanf("%s %s", a, b);//数组在scanf时不用取地址
//	printf("%s------%s\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int i;
//	char c[5] = { 'h','e','l','l','o' };
//	//定义字符数组时其大小最好写大一点 不然放不下'\0' 会出现乱码 即字符数组大小比看见的字符数字至少+1
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


void print(int arr[],int ret)//因此传关于数组值的时 需要再将其长度传递过去
{
	int i;
	//打印传递过来数组的各个元素
	for (i = 0; i <ret ; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	arr[3] = 11;//-在函数内也可读可写
}

//
//int main()
//{
//	//一维数组
//	int i = 12;
//	int arr[5] = {1,2,3,4,5};//数组定义可以不初始化
//	int ret = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,ret);
//	printf("%d\n", arr[3]);
//	int j = 20;
//
//	//arr[5]=20;
//	//arr[6] = 21;
//	//arr[7] = 22;//访问越界-访问超过了数组实际定义大小 会造成其他值的改变
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
//	int ret = scanf("%d %c%f", &i, &j, &k);//%c 不会跳过空格和\n 
//	//混合输入时遇见%c 需要加上一个空格
//	printf("i=%d j=%c k=%f", i, j, k);
//	
//	return 0;
//
//}