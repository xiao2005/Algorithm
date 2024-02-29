#pragma once
#include <iostream>
class MoveObject    // ������
{
	
	int x;
	int y;
public:
	MoveObject(int _v,int _x,int _y);
	int v;
	void GetPosi() const;    // ���麯�� 
	int GetSpeed() const;    // ���麯�� 
	virtual void ShowInFo() const = 0;    // ���麯�� 
	virtual ~MoveObject()           //��������Ҫ��������virtual
	{
		std::cout << "MoveObejct����������������\n";
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

