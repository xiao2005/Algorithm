#pragma once
#include <iostream>
using Status   = bool; // 操作是否成功
using Datatype = int;  // 元素的类型
#define OK    1    // 成功
#define ERROR 0	   // 失败
class SqList
{
	void Copy(const Datatype* uin);   // 重新分配空间后复制
	int MAXSIZE{ 100 };  // 存放元素的最大个数
	Datatype* Ele;			  // 存放元素的数组
	int len;                          // 当前元素个数
public:
	//int MAXSIZE{ 100 };  // 存放元素的最大个数
	SqList();									//初始化
	~SqList();									//删除
	int      Getlen() const;					//得到长度
	Datatype GetEle(int index) const;			//得到指定下标的元素
	Status   Insert(int index,Datatype& uin);   //在指定下标处插入元素
	Status   Insert(int index, Datatype&& uin);
	Status   Delete(int index,Datatype& show);  //在指定下标处删除元素,并有一个参数接收删除元素
	Status   ShowEle() const;					//展示元素
	Status   isEmpty() const;                   //是否为空
	
};


