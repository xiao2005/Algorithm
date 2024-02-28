#pragma once
#include "Lnode.h"
class LLinkList
{
public:
	Lnode* head;
public:
	LLinkList();
	Status Init();                                 //��ʼ��
	Status Clear();                                  //�������
	Lnode* CreateNode(Datatype val = 0);                                  //�������
	Status InsertAfter(int index, Datatype uin);
	Status InsertBefore(int index, Datatype uin);
	Status HeadInsert(Datatype);
	Status TailInsert(Datatype);
	Status Delete(Datatype uin);
	void PrintList();
	int   PtrToIndex(Datatype uin);
	Lnode* IndexToPtr(int index);
	int GetLen();
};

