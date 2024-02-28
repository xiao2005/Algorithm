#include <iostream>
using namespace std;

class Child {
public:
    Child(int uid) :id(uid) {}

    int getId()
    {
        return id;
    }

private:
    int id;
};

class Circle {
public:
    Circle():capacity(0),current(-1)
    {}
    void in(Child*& uin)
    {
        children[capacity++] = uin;  //���뺢�ӵ�ָ��
    }

    Child*& next()
    {
        //int tmp = current;
        
        current = (current + 1) % capacity;
        return children[current];     // ���ص�ǰ���ӵ�ָ�룬current������ƶ�
    }

    void out(Child*& uin)
    {
        delete uin;
        for (int i = current; i < capacity - 1; i++) children[i] = children[i + 1];//�������ǰ���ƶ�һ��
        capacity--;
        current--;
    }


private:
    int capacity;
    int current;
    Child* children[1001];
};

int main() {
    int n, m, i, j;
    Circle circle;
    Child* child;

    cin >> n >> m;

    for (i = 1; i <= n; i++) {
        child = new Child(i);
        std::cout << "child:" << child << std::endl;
        circle.in(child);
    }
    std::cout << std::endl;
    for (i = 1; i < n; i++) {
        for (j = 1; j <= m; j++) {
            child = circle.next();
            if(j == m)std::cout << "out:" << i << ":" << child << std::endl;
        }
        //std::cout << "out:" << i << ":" << child << std::endl;
        circle.out(child);
    }

    child = circle.next();
    std::cout << "Final child:" << child << std::endl;
    cout << child->getId();
    return 0;
}