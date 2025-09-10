#include <stdio.h>

int main(){
    int a, i, isPrime = 1; 
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; 
    }

    for (i = 2; i * i <= a; i++) {  
        if (a % i == 0) {
            isPrime = 0;
            break;  
        }
    }

    if (isPrime) {
        printf("%d is a Prime number\n", a);
    } else {
        printf("%d is not a Prime number\n", a);
    }

    return 0;
}