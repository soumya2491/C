#include <stdio.h>

int main() {
    int n, i;
  int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

   
    if (n < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
    
}
