#include<stdio.h>
int main()
{
    short int a = 10;
    long int b = 10;
    unsigned int c = 10;
    signed int d = 10;
    unsigned char ch = 'A';
    signed char ch1 = 'W';
    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(ch));
    printf("%zu\n", sizeof(ch1));
}
