#include <iostream>
#include "SeQue.h"
#include "LinkQue.h"
int main()
{
	LinkQue L;
	L.EnQue(1,2);
	L.EnQue(12,4);
	L.EnQue(13,12);
	L.EnQue(112,3);
	L.EnQue(123,2);
	L.EnQue(121,34);
	L.EnQue(1243,55);
	L.EnQue(31,2);
	L.EnQue(41,1);
	L.EnQue(131,2130);

	L.PrintQueue();
	int rt;
	for(int i =0;i<4;i++)
	{
		L.OutQue(rt);
		std::cout << "第" << i << "次出列的元素是:" << rt << std::endl;
		L.PrintQueue();
	}
}
