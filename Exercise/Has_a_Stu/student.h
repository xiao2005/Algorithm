#pragma once
#include <iostream>
#include <valarray>
#include <string>

//������д
using std::string;
typedef std::valarray<double> score;

//ѧ����
//��Ա����: ���֣�һϵ�гɼ�
//��Ա����: ��ʼ��,��ʾ��Ϣ�����ѧ����ƽ���ɼ���,����ѧ�������ֺͳɼ������ѧ����ƽ���ɼ�
class student
{
	string name;
	score grade;
	int t2;
	int t1;
	
public:
	student();   // Ĭ��
	student(const string& _name , const score& _grade);        // ���ּӳɼ�����
	student(const string& _name , const int n  );              // ���ּӳɼ�����
	~student(){}
	void Show() const;    //չʾ���ֺ�ƽ���ɼ�
	double& operator[](int i);   //���ʳɼ�

	friend std::ostream& operator<<(std::ostream& _out,student& stu);
	friend std::istream& operator>>(std::istream& _in,student& stu);

};

