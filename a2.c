#include <stdio.h>
#include <stdlib.h>

struct __attribute__((__packed__)) one
{
    char c1;
    int i1;
    char c2;
};

struct two
{
    char c1;
    char c2;
    int i1;
};

struct three
{
    char c1;
    short s1;
    char c2;
};

int main()
{
    struct one o1;
    struct two t1;
    struct three t2;
    printf("%d\n", sizeof(o1));
    printf("%d\n", sizeof(t1));
    printf("%d\n", sizeof(t2));
}