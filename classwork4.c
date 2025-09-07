#include "myfile.h"
#include <stdio.h>


int x = 10;

void printValue() {
    printf("Global variable: %d\n", x);
}

int main() {
    printValue();
    return 0;
}
