#include "Dnode.h"
Dnode::Dnode(int uin) //初始化，数据，前后指针指向空
{
	data = uin;
	next = nullptr;
	pre  = nullptr;
}