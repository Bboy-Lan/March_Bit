#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����������

typedef int ElemType;
typedef struct BSTNode {
	int key;
	struct BSTNode* lchild, *rchild;

}BSTNode,*BSTree;

//��������������--54,20,66,40,28,79,58
void Creat_BST(BSTree& T, int str[], int n)
{
	T = NULL;
	int i = 0;
	while (i < n)//��Ԫ�ط���
	{
		BST_Insert(T, str[i]);
		i++;
	}
}
//��������ɾ��
void BST_Delete(BSTree& root, ElemType x) {
	if (root == NULL) {
		return;
	}
	if (root->key > x) {
		BST_Delete(root->lchild, x);
	}
	else if (root->key < x) {
		BST_Delete(root->rchild, x);
	}
	else { //���ҵ���ɾ���ڵ�
		if (root->lchild == NULL) { //������Ϊ��
			BSTree tempNode = root;
			root = root->rchild;
			free(tempNode);
		}
		else if (root->rchild == NULL) { //������Ϊ��
			BSTree tempNode = root;//��ʱָ��
			root = root->lchild;
			free(tempNode);
		}
		else {  //������������Ϊ��
		   //һ���ɾ����������������������� �� ����������С���� ����Ҫɾ���Ľڵ�(������ò����������������������)
			BSTree tempNode = root->lchild;
			while (tempNode->rchild != NULL) {
				tempNode = tempNode->rchild;
			}
			root->key = tempNode->key;
			BST_Delete(root->lchild, tempNode->key);
		}
	}
}

//�ǵݹ�ʵ��Ԫ�ز��� ---�ռ临�Ӷ� O(1)
BSTNode* BST_Search1(BSTree T, int key,BSTree &p)//parent �����
{
	p = NULL;
	while (T != NULL && key != T->key)//���ջ��ߵ��ڸ��ڵ�ֵ ����ѭ��
	{
		p = T;
		if (key < T->key)//С�������������� ��Ϊ����������
			T = T->lchild;
		else
			T = T->rchild;
	}
	return T;//����ʧ�ܾͷ��� NULL
}

//�ݹ�ʵ�ֲ���---�ռ临�Ӷ� O(h)--h ָ���ĸ߶�
BSTNode* BST_Search2(BSTree T, int key)
{
	if (NULL == T)
		return NULL;
	if (key == T->key)
		return T;//���ҳɹ�
	
	else if (key < T->key)//С�� �����������н��в���
		return BST_Search2(T->lchild,key);
	else
		return BST_Search2(T->rchild, key);

}

//������������-����-�ؼ���K���½ڵ㣨�ݹ飩 ---�ռ临�Ӷ�O(h)
int BST_Insert(BSTree& T, int k)
{
	if (NULL == T)//ԭ��Ϊ�� �²������������
	{
		T = (BSTree)malloc(sizeof(BSTNode));//����ռ�
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;//����ɹ�
	}
	else if (k == T->key)//�����д�����ͬ�ؼ��ֵĽ�� ����ʧ�� �����������ͬ��Ԫ��
		return 0;
	else if (k < T->key)//�ݹ����
		return BST_Insert(T->lchild, k);
	else
		return BST_Insert(T->lchild, k);

}

int main()                                                                                      
{
	BSTree T;//����
	BSTree parent;

	BSTree search;

	ElemType str[] = { 54,20,66,40,28,79,58 };
	Creat_BST(T, str,7);


	return 0;
}