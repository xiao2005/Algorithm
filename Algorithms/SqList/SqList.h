#pragma once
#include <iostream>
using Status   = bool; // �����Ƿ�ɹ�
using Datatype = int;  // Ԫ�ص�����
#define OK    1    // �ɹ�
#define ERROR 0	   // ʧ��
class SqList
{
	void Copy(const Datatype* uin);   // ���·���ռ����
	int MAXSIZE{ 100 };  // ���Ԫ�ص�������
	Datatype* Ele;			  // ���Ԫ�ص�����
	int len;                          // ��ǰԪ�ظ���
public:
	//int MAXSIZE{ 100 };  // ���Ԫ�ص�������
	SqList();									//��ʼ��
	~SqList();									//ɾ��
	int      Getlen() const;					//�õ�����
	Datatype GetEle(int index) const;			//�õ�ָ���±��Ԫ��
	Status   Insert(int index,Datatype& uin);   //��ָ���±괦����Ԫ��
	Status   Insert(int index, Datatype&& uin);
	Status   Delete(int index,Datatype& show);  //��ָ���±괦ɾ��Ԫ��,����һ����������ɾ��Ԫ��
	Status   ShowEle() const;					//չʾԪ��
	Status   isEmpty() const;                   //�Ƿ�Ϊ��
	
};


