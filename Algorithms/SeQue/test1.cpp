#include <iostream>
#include "SeQue.h"
#include "LinkQue.h"
int main()
{
#if 0
	LinkQue* Q1 = new LinkQue;
	int re{};
	Q1->PrintQueue();
	for (int i = 1; i <= 34; i++) Q1->EnQue(i);
	Q1->PrintQueue();
	for (int i = 1; i <= 10; i++) Q1->OutQue(re);
	Q1->PrintQueue();
	Q1->Clear();
	Q1->PrintQueue();
	for (int i = 1; i <= 34; i++) Q1->EnQue(i);
	Q1->PrintQueue();
#endif
	SeQue q1;
	int tmp{};
	for (int i = 1; i <= 32; i++) q1.EnQue(i);
	q1.PrintQueue();
	for (int i = 1; i <= 12; i++) 
	{
		q1.OutQue(tmp);
		std::cout << "出列的元素是:" << tmp << std::endl;
	}
	q1.PrintQueue();
	for (int i = 1; i <= 32; i++) q1.EnQue(i);
	q1.PrintQueue();
	for (int i = 1; i <= 12; i++)
	{
		q1.OutQue(tmp);
		std::cout << "出列的元素是:" << tmp << std::endl;
	}
	q1.PrintQueue();
}
