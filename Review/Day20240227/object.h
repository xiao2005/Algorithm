#pragma once
#include <iostream>
#include<string>
using std::string;
class MoveObject
{
	int speed;
	int hp;
	string name;
public:
	MoveObject(int _speed = 0,int hp = 0,const string& _name = "NONE");  //默认构造函数
	int Gethp()    const;
	int GetSpeed() const;
	virtual void ShowInfo() const;
	virtual ~MoveObject();
};

class User:public MoveObject
{
	int age;
public:
	User(int _speed = 0, int _hp = 0,int _age = 0, const string& _name = "NONE");
	User(const MoveObject& uin,int _age );
	virtual void ShowInfo() const;
	~User();
};



