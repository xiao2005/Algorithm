#include "LinkList.h"

LinkList::LinkList():head{new node}{}

Status LinkList::Init()
{
	head = new node{};
	return 1;
}

Status LinkList::Clear()
{
	node* ls1;
	ls1 = head;   //指向第一个节点
	// 目的: 将每个节点的数据释放，
	while(ls1 != nullptr)
	{
		node* ls2;
		ls2 = ls1;
		ls1 = ls1->next;
		delete ls2;				
	}	
	head = nullptr;  //让head指向新的位置或者直接设置成空指针	
	std::cout << "清除调用\n";
	return 1;
}

node* LinkList::CreateNode(Datatype val)
{
	node* rt = new node(val);
	return rt;
}

Status LinkList::InsertAfter(int index, Datatype uin)
{
	
	node* tmp = IndexToPtr(index);   // 得到对应的节点
	node* rt = CreateNode(uin);      // 创建新的节点
	if (rt == nullptr || tmp == nullptr) 
	{
		std::cout << "错误\n";
		return 0;
	}
	rt -> next = tmp -> next;
	tmp->next = rt;
	return 1;
}

Status LinkList::InsertBefore(int index, Datatype uin)
{
	if (InsertAfter(index - 1, uin))return 1;
	return 0;
}

Status LinkList::HeadInsert(Datatype uin)
{
	if (!head) return 0;
	node* tmp = CreateNode(uin);
	if (!tmp) return 0;
	tmp->next = head->next;
	head ->next = tmp;
	return 1;
}

Status LinkList::TailInsert(Datatype uin)
{
	if (!head) return 0;
	node* tmp = head;
	while (tmp->next != nullptr) tmp = tmp->next;    // 让tmp指向最后一个节点
	node* ls = CreateNode(uin);
	ls->next = tmp->next;
	tmp->next = ls;
	return 1;
}

Status LinkList::Delete(int index)
{
	node* tmp1 = IndexToPtr(index);     // 得到对应的节点
	node* tmp2 = IndexToPtr(index-1);   // 得到对应的前一节点
	if (tmp1 == nullptr )
	{
		std::cout << "错误\n";
		return 0;
	}
	tmp2->next = tmp1->next;
	delete tmp1;
	tmp1 = nullptr;
	return 1;
}

void LinkList::PrintList()
{
	
	if (!head) return;
	std::cout << "打印调用\n";
	std::cout << "head:" << head << std::endl;
	node* tmp = head->next;
	while (tmp != nullptr) 
	{ 
		std::cout << tmp->data ;
		if (tmp->next != nullptr) std::cout << "->";
		else break;
		tmp = tmp->next;
	}
	std::cout << std::endl;
}

int LinkList::PtrToIndex(Datatype uin)
{
	if (!head) return 999999;
	node* tmp = head->next;
	int index{1};
	while(    tmp  && tmp->data != uin )
	{
		index++;
		tmp = tmp->next;
	}
	if(!tmp) return 999999;
	return index;
}

node* LinkList::IndexToPtr(int index)
{
	if (head == nullptr) return nullptr;
	if (index == 0) return head;
	int i{1};
	node* tmp = head->next;
	while(tmp!= nullptr && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if(tmp == nullptr || i > index)
	{
		std::cout << "不存在该下标\n";
		return nullptr;
	}
	return tmp;
}

int LinkList::GetLen()
{
	int i{};
	node* tmp = head;
	while(tmp->next != nullptr)
	{
		i++;
		tmp = tmp->next;
	}
	return i;
}


