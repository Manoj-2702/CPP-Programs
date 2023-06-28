#include <stdio.h>

int def(int *a[5])
{
    int ans = sizeof(*a) / sizeof(int);
    printf("%d\n", ans);
}

int main()
{
    // int a;
    // printf("Integer: %d\n", sizeof(a));
    // char b;
    // printf("Char: %d\n", sizeof(b));
    // short c;
    // printf("Short: %d\n", sizeof(c));
    // long d;
    // printf("Long: %d\n", sizeof(d));
    // double e;
    // printf("Double: %d\n", sizeof(e));
    // float f;
    // printf("Float: %d\n", sizeof(f));

    // int count = 0;
    // int a = 255;
    // while (a > 0)
    // {
    //     if ((a & 1) == 1)
    //         count++;
    //     a /= 2;
    // }
    // printf("%d", count);

    int a[5] = {5, 2};
    def(a);
}