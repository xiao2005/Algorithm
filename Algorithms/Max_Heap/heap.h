#pragma once
class heap
{
	int* arr;
	int  cnt;
	int  capacity;
	bool sort();
public:
	heap(int*,int size);     // 堆的构建
	void add(int data);      // 加入
	int getcnt() const;

};

