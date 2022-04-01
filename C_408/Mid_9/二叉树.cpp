#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//������ - ��ʽ�洢 - ��ν���


typedef char BiElemType;

typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;


//��������
typedef struct tag {
	BiTree p;//�����ĳһ���ڵ�ĵ�ֵַ
	struct tag* pnext;

}tag_t, * ptag_t;


void preOrder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//�ȴ�ӡ �м��� Ȼ��ݹ� ��ӡ�����Һ���

		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}

int main()
{
	BiTree pnew;//��ʱ�������
	int i, j, pos;
	char c;

	BiTree tree = NULL;//����
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur=NULL;//����ͷ ����β


	//abcdefghij
	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			break;
		}

		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));//calloc ����ռ䲢�Կռ��ʼ�� ��ֵ0
		pnew->c = c;//�����ַ�����

		listpnew = (ptag_t)calloc(1, sizeof(tag_t));//�����н������ռ�
		listpnew->p = pnew;

		if (NULL == tree)//����Ϊ�� ��ʱ����Ҳ�ǿյ�
		{
			tree = pnew;
			phead = listpnew;
			ptail = listpnew;

			pcur = listpnew;
			continue;
		}
		else//���ڵ㲻Ϊ��
		{
			//�൱��һ��С-β�巨
			ptail->pnext = listpnew;
			ptail = listpnew;
		}
		if (NULL == pcur->p->lchild)//�½ڵ�����
		{
			pcur->p->lchild = pnew;//�½ڵ������Ҫ����Ľ������
		}
		else if (NULL == pcur->p->rchild)
		{
			pcur->p->rchild = pnew;//pcur-ʼ��ָ��Ҫ����ڵ��λ��

			pcur = pcur->pnext;//���Ҷ����˽��֮�� pcur ��ʼָ����һ��Ԫ��

		}
		//ע��������в�û�н��г��Ӳ���
	}

	printf("-----------ǰ�����----------\n");
	//�ݹ��ʱ�������һ������Դ�ӡ��ʱ��϶�Ҳ�ǰ��ŵ�
	preOrder(tree);


	return 0;
}