#include <stdio.h>

int main(){
    int a = 20;
    int *p;
    p = &a;     
    printf("pointer before increment: %d\n", *p);
    // p++;
    // printf("pointer after increment: %d\n", p);
    int b = 10;
    int *q = &b;
    int sum = *p + *q;
    printf("Sum of values pointed by p and q: %d\n", sum);
    return 0;
}
#include <stdio.h>

int main(){
    
    return 0;
}
