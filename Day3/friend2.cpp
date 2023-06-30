#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setdata(int i)
    {
        x = i;
    }
    friend void max(A a, B b);
};

class B
{
    int y;

public:
    void setdata(int i)
    {
        y = i;
    }
    friend void max(A a, B b);
};

void max(A a, B b)
{
    if (a.x >= b.y)
    {
        return a.x;
    }
    else
    {
        return b.y;
    }
}