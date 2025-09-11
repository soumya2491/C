#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    char upper = toupper(ch);
    printf("Uppercase: %c", upper);
    char lower = tolower(ch);
    printf("Lowercase: %c", lower);

    return 0;
}
