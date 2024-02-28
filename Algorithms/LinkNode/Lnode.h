#pragma once
#include <iostream>
typedef int Datatype;
typedef bool Status;
class Lnode
{
public:
	friend class LLinkList;
	Datatype data;
	Lnode* next;
public:
	Lnode(int val = 0);
};

