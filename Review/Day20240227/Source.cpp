//�̳кͶ�̬�ļ����ʣ��ڴ��С�˴洢��ʽ,�麯����ʵ��

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
	//1.��С�˴洢
	unsigned int a{0x12345678};
	char* p = (char*) & a;
	for (int i = 0; i < 4; i++) std::cout << std::hex << (int)*p++ << std::endl;
    //���Կ����Ƿ��Ŵ洢��
#endif


	//2.�̳кͶ�̬
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
	User user{ 18, 23, 23, "����" };
	MoveObject* test = &user;
	test->ShowInfo();
	std::cout << "User��ַ:" << &user << std::endl;
	std::cout << "test��ַ:" << test << std::endl;
	std::cout << "User�Ĵ�С:" << sizeof(User) << std::endl;
	std::cout << "MoveObject�Ĵ�С:" << sizeof(MoveObject) << std::endl;
	std::cout << "test2�Ĵ�С:" << sizeof(test2 ) << std::endl;
}