#include <iostream>
using namespace std;

// #pragma pack(1)
// struct SampleStructPack1
// {
//     char c1;
//     int i1;
// };
// #pragma pack(0)

struct Rectangle
{
    int width, height;
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    void areaofRectangle()
    {
        cout << "Area of Rectangle is: " << (width * height) << endl;
    }

    ~Rectangle()
    {
        cout << "Killer executed" << endl;
    }
};

int main(void)
{

    Rectangle rec = Rectangle(4, 6);
    rec.areaofRectangle();
    return 0;
    // cout << "SampleStructPack1" << endl
    //      << sizeof(SampleStructPack1) << endl;
}