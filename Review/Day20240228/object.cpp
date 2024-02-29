#include "object.h"
//

MoveObject::MoveObject(int _v, int _x, int _y) :v{_v},x{_x},y{_y}
{
	std::cout << "MoveObejct的构造函数被调用\n";
}

void MoveObject::GetPosi() const
{
	std::cout << "x:" << x << std::endl;
	std::cout << "y:" << y << std::endl;
}

int MoveObject::GetSpeed() const
{
	return v;
}

Npc::Npc(const MoveObject& _base,const  char* uin):MoveObject(_base),name{(char*)uin}
{
	std::cout << "Npc的构造函数\"1\"被调用\n";
}

Npc::Npc(int _v, int _x, int _y, const char* uin):MoveObject(_v,_x,_y), name{ (char*)uin }
{
	std::cout << "Npc的构造函数\"2\"被调用\n";
}

void Npc::ShowInFo() const
{
	std::cout << "Speed:" << GetSpeed() << std::endl;
	std::cout << "Name :" << name       << std::endl;
}
