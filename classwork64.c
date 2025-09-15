#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // // Remove newline character if present
    // char *ptr = str;
    // while (*ptr != '\0') {
    //     if (*ptr == '\n') {
    //         *ptr = '\0';
    //         break;
    //     }
    //     ptr++;
    // }

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}