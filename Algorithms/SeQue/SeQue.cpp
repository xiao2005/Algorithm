#include "SeQue.h"
#include <iostream>
SeQue::SeQue()
{
	len = front = rear = 0;
}

bool SeQue::IsEmpty() const
{
	if (len == 0) return 1;
	return 0;
}

bool SeQue::IsFull() const
{
	if (len == Max) return 1;
	return 0;
}

bool SeQue::EnQue(int _data)
{
	if(IsFull())
	{
		std::cout << "FULL!\n";
		return 0;
	}
	data[rear++] = _data;
	rear %= Max;
	len++;
	
	return 1;

}

bool SeQue::OutQue(int& _rt)
{
	if (IsEmpty()) return 0;
#if 0
	_rt = data[0];
	for (int i = 1; i < rear; i++) data[i - 1] = data[i];
	rear--;
	len--;
#endif
	GetHead(_rt);
	front = (front + 1) % Max;
	len--;
	 
	return 1;
	
}

void SeQue::PrintQueue()
{
	if(IsEmpty()) 
	{
		std::cout << "Empty!\n";
		return;
	}
	int index{};
	for (int i = 0; i < len; i++)
	{
		index = (i + front) % Max;
		std::cout << data[index];
		if (i < len - 1) std::cout << "->";

	}
	std::cout << std::endl;
}

bool SeQue::GetHead(int& _rt)
{
	if (IsEmpty())
	{
		std::cout << "Empty!\n";
		return 0;
	}
	_rt = data[front];
	return 1;
}

bool SeQue::GetLenth(int& _rt)
{
	_rt = len;
	return 1;
}

bool SeQue::Clear()
{
	if (!len) return 1;
	rear = front = len = 0;
	return 1;
}

