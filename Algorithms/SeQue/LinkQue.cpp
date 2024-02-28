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
	int max{-1};
	int index{-1};
	node* tmp = front->next;          // 指向首元素
	node* out = front->next;          //记录优先级最高的那一个
	node* last = front->next;          //记录倒数第二个
	for(int i = 0;i < len;i++)
	{
		if (tmp->pri > max)          // 更新最大值和对应的优先元素及其标号
		{
			max = tmp->pri;
			out = tmp;
			index = i;
		}
		if (i == len - 2) last = tmp;
		tmp = tmp->next;
	}
	_rt = out->data;
	if(index == 0)
	{
		tmp = front->next;		
		front->next = tmp->next;				   // 指向第一个元素的后面一个元素
		if (!front->next) rear->next = nullptr;    //只有一个元素时出列
		delete tmp;
	}
	else if(index == len - 1)    //出列最后一个元素
	{
		rear = last;
		last->next = nullptr;
		delete out;
	}
	else
	{
		last = front;
		while (last->next != out) last = last->next;  // 找到出列前面的那一个
		last->next = out->next;
		delete out;
	}
	len--;
	
	return 1;

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
