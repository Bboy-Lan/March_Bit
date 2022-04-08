#include"function.h"



//ǰ�����
void preOrder(BiTree p)
{
	if (p != NULL)
	{
		//ǰ����� ��ǰ���ӡ
		putchar(p->data);
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
		putchar(p->data);
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
		putchar(p->data);
	}
}

//��������ǵݹ�-ִ��Ч�ʸ���
void InOrder2(BiTree T)
{
	SqStack S;
	InitStack(S);
	BiTree p = T;
	while (p || !IsEmpty(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->lchild;//���p��㲻Ϊ�� ѹջ ����ȡ����
		}
		else
		{
			Pop(S, p);
			putchar(p->data);
			p = p->rchild;//����ջ��Ԫ�ز���ӡ ��ȡ��ӡԪ�ص��ҽڵ�
		}
	}
}

//�������
void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q,T);//���������
	while (!IsQEmpty(Q))//�ǿյ�ʱ��ʼѭ��
	{
		DeQueue(Q, p);//����
		putchar(p->data);
		if (p->lchild != NULL)//�Ƚ����ȳ�
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}
}

int main()
{
	BiTree pnew;
	BiElemType c;
	
	BiTree root = NULL;//����
	ptag_t listpnew=NULL, phead = NULL, ptail = NULL, pcur = NULL;

	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
			break;//�����س�ѭ������

		//ע����������µ�Ԫ�ض���Ҫ����ռ�-���г�ʼ����ÿ����֧����һ�����
		pnew = (BiTNode*)calloc(1, (sizeof(BiTNode)));
		pnew->data = c;
		
		listpnew = (tag_t *)calloc(1, (sizeof(tag_t)));
		listpnew->p = pnew;//����Ԫ�ؽ��и�ֵ

		//�жϸ��Ƿ�Ϊ�� 
		if (NULL == root)
		{
			root = pnew;
			phead = listpnew;
			ptail= listpnew;

			pcur = listpnew;//��Ϊ�� ��ʼ������
			continue;
		}
		else//Ԫ������
		{
			ptail->next = listpnew;
			ptail = listpnew;//patil һֱ���������һ��Ԫ������
		}
		//pcur һֱָ�������Ԫ��
		if (pcur->p->lchild == NULL)
		{
			pcur->p->lchild = pnew;
		}
		else if (pcur->p->rchild == NULL)
		{
			pcur->p->rchild = pnew;
			pcur = pcur->next;
		}
	}


	printf("\n--------- ǰ����� ---------\n");
	preOrder(root);

	printf("\n--------- ������� ---------\n");
	InOrder(root);

	printf("\n--------- ������� ---------\n");
	PostOrder(root);

	printf("\n--------- ��������ǵݹ� ---------\n");
	InOrder2(root);

	printf("\n--------- ������� ---------\n");
	LevelOrder(root);

	return 0;
}