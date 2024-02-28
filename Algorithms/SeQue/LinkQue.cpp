#include "LinkQue.h"
#include <iostream>
LinkQue::LinkQue() :front{ new node(0) }, rear{ new node(0)},len{0}{}

bool LinkQue::IsEmpty() const
{
	if (len == 0) return 1;
	return 0;
}

bool LinkQue::EnQue(int _data,int _pri)
{
	node* uin = new node(_data,_pri);
	if(!rear->next)
	{
		front->next = rear->next = uin;
		len++;
		return 1;
	}
	uin->next = rear->next->next;
	rear->next->next = uin;
	rear->next = uin;
	len++;
	return 1;	
}

bool LinkQue::OutQue(int& _rt)
{
	if (len == 0) return 0;
#if 0
	_rt = front->next->data;
	node* tmp = front->next;
	front->next = tmp->next;
	if (!front->next)
	{
		rear->next = nullptr;
	}
	len--;
	delete tmp;
	return 1;
#endif
	


}

void LinkQue::PrintQueue()
{
	if (len == 0) return ;
	node* tmp = front->next;
	while(tmp)
	{
		std::cout << tmp->data;
		if (tmp->next) std::cout << "->";
		tmp = tmp->next;
	}
	std::cout << std::endl;
}

bool LinkQue::Clear()
{
	if (len == 0) return 0;
	
	front = front->next;
	node* tmp = front;
	while(front)
	{
		front = front->next;
		delete tmp;
		tmp = front;
	}
	front = new node;
	rear->next = nullptr;
	len = 0;
	return 1;
}
