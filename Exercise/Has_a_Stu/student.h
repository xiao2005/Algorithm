#pragma once
#include <iostream>
#include <valarray>
#include <string>

//方便书写
using std::string;
typedef std::valarray<double> score;

//学生类
//成员属性: 名字，一系列成绩
//成员函数: 初始化,显示信息（输出学生的平均成绩）,输入学生的名字和成绩，输出学生的平均成绩
class student
{
	string name;
	score grade;
	int t2;
	int t1;
	
public:
	student();   // 默认
	student(const string& _name , const score& _grade);        // 名字加成绩数组
	student(const string& _name , const int n  );              // 名字加成绩个数
	~student(){}
	void Show() const;    //展示名字和平均成绩
	double& operator[](int i);   //访问成绩

	friend std::ostream& operator<<(std::ostream& _out,student& stu);
	friend std::istream& operator>>(std::istream& _in,student& stu);

};

