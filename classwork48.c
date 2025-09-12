#include <stdio.h>
int area_square();
int main(){
    int n;
    printf("Enter the side of the square: ");
    scanf("%d",&n);
    int a = area_square(n) ;
    printf("%d",a);
     return 0;
}
int area_square(int x){
    int area;
    area = x * x;
    return area;
}
#include <stdio.h>

int main(){
    int n;
    
    return 0;
}
#include <stdio.h>

int main(){
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    printf("\n");
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    printf("\n");
    
    return 0;
}