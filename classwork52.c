#include <stdio.h>

int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
#include <stdio.h>

int main(){
    
    return 0;
}

