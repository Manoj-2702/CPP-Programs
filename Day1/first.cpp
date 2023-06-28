#include <iostream>
// using namespace std;

namespace manoj1
{
    void func1();
    namespace manoj2
    {
        void func2();
    }
}

void manoj1::func1()
{
    std::cout << "Hello World Manoj1\n";
}

void manoj1::manoj2::func2()
{
    std::cout << "Nested NameSpace\n";
}
int main()
{
    std::cout << "Hello World\n";
    manoj1::func1();
    manoj1::manoj2::func2();
    return 0;
}