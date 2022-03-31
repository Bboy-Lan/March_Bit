#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//¶þ²æÊ÷ - Á´Ê½´æ´¢ - ²ã´Î½¨Ê÷

typedef char BiElemType;

typedef struct BiTNode {
	BiElemType data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;

typedef struct tag {
	BiTree p;
	struct tag* pnext;
}tag_t,*ptag_t;


int main()
{



	return 0;
}