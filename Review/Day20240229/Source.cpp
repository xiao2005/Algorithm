#include <iostream>
#include "Cd.h"

int main() 
{
	Cd disk1{"肖","无敌",123,2.3};
	Cd disk2{"时","美丽",1223,2.333};
	Cd disk3{disk2};
	disk1.Report();
	disk2.Report();
	disk3.Report();
	disk2 = disk1;
	disk2.Report();
	Classic C1{ "这是一个测试",disk2 };
	C1.Report();
	Cd* test = &C1;
	test->Report();
}