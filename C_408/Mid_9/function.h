
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//˳��洢 --����
//��ν���
//��ȫ������

typedef char BiElemType;

//�������ṹ��
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;//����
	struct BiTNode* rchild;//�Һ���
}BiTNode, * BiTree;

//��������
typedef struct tag {
	BiTree p;//ָ������---���ڴ��һ������ָ��
	struct tag* pnext;

}tag_t, * ptag_t;

//ǰ�����
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
	BiTree pnew;//���ṹ������ָ��--��Ŷ�ȡ������
	char c;

	BiTree tree = NULL;//����
	ptag_t phead = NULL, ptail = NULL, listpnew, pcur = NULL;//���нṹ��ָ������

	//abcdefghijk
	while (scanf("%c", &c) != EOF)//ѭ���ж�
	{
		if (c == '\n')
		{
			break;
		}

		//calloc ����Ŀռ�ȫ��������Ϊ 0
		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));//ע�����ﲻҪд�� �ṹһ�����ͺͽṹ������ָ��

		//ÿһ���½��Ľ�㶼Ҫ���ٽ��ռ�
		pnew->c = c;//���ݷŽ�ȥ

		listpnew = (ptag_t)calloc(1, sizeof(tag_t));//����Ҳ������Ӧ�ռ�
		listpnew->p = pnew;// ͬ����ֵ�Ž�����

		if (NULL == tree)//����Ϊ��
		{
			tree = pnew;//������--�����Ϊʲô���������ӡ�� tree ��ԭ��
			phead = listpnew;//����ͷ ��β
			ptail = listpnew;

			pcur = listpnew;
			continue;
		}

		else //��ʱ��������Ϊ��--�Ƚ��ж��в��� ����� �����жϲ������
		{
			//�൱��һ��Сβ�巨--������ڶ�����

			ptail->pnext = listpnew;
			ptail = listpnew;//ָ�����β��

		}
		//���½�� ��������

		//pcur �൱��phead  ֻ���������б��� ��ʼ��ָ����Ҫ����Ľ��λ�� phead �Ա��ֲ��� 
		if (NULL == pcur->p->lchild)
		{
			//�½�������Ҫ����ڵ�����
			pcur->p->lchild = pnew;
		}
		else if (NULL == pcur->p->rchild)
		{
			//�½�������Ҫ����ڵ���ұ�
			pcur->p->rchild = pnew;
			pcur = pcur->pnext;//���ҽڵ㶼����֮�� ָ�������һ��λ��
		}

	}

	printf("-----------ǰ�����----------\n");
	//�ݹ��ʱ�������һ������Դ�ӡ��ʱ��϶�Ҳ�ǰ��ŵ�--
	preOrder(tree);

	return 0;
}