#pragma once
#include "node.h"
class LinkList
{
	node* head;
public:
	LinkList();
	Status Init();                                                //��ʼ��
	Status Clear();                                               //�������
	node* CreateNode(Datatype val = 0);                           //�����ڵ�
	Status InsertAfter(int index,Datatype uin);					  //���
	Status InsertBefore(int index, Datatype uin);				  //ǰ��
	Status HeadInsert(Datatype);                                  //ͷ��
	Status TailInsert(Datatype);								  //β��
	Status Delete(int index);									  //ɾ���ñ��
	void PrintList();											  //��ӡ����
	int   PtrToIndex(Datatype uin);								  //�ڵ�õ����
	node* IndexToPtr(int index);								  //��ŵõ��ڵ�
	int GetLen();												  //�õ�����ĳ���
};

