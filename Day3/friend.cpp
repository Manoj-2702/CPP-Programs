#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    friend int printLength(Box);

public:
    Box() : length(0) {}
    // friend int printLength(Box);
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box b;
    cout << "Length of Box: " << printLength(b) << endl;
    // cout << "Length of Box: " << b.printLength(b) << endl;
    return 0;
}