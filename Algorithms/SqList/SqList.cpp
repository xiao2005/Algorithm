#include "SqList.h"
SqList::SqList()
{
	len = 0;
	Ele = new Datatype[MAXSIZE];
}

SqList::~SqList()
{
	len = 0;
}

Status   SqList::isEmpty() const
{
	if (len) return false;
	return true;
}
int    SqList::Getlen() const
{
	return len;
}

Datatype SqList::GetEle(int index) const
{
	if (index < 0 || index > len - 1) std::cout << "获取失败" << std::endl;
	else return Ele[index];
	return 0;
}

Status   SqList::Insert(int index, Datatype& uin)
{
	if (len == 0) Ele[0] = uin; // 没有元素时插入
	else if (index >= 0 && index <= len)  // 在合理的范围内
	{
		if (index != len) 
			for (int i = len; i >= index + 1; i--) Ele[i] = Ele[i - 1]; //index后面的元素后移
		Ele[index] = uin;
		len++;
		if (len == MAXSIZE)
		{
			MAXSIZE *= 2;
			Datatype* ls = Ele;
			Ele = new Datatype[MAXSIZE]{};
			Copy(ls);
			free(ls);
			ls = nullptr;
		}
		return OK;
	}
	
	len++;
	return OK;
	
}

Status   SqList::Insert(int index, Datatype&& uin)
{
	if (len == 0) Ele[0] = uin; // 没有元素时插入
	else if (index >= 0 && index <= len)  // 在合理的范围内
	{
		if (index != len)
			for (int i = len; i >= index + 1; i--) Ele[i] = Ele[i - 1]; //index后面的元素后移
		Ele[index] = uin;
		len++;
		if (len == MAXSIZE)
		{
			MAXSIZE *= 2;
			Datatype* ls = Ele;
			Ele = new Datatype[MAXSIZE]{};
			Copy(ls);
			free(ls);
			ls = nullptr;
		}
		return OK;
	}

	len++;
	return OK;

}

Status   SqList::Delete(int index, Datatype& show)
{
	if ((len == 0) || (index < 0) || (index >= len)) return ERROR; // 超过边界或者本身没有元素 删除错误
	else
	{
		show = Ele[index];  // 接收删除的元素
		for (int i = index; i < len - 1; i++) Ele[i] = Ele[i + 1];  //index后元素前移
		len--;
		return OK;
	}
}

Status   SqList::ShowEle() const
{
	if (len == 0) return ERROR;
	for(int i = 0 ;i < len ;i++)
	{
		std::cout << Ele[i];
		if (i != len - 1) std::cout << "->";
	}
	std::cout << "\n" << std::endl;
	return OK;
}

void SqList::Copy(const Datatype* uin)
{
	for (int i = 0; i < len; i++) Ele[i] = uin[i];
}