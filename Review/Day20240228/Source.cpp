// ѭ�����У�������У����ȶ���

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
    //����������е�ʵ��
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

    //�麯������
#if 0
    std::cout << "Npc�Ĵ�С:" << sizeof(Npc) << std::endl;
    std::cout << "Npc2�Ĵ�С:" << sizeof(Npc2) << std::endl;

    Npc test1(1, 23, 2, "�޵�");
    MoveObject* p2 = &test1;
    p2->ShowInFo();
    Npc* p = &test1;

    std::cout << "test1�ĵ�ַ" << p << std::endl;
    std::cout << "p2�ĵ�ַ" << p2 << std::endl;

    std::cout << std::hex << *(int*)p << std::endl;
    std::cout << "v�ĵ�ַ    " << &p->v << std::endl;
    void (*pf)() = (void(*)()) * (int*)p;
    pf();
#endif
    A* t1 = new Aplus;
    t1->test(2);
    Aplus a;
    a.test();
}