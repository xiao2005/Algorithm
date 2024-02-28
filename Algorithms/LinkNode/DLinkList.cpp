#include "DLinkList.h"
#include <iostream>
DLinkList::DLinkList():head{new Dnode}{}  // ����ͷ�ڵ�

bool DLinkList::InsertHead(int _data)
{
    if (!head) return false;             //������
    Dnode* tmp = new Dnode(_data);   //������������ݽڵ�
    tmp->next = head->next;
    tmp->pre = head;
    head->next = tmp;
    return true;
}

bool DLinkList::InsertTail(int _data)
{
    if (!head) return false;             //������
    Dnode* tmp = new Dnode(_data);   //������������ݽڵ�
    Dnode* ls = head;                    // ָ��ͷ�ڵ㣬Ŀ���ҵ����һ���ڵ�
    while(ls->next) ls = ls->next;        //�ҵ����һ���ڵ�
    ls->next = tmp;
    tmp->next = nullptr;
    tmp->pre = ls;
    return true;
    
}

bool DLinkList::Insert(int index, int _data)
{
    
    if (!head || !head->next) return false;             //������
    Dnode* tmp = new Dnode(_data);   //������������ݽڵ�
    //Dnode* ls = head->next;                    // ָ��ͷ�ڵ�
    //while (ls && ( --index > 0)) ls = ls->next;   //�ҵ��±�index�Ľڵ�  
    //if (!ls || (index < 0)) return false;     //�±곬�˻�Ϊ����
    Dnode* ls{};
    if (!GetData(index, ls)) return 0 ;
    tmp->next = ls;
    tmp->pre = ls->pre;
    ls->pre->next = tmp;   // Ҫע�⣡��������
    ls->pre = tmp;
    // һ���޸��ĸ���ǰһ���ڵ��next���ýڵ��pre��tmp��next��pre
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
    if (!head || !head->next)return false;   //����Ϊ��
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
