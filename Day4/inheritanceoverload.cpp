#include <iostream>
using namespace std;

class Parent
{
    // int x = 5;

public:
    int x = 5;
    void print()
    {
        cout << "Hello Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void PrintMes()
    {
        cout << "Hello" << endl;
    }
};
int main()
{
    Child c;

    Parent *ptr = &c;

    // ptr->PrintMes();
    ptr->print();

    return 0;
}