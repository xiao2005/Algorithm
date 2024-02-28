#include <iostream>
//#include "LLinkList.h"
//#include "LinkList.h"
#include "DLinkList.h"

int main()
{
	// 双向链表的测试
	DLinkList L;
	for (int i = 1; i <= 10; i++) L.InsertTail(i);
	L.PrintList();
	L.Insert(1, 900);
	L.PrintList();
	while(1)
	{
		int pos, data;
		std::cin >> pos >> data;
		L.Insert(pos,data);
		L.PrintList();
	}



















//	int n, m, out{}, index{};  // out是数出去的人,index 是编号
//	std::cin >> n >> m;
//	LinkList L;
//	for (int i = 1; i <= n; i++) L.InsertAfter(i - 1, i);
//
//	for(int i = 0 ;i < n-1;i++)    // 每一轮
//	{
//#ifdef _DEBUG
//		std::cout << "index :" << index << std::endl;
//		L.PrintList();
//		//std::cout << L.GetLen() << std::endl;
//#endif	
//		out = 0;
//		do
//		{
//			index = (index + 1) % ( n-i ) ;
//			if (index == 0) index = n - i;
//		} while (++out < m);
//		
//		L.Delete(index);
//		index--;
//
//	}
//#ifdef _DEBUG
//	L.PrintList();
//	std::cout << L.GetLen() << std::endl;
//#endif
//	L.PrintList();
//	//system("pause");
//	n = 10;
//	L.Clear();
//	L.Init();
//	L.PrintList();
//	for(int i =0;i<10;i++)
//	{
//		L.HeadInsert(i);
//		L.PrintList();
//	}
//	
//	L.PrintList();
//	L.Clear();
//	L.Init();
//	L.HeadInsert(1);
//	L.PrintList();
//
//	LinkList test;
//	for (int i = 1; i < 11; i++) test.HeadInsert(i);
//	test.PrintList();
//	test.Clear();
//	test.Init();
//	test.PrintList();
//	int* p = new int{12};
//	int* a = p;
//	delete p;
//	std::cout << *a << std::endl;
	/*LinkList test;
	for (int i = 1; i < 11; i++) test.TailInsert(i*3);
	test.PrintList();
	std::cout << test.PtrToIndex(21) << std::endl;
	test.Clear();
	test.PrintList();
	test.Init();
	
	test.PrintList();*/
	//LLinkList test1;
	//
	//int n, m;
	//std::cin >> n >> m;
	//
	//for (int i = 1; i <= n; i++) test1.TailInsert(i);
	//Lnode* tmp = test1.head->next;
	//Lnode* ls = test1.head;
	//for(int i = 1;i < n ;i++)
	//{
	//	int index{};
	//	while(index++ < m)
	//	{	
	//		ls = tmp;
	//		tmp = tmp->next;
	//		if (tmp == test1.head) tmp = test1.head->next;
	//		
	//	}
	//	//std::cout << "次数:" << i << std::endl;
	//	//if (i == 4) std::cout << ls->data << std::endl;
	//	test1.Delete(ls->data);
	//	
	//}
	//test1.PrintList();
	
	

}