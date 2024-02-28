#include "DLinkList.h"
#include <iostream>
DLinkList::DLinkList():head{new Dnode}{}  // 创建头节点

bool DLinkList::InsertHead(int _data)
{
    if (!head) return false;             //空链表
    Dnode* tmp = new Dnode(_data);   //创建插入的数据节点
    tmp->next = head->next;
    tmp->pre = head;
    head->next = tmp;
    return true;
}

bool DLinkList::InsertTail(int _data)
{
    if (!head) return false;             //空链表
    Dnode* tmp = new Dnode(_data);   //创建插入的数据节点
    Dnode* ls = head;                    // 指向头节点，目的找到最后一个节点
    while(ls->next) ls = ls->next;        //找到最后一个节点
    ls->next = tmp;
    tmp->next = nullptr;
    tmp->pre = ls;
    return true;
    
}

bool DLinkList::Insert(int index, int _data)
{
    
    if (!head || !head->next) return false;             //空链表
    Dnode* tmp = new Dnode(_data);   //创建插入的数据节点
    //Dnode* ls = head->next;                    // 指向头节点
    //while (ls && ( --index > 0)) ls = ls->next;   //找到下标index的节点  
    //if (!ls || (index < 0)) return false;     //下标超了或为负数
    Dnode* ls{};
    if (!GetData(index, ls)) return 0 ;
    tmp->next = ls;
    tmp->pre = ls->pre;
    ls->pre->next = tmp;   // 要注意！！！！！
    ls->pre = tmp;
    // 一共修改四个，前一个节点的next，该节点的pre，tmp的next和pre
    return 1;
    
}

bool DLinkList::GetData(int index, Dnode*& out)
{
    if (!head || !head->next) return false;
    Dnode* tmp = head;
    while(tmp && index > 0 ) 
    {
        tmp = tmp->next;
        index--;
    }
    if (!tmp || index < 0) return false;
    out = tmp;
    return 1;
}

bool DLinkList::GetIndex(int _data, int& out)
{
    return false;
}

bool DLinkList::PrintList()
{
    if (!head || !head->next)return false;   //链表为空
    Dnode* tmp = head->next;
    do
    {
        std::cout << tmp->data;
        if (tmp->next) std::cout << "->";
        tmp = tmp->next;
    } while (tmp);
    std::cout << std::endl;
    return 1;
}
