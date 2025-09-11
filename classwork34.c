#include <stdio.h>

int main(){
     int a;
     scanf("%d",&a);
     if(a%2==0) goto even;

     else goto odd;

     even:

     printf("%d is even",a);
     return 0;

     odd:
     printf("%d is odd",a);
     return 0;
}