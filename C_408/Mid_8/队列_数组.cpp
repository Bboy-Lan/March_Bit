#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ѭ������Ӧ���ǿ���ֻ��ʾ�߼��ϵģ����ǻ���ѭ�����ж�Ĭ������ʵ�� 

//���ѭ�������Ǵ洢�ṹ




//���� FIFO --�ڱ��һ�˽��в��� ����һ�˽���ɾ��
//��ͷ-Front���ӡ���β-Rear���

//ѭ������--����ѭ����ͨ�� ȡ�� % ����ʵ�ֵ�

//���е���ʽ�洢  �� 쳲���������

#define MaxSize 5
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];//���� �洢 MaxSize -1 ��Ԫ��
	//����ճ�һ�������ж϶����Ƿ��Ѿ�װ��
	int front, rear;//����ͷ/����β
	//��Щʱ��Ϊ�˲��˷Ѷ�����Ǹ��ռ� ����Ҫ�ٶ���һ������ �����ж�

}SqQueue;


//��ʼ��ѭ������-�ö���Ϊ��
void IniQueue(SqQueue &Q)
{
	Q.front = Q.rear = 0;
}

//�ж��Ƿ�Ϊ��
bool isEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)//ָ��ͬһ���ط������� ����˵һ����ҪΪ 0
	{
		return true;
	}
	else
		return false;
}

//���
bool EnQueue(SqQueue& Q, ElemType x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
	{
		return false;//������
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;//����ƶ�һ��
	return true;

}

//����
bool DeQueue(SqQueue& Q, ElemType &x)
{
	if (Q.front == Q.rear)//�涨�õ�
	{
		return false;
	}

	x = Q.data[Q.front];//�Ƚ��ȳ�
	Q.front = (Q.front + 1) % MaxSize;

	return true;

}



int main()
{
	SqQueue Q;
	bool ret;
	ElemType element;
	IniQueue(Q);//��ʼ��ѭ������

	ret = isEmpty(Q);
	if (ret)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("���в�Ϊ��\n");
	}


	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	ret = EnQueue(Q, 6);
	ret = EnQueue(Q, 7);

	if (ret)
	{
		printf("��ӳɹ�\n");
	}
	else
	{
		printf("���ʧ��\n");
	}
	
	//����
	ret = DeQueue(Q, element);
	if (ret)
	{
		printf("���ӳɹ�:%d\n", element);
	}
	else
	{
		printf("����ʧ��\n");
	}

	return 0;
}