#include <iostream>
#include "SqList.h"

int main()
{
	SqList test;
	/*for(int i = 1; i < 11;i++)
	{
		test.Insert(0, i);
	}
	test.ShowEle();*/
	for (int i = 1; i < 800; i++)
	{
		test.Insert(0, i);
	}
	test.Insert(0, 100);
	test.ShowEle();
	std::cout << test.Getlen() << std::endl;
	//test.Insert(99, 231);
	//std::cout << test.MAXSIZE << std::endl;
	test.ShowEle();
	/*Datatype showEle {} ;
	showEle = test.GetEle(6);
	std::cout << showEle << std::endl;
	test.Delete(6, showEle);
	std::cout << showEle << std::endl;
	std::cout << test.Getlen() << std::endl;
	std::cout << std::boolalpha << test.isEmpty() << std::endl;
	test.ShowEle();*/

}