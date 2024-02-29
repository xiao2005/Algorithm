#include "LinkQue.h"

LinkQue::LinkQue() :front{ new node }, rear{ new node }, len{ 0 }
{}



bool LinkQue::InQue(int _data, node* _next, void(*uin)(void* data))
{
    node* tmp = new node(_data,_next,uin);
    if (!tmp) return 0;
    if (!rear->next)
    {
        front->next = tmp;
        rear->next = tmp;
        tmp->next = nullptr;


    }
    else
    {
        
        rear->next->next = tmp;
        rear->next = tmp;
        tmp->next = nullptr;

    }
    len++;
    return 1;
}

void LinkQue::ShowQue() const
{
    if (!front) return;
    node* tmp = front->GetNext();
    for (int i = 0; i < len; i++)
    {
        std::cout << tmp->Getdata();
        if (i != len - 1)
            std::cout << "->";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

bool LinkQue::OutQue()
{
    node* tmp = front->next;
    if (!rear->next) return 0;
    front->next = front->next->next;
    if (!front->next) rear->next = nullptr;
    tmp->Do();
    delete tmp;
    len--;
    
    return 1;
}
