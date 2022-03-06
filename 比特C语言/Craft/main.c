#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


<<<<<<< HEAD



//¼ÆËã nµÄ½×³Ë
//1!+2!+...+10!







int main()
{
    // 1µ½ 100 µÄËùÓÐÕûÊýÖÐ³öÏÖ¶àÉÙ¸öÊý×Ö9
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
    //ÀûÓÃwhile»òÕßforÑ­»·¼ÆËãn£¡µÄÖµ¡£
    int i = 0;
    int n;
    scanf("%d", &n);
    int end = n;

    for (i = 1; i < n; i++)
    {

        //n£¡£½1*2*3¡­*n
        end = end * (n - i);

    }
    printf("%d\n", end);

    return 0;
}



int main()
{
    int n;
    scanf("%d", &n);
    //ÊäÈëÒ»¸öÕûÐÍÊý£¬ÅÐ¶ÏÊÇ·ñÊÇ¶Ô³ÆÊý£¬Èç¹ûÊÇ£¬Êä³öyes£¬·ñÔòÊä³öno£¬²»ÓÃ¿¼ÂÇÕâ¸öÕûÐÍÊý¹ý´ó£¬intÀàÐÍ´æ²»ÏÂ£¬²»ÓÃ¿¼ÂÇ¸ºÖµ£»


    //¶Ô³ÆÊýÓ¦¸ÃÔõÑùÅÐ¶¨?
    int arr[1000] = {};


    //ÀýÈç 12321ÊÇ¶Ô³ÆÊý£¬Êä³öyes£¬124421ÊÇ¶Ô³ÆÊý£¬Êä³öyes£¬1231²»ÊÇ¶Ô³ÆÊý£¬Êä³öno
    return 0;
}



int main()
{
    int i;
    char j;
    float k;
    scanf("%d %c %f", &i, &j, &k);
    //¶ÁÈ¡Ò»¸öÕûÐÍÊý£¬×Ö·û£¬¸¡µãÊý£¬·Ö±ðµ½±äÁ¿i£¬j£¬kÖÐ


    //½«i£¬j£¬kÖ±½ÓÏà¼Ó²¢Êä³ö£¬Ð¡Êýµãºó±£ÁôÁ½Î»Ð¡Êý£¬²»¿¼ÂÇÊäÈëµÄ¸¡µãÊýµÄÐ¡Êý²¿·Ö³¬¹ýÁËÁ½Î»
    printf("%.2f", i + j + k);

    return 0;
}


// ÕâÀï×Ô¼º×¢Òâ Ð´Á¬Ðø²»µÈÊ½±ØÐë½èÖú  &&-Âß¼­Óë
=======
// è¿™é‡Œè‡ªå·±æ³¨æ„ å†™è¿žç»­ä¸ç­‰å¼å¿…é¡»å€ŸåŠ©  &&-é€»è¾‘ä¸Ž
>>>>>>> 65fb03c213b5557024286542bc6d842f1fdcac89
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


<<<<<<< HEAD


=======
>>>>>>> 65fb03c213b5557024286542bc6d842f1fdcac89
int main()
{
    int n;
    int x;
    int i = 0;
    int j = 0;
    int arr[100];
    int sum = 0;

    scanf("%d", &n);//è¾“å…¥ä¸€ä¸ªæ•°n

<<<<<<< HEAD
    //while (n > 0)//µÚ¶þÐÐÊäÈën¸ö¿Õ¸ñ¸ô¿ªµÄÊý
    //{
    //	scanf("%d ", &arr[n - 1]);
    //	n--;
    //}

    for (j = 0; j < n; j++)
=======
    while (n > 0)//ç¬¬äºŒè¡Œè¾“å…¥nä¸ªç©ºæ ¼éš”å¼€çš„æ•°
>>>>>>> 65fb03c213b5557024286542bc6d842f1fdcac89
    {
        scanf("%d ", &arr[j]);
    }
    scanf("%d", &x);


    for (i = 0; i < n; i++)//å¾ªçŽ¯næ¬¡
    {
        if (arr[i] == x)//åˆ¤æ–­æœ‰æ˜¯å¦ç›¸åŒçš„æ•°
        {
            sum = sum + 1;
        }
    }
<<<<<<< HEAD

    printf("%d\n", sum);//ÎªÉ¶×îºóÊä³öÊÇ0 
=======
    printf("%d\n", sum);//ä¸ºå•¥æœ€åŽè¾“å‡ºæ˜¯0 
>>>>>>> 65fb03c213b5557024286542bc6d842f1fdcac89
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
    //æ•´æ•°èƒ½å¦è¢« 5æ•´é™¤  % ä½™æ•°ç­‰äºŽ0
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
	printf("è¾ƒå¤§çš„æ•°: %d\n", com);
}
