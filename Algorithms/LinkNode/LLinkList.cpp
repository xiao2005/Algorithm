#include "LLinkList.h"
LLinkList::LLinkList() :head{ new Lnode } 
{ 
	head->next = head;  //实现链表的循环
}

Status LLinkList::TailInsert(Datatype uin)
{
	if (!head) return 0;  //表头为空
	Lnode* tmp = new Lnode(uin); 
	Lnode* ls = head;
	while (ls->next != head) ls = ls->next; // 找到最后一个
	tmp->next = ls->next;
	ls->next = tmp;
	return 1;
}

Status LLinkList::Delete(Datatype uin)
{
	// 这里实
	if (!head) return 0;
	Lnode* tmp = head->next;
	Lnode* ls{};
	while ((tmp != head) && (tmp->data != uin))
	{
		if (tmp->next->data == uin) ls = tmp;
		tmp = tmp->next;
		
	}
	
	if (tmp == head)  return 0; //没找到
	if(tmp == head->next)
	{
		ls = head;
	}
	
	ls->next = tmp->next;
	//std::cout << "data:" << tmp->data << std::endl;
	delete tmp;
	return 1;
}

void LLinkList::PrintList()
{
	if (!head) return;
	Lnode* tmp = head;
	while (tmp->next != head)
	{
		tmp = tmp->next;
		std::cout << tmp->data;
		if (tmp->next != head) std::cout << "->";
		else break;
		
	}
	std::cout << std::endl;
}
