#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <corecrt_malloc.h>
#include "maincpp.h"


void Fun_print(char*& p)
{
	p = (char*)malloc(100);
	fgets(p, 100, stdin);

}
int main()
{
	char* p;
	Fun_print(p);

	printf("%s\n", p);
	return 0;
}