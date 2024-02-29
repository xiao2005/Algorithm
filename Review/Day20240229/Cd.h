#pragma once
#include <iostream>
class Cd
{
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char* s1, const  char* s2, int n, double x);
	Cd(const Cd& d);
	Cd() = default;
	virtual ~Cd();
	virtual void Report() const;   // չʾ���е���Ϣ
	Cd& operator=(const Cd& d);
};


class Classic:public Cd
{
	char description[50];
public:
	Classic(const char*s1,const Cd& uin);
	void Report() const override;
};

