#pragma once
#include <iostream>
class MoveObject    // 抽象类
{
	
	int x;
	int y;
public:
	MoveObject(int _v,int _x,int _y);
	int v;
	void GetPosi() const;    // 纯虚函数 
	int GetSpeed() const;    // 纯虚函数 
	virtual void ShowInFo() const = 0;    // 纯虚函数 
	virtual ~MoveObject()           //析构函数要被声明成virtual
	{
		std::cout << "MoveObejct的析构函数被调用\n";
	}
};

class Npc :public MoveObject
{
	char*name;
public:
	Npc(const MoveObject&,const char* uin);
	Npc(int _v, int _x, int _y,const char* uin);
	void ShowInFo() const override;
};

class Npc2
{
	int v;
	int x;
	int y;
	char* name;
};

