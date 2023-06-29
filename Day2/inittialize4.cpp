#include <iostream>
using namespace std;

class Test
{
    int i;

public:
    Test(int);
};

Test::Test(int arg)
{
    i = arg;
    cout << "A's Constructor called: Value of i: " << i << endl;
}

class B
{
    Test a;

public:
    B(int);
};

B::B(int x) : a(x)
{
    cout << "B's Construction called" << endl;
}

int main()
{
    B obj(10);
    return 0;
}