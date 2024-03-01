#include "student.h"

student::student() : name{"NULL"},grade{score(0)}
{
}

student::student(const string& _name, const score& _grade) :name{ _name }, grade{ _grade }, t2{32}, t1{ t2 }
{
}

student::student(const string& _name, const int n): name { "_name" }, grade{ score(n) }
{
}

void student::Show() const
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "t1:" << t1 << std::endl;
	std::cout << "t2:" << t2 << std::endl;
	if(grade.size() > 0)
		std::cout << "GPA :" << grade.sum()/grade.size() << std::endl; //注意分母不是0
}

double& student::operator[](int i)
{

	if (i >= grade.size()) 
	{
		std::cout << "越界了!" << std::endl;
		return grade[0]; 
	}
	return grade[i];
}

std::ostream& operator<<(std::ostream& _out, student& stu)
{
	int len = stu.grade.size();
	for(int i =0;i<len;i++)
	{
		_out << stu[i] << " ";
	}
	_out << std::endl;
	return _out;
}

std::istream& operator>>(std::istream& _in, student& stu)
{
	_in >> stu.name;
	return _in;
}
