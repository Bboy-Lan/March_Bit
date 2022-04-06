#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//二叉排序树

typedef int ElemType;
typedef struct BSTNode {
	int key;
	struct BSTNode* lchild, *rchild;

}BSTNode,*BSTree;

//构建二叉排序树--54,20,66,40,28,79,58
void Creat_BST(BSTree& T, int str[], int n)
{
	T = NULL;
	int i = 0;
	while (i < n)//将元素放入
	{
		BST_Insert(T, str[i]);
		i++;
	}
}
//排序树的删除
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
	else { //查找到了删除节点
		if (root->lchild == NULL) { //左子树为空
			BSTree tempNode = root;
			root = root->rchild;
			free(tempNode);
		}
		else if (root->rchild == NULL) { //右子树为空
			BSTree tempNode = root;//临时指针
			root = root->lchild;
			free(tempNode);
		}
		else {  //左右子树都不为空
		   //一般的删除策略是左子树的最大数据 或 右子树的最小数据 代替要删除的节点(这里采用查找左子树最大数据来代替)
			BSTree tempNode = root->lchild;
			while (tempNode->rchild != NULL) {
				tempNode = tempNode->rchild;
			}
			root->key = tempNode->key;
			BST_Delete(root->lchild, tempNode->key);
		}
	}
}

//非递归实现元素查找 ---空间复杂度 O(1)
BSTNode* BST_Search1(BSTree T, int key,BSTree &p)//parent 父结点
{
	p = NULL;
	while (T != NULL && key != T->key)//数空或者等于根节点值 结束循环
	{
		p = T;
		if (key < T->key)//小于则往左子树跑 因为右子树更大
			T = T->lchild;
		else
			T = T->rchild;
	}
	return T;//查找失败就返回 NULL
}

//递归实现查找---空间复杂度 O(h)--h 指树的高度
BSTNode* BST_Search2(BSTree T, int key)
{
	if (NULL == T)
		return NULL;
	if (key == T->key)
		return T;//查找成功
	
	else if (key < T->key)//小于 就在左子树中进行查找
		return BST_Search2(T->lchild,key);
	else
		return BST_Search2(T->rchild, key);

}

//二叉排序树中-插入-关键字K的新节点（递归） ---空间复杂度O(h)
int BST_Insert(BSTree& T, int k)
{
	if (NULL == T)//原树为空 新插入结点作根结点
	{
		T = (BSTree)malloc(sizeof(BSTNode));//申请空间
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;//插入成功
	}
	else if (k == T->key)//若树中存在相同关键字的结点 插入失败 不允许插入相同的元素
		return 0;
	else if (k < T->key)//递归查找
		return BST_Insert(T->lchild, k);
	else
		return BST_Insert(T->lchild, k);

}

int main()                                                                                      
{
	BSTree T;//树根
	BSTree parent;

	BSTree search;

	ElemType str[] = { 54,20,66,40,28,79,58 };
	Creat_BST(T, str,7);


	return 0;
}