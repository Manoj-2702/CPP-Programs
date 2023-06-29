#include <iostream>
using namespace std;

class Person
{
    int age;
    string name;

public:
    Person(int age, string name)
    {
        age = age;
        name = name;
    }
    Person(const Person &obj)
    {
        obj.age = 56;
        obj.name = "Person1"
    }
};