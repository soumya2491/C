#include <stdio.h>

int main(){
    int a = 25,b;
    int *p;
    p = &a;
    b = *p + 10;
    printf("Value of b: %d\n", b);
    return 0;
}
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}