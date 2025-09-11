#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

  
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("'%c' is an uppercase letter.", ch);
    }

    else if (islower(ch)) {
        printf("'%c' is a lowercase letter.", ch);
    }
  
    else {
        printf("'%c' is not a letter.", ch);
    }

    return 0;
}
