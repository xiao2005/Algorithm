#pragma once
#include "Dnode.h"
class DLinkList
{
	Dnode* head;
public:
	DLinkList();                               //≥ı ºªØ
	bool InsertHead(int  _data);               //Õ∑≤Â
	bool InsertTail(int  _data);
	bool Insert    (int index,int _data);
	bool DelByData (int  _data);
	bool DelByIndex(int index);
	bool ClearList ();
	bool GetData   (int index, Dnode*& out);
	bool GetIndex  (int _data, int& out);
	bool PrintList ();

};

