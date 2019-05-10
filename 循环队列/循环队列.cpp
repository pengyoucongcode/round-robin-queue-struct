// 循环队列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
#define MAXSIZE 20

typedef struct
{
	int *base;
	int front;
	int rear;
}SqQueue;

bool InitQueue(SqQueue &q)
{
	q.base = new int[MAXSIZE];
	if (!q.base) return false;
	q.front = q.rear = 0;
	return true;
}

void EnQueue(SqQueue &q, int *num,int len)
{
	if ((q.rear + 1) % MAXSIZE == q.front)cout << "队满" << endl;
	else if (len > MAXSIZE)
	{
		cout << "入队元素太多，超出队列空间" << endl;
		exit(0);
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			q.base[q.rear] = num[i];
			q.rear = (q.rear + 1) % MAXSIZE;
		}
		cout << "入队成功" << endl;
	}
}

int GetHead(SqQueue q)
{
	if (q.front != q.rear) return q.base[q.front];
}

int GetLength(SqQueue q)
{
	return(q.rear - q.front + MAXSIZE) % MAXSIZE;
}

void Display(SqQueue q)
{
	int length = GetLength(q);
	cout << "当前队列中元素个数为：" << length << "个,分别为：";
	for (int i = 0; i < length; i++)
	{
		cout << q.base[q.front]<<" ";
		q.front = (q.front + 1) % MAXSIZE;
	}
	cout << endl;
}

void DeQueue(SqQueue &q, int &out)
{
	if (q.front == q.rear)cout << "队空" << endl;
	else
	{
		out = q.base[q.front];
		q.front = (q.front + 1) % MAXSIZE;
		cout << "出队成功" << endl;
	}
}
int main()
{
	SqQueue q;
	if (InitQueue(q))
	{
		int *num, len;
		cout << "请输入要入队的元素个数：";
		cin >> len;
		cout << "请逐一输入：" << endl;
		num = new int[len];
		for (int i = 0; i < len; i++)cin >> num[i];
		EnQueue(q, num, len);
		Display(q);
		cout << "队头元素为：" << GetHead(q) << endl;
		int temp;
		DeQueue(q, temp);
		cout << "出队元素：" << temp << endl;
		Display(q);
		cout << "队头元素为：" << GetHead(q) << endl;
		int *num1, len1;
		cout << "请输入要入队的元素个数：";
		cin >> len1;
		cout << "请逐一输入：" << endl;
		num1 = new int[len1];
		for (int i = 0; i < len1; i++)cin >> num1[i];
		EnQueue(q, num1, len1);
		Display(q);

	}
	else
		cout << "队列创建失败！" << endl;
	return 0;
}

