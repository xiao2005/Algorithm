#include "node.h"
node::node(int _data, node* _next,void(*uin)(void*data) )
    : data{ _data }
    , next{ _next }
    , p   {uin}
{}

void node::Do() const
{
    p((void*)5);
}

int node::Getdata() const
{
    return data;
}

node* node::GetNext()
{
    return next;
}