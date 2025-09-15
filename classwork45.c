#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

  
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        char s = tolower(ch);
        printf("'%c'", s);
    }

    else if (islower(ch)) {
        char i = toupper(ch);
        printf("'%c' ", i);
    }
  
    else {
        printf("'%c'", ch);
    }

    return 0;
}
// #include <stdio.h>

// int main(){
//     int a, b, sum;
//     printf("Enter two integers to add: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum: %d\n", sum);
    
//     return 0;
// }