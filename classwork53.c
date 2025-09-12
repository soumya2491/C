#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = factorial(n);
    printf("%d", a);

    return 0;
}