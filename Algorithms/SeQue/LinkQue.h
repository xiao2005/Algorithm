#pragma once
extern const int Max;
#include "node.h"
class LinkQue
{
	node* front;
	node* rear;
	int len;
	
	
public:
	LinkQue();                      // initialize 
	bool IsEmpty() const;
	
	bool EnQue(int _data,int _pri = 0);
	bool OutQue(int& _rt);
	void PrintQueue();
	
	bool Clear();
};

