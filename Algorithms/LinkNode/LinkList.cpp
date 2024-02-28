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
	ls1 = head;   //ָ���һ���ڵ�
	// Ŀ��: ��ÿ���ڵ�������ͷţ�
	while(ls1 != nullptr)
	{
		node* ls2;
		ls2 = ls1;
		ls1 = ls1->next;
		delete ls2;				
	}	
	head = nullptr;  //��headָ���µ�λ�û���ֱ�����óɿ�ָ��	
	std::cout << "�������\n";
	return 1;
}

node* LinkList::CreateNode(Datatype val)
{
	node* rt = new node(val);
	return rt;
}

Status LinkList::InsertAfter(int index, Datatype uin)
{
	
	node* tmp = IndexToPtr(index);   // �õ���Ӧ�Ľڵ�
	node* rt = CreateNode(uin);      // �����µĽڵ�
	if (rt == nullptr || tmp == nullptr) 
	{
		std::cout << "����\n";
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
	while (tmp->next != nullptr) tmp = tmp->next;    // ��tmpָ�����һ���ڵ�
	node* ls = CreateNode(uin);
	ls->next = tmp->next;
	tmp->next = ls;
	return 1;
}

Status LinkList::Delete(int index)
{
	node* tmp1 = IndexToPtr(index);     // �õ���Ӧ�Ľڵ�
	node* tmp2 = IndexToPtr(index-1);   // �õ���Ӧ��ǰһ�ڵ�
	if (tmp1 == nullptr )
	{
		std::cout << "����\n";
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
	std::cout << "��ӡ����\n";
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
		std::cout << "�����ڸ��±�\n";
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


