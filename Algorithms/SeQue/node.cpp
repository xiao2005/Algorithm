#include "node.h"

node::node(int val,int _pri)
{
	data = val;
	next = nullptr;
	pri = _pri;
}