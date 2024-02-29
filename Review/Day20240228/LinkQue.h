#pragma once
#include "node.h"
#include <iostream>
class LinkQue
{
    node* front;
    node* rear;
    int len;
public:
    LinkQue();
    bool InQue(int _data, node* _next, void(*uin)(void* data));
    void ShowQue() const;
    bool OutQue();
};