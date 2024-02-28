#pragma once
const int Max{ 30 };
class SeQue
{
	int data[Max];               // array for data
	int front    ;				 // start
	int rear     ;               // point to the end
	int len;
public:
	SeQue();                      // initialize 
	bool IsEmpty() const;				  
	bool IsFull()  const;
	bool EnQue(int _data);
	bool OutQue(int& _rt);
	void PrintQueue();
	bool GetHead(int& _rt);
	bool GetLenth(int& _rt);
	bool Clear();
};

