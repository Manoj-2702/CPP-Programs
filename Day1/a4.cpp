#include <iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char **argv)
{
    // auto a = 5;
    // auto b = 6;
    // std::cout << "Before\n("
    //           << a << "," << b
    //           << ")" << std::endl;
    // swap(a, b);
    // std::cout << "After\n("
    //           << a << "," << b
    //           << ")" << std::endl;

    // Lambda Function

    // auto greet = []()
    // {
    //     std::cout << "Hello World\n";
    // };
    // greet();
    // return 0;

    // Function Templates

    std::cout << myMax<int>(3, 7) << std::endl;
    std::cout << myMax<double>(9.0, 7.0) << std::endl;
    std::cout << myMax<char>('g', 'e') << std::endl;
}