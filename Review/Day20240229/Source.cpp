#include <iostream>
#include "Cd.h"

int main() 
{
	Cd disk1{"Ф","�޵�",123,2.3};
	Cd disk2{"ʱ","����",1223,2.333};
	Cd disk3{disk2};
	disk1.Report();
	disk2.Report();
	disk3.Report();
	disk2 = disk1;
	disk2.Report();
	Classic C1{ "����һ������",disk2 };
	C1.Report();
	Cd* test = &C1;
	test->Report();
}