#include <iostream>
using namespace std;

class Fraction
{
    int num;
    int den;

public:
    Fraction(int n = 1, int d = 6)
    {
        num = n;
        den = d;
    }
    Fraction operator*(Fraction const &obj)
    {
        Fraction res;
        res.num = num * obj.num;
        res.den = den * obj.den;
        return res;
    }
    void print() { cout << num << " / " << den << "\n"; }
};

int main()
{
    Fraction f1(10, 5), f2(2, 93);
    Fraction f3 = f1 * f2;
    f3.print();
}