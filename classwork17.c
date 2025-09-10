#include <stdio.h>
int main()
{
    unsigned int a = 5, b = 9;
    printf("a = %u, b = %u\n", a, b);
    printf("a&b = %u\n", a & b);
    printf("a|b = %u\n", a | b);
    printf("a^b = %u\n", a ^ b);
    printf("~a = %u\n", a = ~a);
    printf("b<<1 = %u\n", b << 1);
    printf("b>>1 = %u\n", b >> 1);
    return 0;
}