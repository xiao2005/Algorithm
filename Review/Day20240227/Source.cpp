//继承和多态的简单性质，内存大小端存储方式,虚函数的实现

#include<iostream>
#include "object.h"
class test2
{
	int speed;
	int hp;
	string name;
};
int main()
{
#if 0
	//1.大小端存储
	unsigned int a{0x12345678};
	char* p = (char*) & a;
	for (int i = 0; i < 4; i++) std::cout << std::hex << (int)*p++ << std::endl;
    //可以看到是反着存储的
#endif


	//2.继承和多态
#if 0
	MoveObject obj1;
	//obj1.ShowInfo();

	User user1;
	//user1.ShowInfo();

	MoveObject* test = &obj1;
	test->ShowInfo();
	std::cout << std::endl;
	test = &user1;
	test->ShowInfo();
#endif
	User user{ 18, 23, 23, "逆天" };
	MoveObject* test = &user;
	test->ShowInfo();
	std::cout << "User地址:" << &user << std::endl;
	std::cout << "test地址:" << test << std::endl;
	std::cout << "User的大小:" << sizeof(User) << std::endl;
	std::cout << "MoveObject的大小:" << sizeof(MoveObject) << std::endl;
	std::cout << "test2的大小:" << sizeof(test2 ) << std::endl;
}