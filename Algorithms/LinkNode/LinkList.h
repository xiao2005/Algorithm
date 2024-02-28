#pragma once
#include "node.h"
class LinkList
{
	node* head;
public:
	LinkList();
	Status Init();                                                //初始化
	Status Clear();                                               //清空链表
	node* CreateNode(Datatype val = 0);                           //创建节点
	Status InsertAfter(int index,Datatype uin);					  //后插
	Status InsertBefore(int index, Datatype uin);				  //前插
	Status HeadInsert(Datatype);                                  //头插
	Status TailInsert(Datatype);								  //尾插
	Status Delete(int index);									  //删除该编号
	void PrintList();											  //打印链表
	int   PtrToIndex(Datatype uin);								  //节点得到编号
	node* IndexToPtr(int index);								  //编号得到节点
	int GetLen();												  //得到链表的长度
};

