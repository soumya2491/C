#include <stdio.h>

int is_prime(int x); 

int main() {
    int s;

    printf("Enter any number: ");
    scanf("%d", &s);

    if (is_prime(s)) {
        printf("prime\n");
    } else {
        printf("not prime\n");
    }

    return 0;
}

int is_prime(int x) {
    if (x <= 1) {
        return 0; 
    }

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    
    return 1; 
}
#include <stdio.h>

int main(){
    
    
    return 0;
}