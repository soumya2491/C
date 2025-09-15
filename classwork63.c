
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
    char str1[100], str2[100], copied[100], merged[200];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    

    str1[stringLength(str1) - 1] = '\0';
    str2[stringLength(str2) - 1] = '\0';
    
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);
    
 
    stringCopy(str1, copied);
    printf("Copied string: %s\n", copied);
    
    
    mergeStrings(str1, str2, merged);
    printf("Merged string: %s\n", merged);
    printf("Length of merged string: %d\n", stringLength(merged));
    
    return 0;
}