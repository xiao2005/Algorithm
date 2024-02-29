#include "Cd.h"

Cd::Cd(const char* s1, const char*s2,int n,double x):selections{n},playtime{x}
{

	// 第一个问题，这个数组应该不要动态分配
	int i{};
	for (i = 0; s1[i]; i++) performers[i] = s1[i];
	performers[i] = s1[i];
	for (i = 0; s2[i]; i++) label[i] = s2[i];
	label[i] = s2[i];
	std::cout << "完成Cd的构造函数!\n";
}

Cd::Cd(const Cd& d)
{
	*this = d;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	std::cout << "Performers:" << performers << std::endl;
	std::cout << "Label     :" << label << std::endl;
	std::cout << "selections:" << selections << std::endl;
	std::cout << "playtime  :" << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	selections = d.selections;
	playtime = d.playtime;
	int i{};
	for (i = 0; d.performers[i]; i++) performers[i] = d.performers[i];
	performers[i] = d.performers[i];
	for (i = 0; d.label[i]; i++) label[i] = d.label[i];
	label[i] = d.label[i];
	return *this;
}

Classic::Classic(const char* s1, const Cd& uin):Cd(uin)
{
	int i{};
	for (i = 0; s1[i]; i++) description[i] = s1[i];
	description[i] = s1[i];
}

void Classic::Report() const
{
	std::cout << "Description:" << description << std::endl;
	Cd::Report();
}
