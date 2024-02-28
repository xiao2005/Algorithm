#pragma once
class Dnode
{
	friend class DLinkList;
	int data;
	Dnode* next;
	Dnode* pre;
public:
	Dnode(int uin = 0);
	

};

