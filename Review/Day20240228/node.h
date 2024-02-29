#pragma once
class node
{
    int   data;
    void (*p) (void*data);
public:
    int Getdata()  const;
    node* next;
    node* GetNext();
    node(int _data = 0, node* _next = nullptr, void(*uin)(void* data) = nullptr);
    void Do() const;
};