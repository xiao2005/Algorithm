#pragma once
class heap
{
	int* arr;
	int  cnt;
	int  capacity;
	bool sort();
public:
	heap(int*,int size);     // �ѵĹ���
	void add(int data);      // ����
	int getcnt() const;

};

