#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//������ - ��ʽ�洢 - ��ν���

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