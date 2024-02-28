#pragma once
#include <iostream>
typedef int Datatype;
typedef bool Status;
class node
{
	friend class LinkList;
	Datatype data;
	node*    next;
public:
	node(int val = 0);
};

