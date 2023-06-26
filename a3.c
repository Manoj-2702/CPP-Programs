#include <stdio.h>
#include <stdlib.h>

union one
{
    long l;
    char ch[4];
};

int main()
{
    union one data;
    data.l = 0x01020304;
    for (int i = 0; i < 4; i++)
    {
        printf("%02x", (char)data.ch[i]);
        if (i < 3)
            printf(",");
    }
    return 0;
}