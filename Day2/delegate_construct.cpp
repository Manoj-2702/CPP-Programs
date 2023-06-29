#include <iostream>
using namespace std;

class ABC
{
    int x, y, z;

public:
    ABC()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    // ABC()
    // {
    //     x = 4;
    //     y = 8;
    //     z = 0;
    // }
    ABC(int z) : ABC()
    {
        this->z = z;
    }
    ABC(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void show()
    {
        cout << x << "\n"
             << y << "\n"
             << z;
    }
};

int main()
{
    ABC obj(3);
    obj.show();
    return 0;
}