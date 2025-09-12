#include <stdio.h>

int main() {
    int *p1, *p2;
    int b,a;

    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    p1 = &a;
    p2 = &b;
    // printf("p1: %d\n", p1);
    // printf("p2: %d\n",p2);

    if (p2 > p1) {
        printf("p2 is greater than p1\n");
    } else {
        printf("p1 is greater than p2\n");
    }

    return 0;
}