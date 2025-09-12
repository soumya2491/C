#include <stdio.h>

int main(){
    int a,*p;   
    a = 10;
    p = &a;  
    printf("Value of a: %d\n", *p);
    printf("Address of a: %d\n", p);

    return 0;
}