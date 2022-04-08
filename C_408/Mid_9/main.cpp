#include"function.h"

//ǰ�����--������ȱ���
void preOrder(BiTree p)
{
	if (p != NULL)
	{
		putchar(p->c);//�ȴ�ӡ �м��� Ȼ��ݹ� ��ӡ�����Һ���

		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}

//�������
void InOrder(BiTree p)
{
	if (p != NULL)
	{
		InOrder(p->lchild);
		putchar(p->c);//�м��ӡ����
		InOrder(p->rchild);
	}
}

//�������
void PostOrder(BiTree p)
{
	if (p != NULL)
	{
		PostOrder(p->lchild);
		PostOrder(p->rchild);
		putchar(p->c);
	}
}

//��������ǵݹ�-ִ��Ч�ʸ���
void InOrder2(BiTree T)
{
	SqStack S;
	InitStack(S);
	BiTree p = T;
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->lchild;//���p��㲻Ϊ�� ѹջ ����ȡ����
		}
		else
		{
			Pop(S, p);
			putchar(p->c);
			p = p->rchild;//����ջ��Ԫ�ز���ӡ ��ȡ��ӡԪ�ص��ҽڵ�
		}
	}
}

//������ȱ���----�����������һ��һ��ı��� -----һ�㿼��С��
void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q, T);//���������
	while (!IsQEmpty(Q))//��ʾ��Ϊ�� �ǿտ�ʼѭ��
	{
		DeQueue(Q, p);//���ӵ�ǰ��㲢��ӡ
		putchar(p->c);
		if (p->lchild != NULL)
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}

}

int main()
{
	BiTree pnew;//��ʱ�������
	char c;

	BiTree tree = NULL;//����
	ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;//����ͷ ����β


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


	//�ݹ��ʱ�������һ������Դ�ӡ��ʱ��϶�Ҳ�ǰ��ŵ�

	printf("\n-----------ǰ�����----------\n");//������� ��ǰ���-����-�Һ���

	preOrder(tree);// abdhiejcfg

	printf("\n-----------�������----------\n");//���� - �� - �Һ���
	InOrder(tree);// hdibjeafcg

	printf("\n-----------�������----------\n");//���� - �Һ��� - ��
	PostOrder(tree);// hidjebfgca

	printf("\n-----------��������ǵݹ�----------\n");
	InOrder2(tree);

	printf("\n-----------������ȱ���----------\n");
	LevelOrder(tree);
	return 0;
}

