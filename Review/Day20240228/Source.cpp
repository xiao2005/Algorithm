// 循环队列，任务队列，优先队列

#include "LinkQue.h"
#include "object.h"
void test1(void*)
{
    std::cout << "test1\n";
}

void test2(void*)
{
    std::cout << "test2\n";
}

void test3(void*)
{
    std::cout << "test3\n";
}

class A 
{
public:
    virtual void test()
    {
        std::cout << "test\n";
    }

    virtual void test(int a)
    {
        std::cout << "test int \n";

    }
    virtual void test(float b)
    {
        std::cout << "test float\n";
    }
    virtual~A(){}
};


class Aplus:public A
{
public:
    virtual void test()
    {
        std::cout << "test in plus\n";
    }
    /*
    virtual void test(int a)
    {
        std::cout << "test int \n";

    }
    virtual void test(float b)
    {
        std::cout << "test float\n";
    }
    */
};



int main()
{
    //这是任务队列的实现
#if 0
    LinkQue L;
    L.InQue(1, nullptr, test1);
    L.InQue(2, nullptr, test2);
    L.InQue(3, nullptr, test3);
    L.ShowQue();
    L.OutQue();
    L.OutQue();
    L.OutQue();
    L.ShowQue();
#endif

    //虚函数机制
#if 0
    std::cout << "Npc的大小:" << sizeof(Npc) << std::endl;
    std::cout << "Npc2的大小:" << sizeof(Npc2) << std::endl;

    Npc test1(1, 23, 2, "无敌");
    MoveObject* p2 = &test1;
    p2->ShowInFo();
    Npc* p = &test1;

    std::cout << "test1的地址" << p << std::endl;
    std::cout << "p2的地址" << p2 << std::endl;

    std::cout << std::hex << *(int*)p << std::endl;
    std::cout << "v的地址    " << &p->v << std::endl;
    void (*pf)() = (void(*)()) * (int*)p;
    pf();
#endif
    A* t1 = new Aplus;
    t1->test(2);
    Aplus a;
    a.test();
}