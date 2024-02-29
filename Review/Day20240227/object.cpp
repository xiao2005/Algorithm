#include "object.h"

MoveObject::MoveObject(int _speed, int _hp , const string& _name )
	:speed{_speed}
	,hp   { _hp  }
	,name {_name }
{
	std::cout << "MoveObject的构造函数被调用!\n\n";
} // 默认构造函数调用
int MoveObject::Gethp() const
{
	return hp;
}

int MoveObject::GetSpeed() const 
{
	return speed;
}

MoveObject::~MoveObject()
{
	std::cout << "MoveObject的析构函数被调用!\n\n";
}

void MoveObject::ShowInfo() const
{
	std::cout <<"Speed: " << speed << std::endl;
	std::cout <<"Hp   : " << hp << std::endl;
	std::cout <<"Name : " << name << std::endl;
}

User::User(int _speed, int _hp, int _age, const string& _name):MoveObject(_speed,_hp,_name),age{_age}
{
	std::cout << "User的默认构造函数1被调用\n\n" << std::endl;
}

User::User(const MoveObject& uin, int _age):MoveObject(uin),age{_age}
{
	std::cout << "User的默认构造函数2被调用\n\n" << std::endl;
}

void User::ShowInfo() const
{
	std::cout << "age  : " << age << std::endl;
	MoveObject::ShowInfo();	
}

User::~User()
{
	std::cout << "User的析构函数2被调用\n" << std::endl;
}
