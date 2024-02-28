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
	if (index < 0 || index > len - 1) std::cout << "��ȡʧ��" << std::endl;
	else return Ele[index];
	return 0;
}

Status   SqList::Insert(int index, Datatype& uin)
{
	if (len == 0) Ele[0] = uin; // û��Ԫ��ʱ����
	else if (index >= 0 && index <= len)  // �ں���ķ�Χ��
	{
		if (index != len) 
			for (int i = len; i >= index + 1; i--) Ele[i] = Ele[i - 1]; //index�����Ԫ�غ���
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
	if (len == 0) Ele[0] = uin; // û��Ԫ��ʱ����
	else if (index >= 0 && index <= len)  // �ں���ķ�Χ��
	{
		if (index != len)
			for (int i = len; i >= index + 1; i--) Ele[i] = Ele[i - 1]; //index�����Ԫ�غ���
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
	if ((len == 0) || (index < 0) || (index >= len)) return ERROR; // �����߽���߱���û��Ԫ�� ɾ������
	else
	{
		show = Ele[index];  // ����ɾ����Ԫ��
		for (int i = index; i < len - 1; i++) Ele[i] = Ele[i + 1];  //index��Ԫ��ǰ��
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