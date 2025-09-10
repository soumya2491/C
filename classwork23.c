#include <stdio.h>

int main(){
     int a,b,c;
     printf("Enter the 1 number: ");
     scanf("%d",&a);
     printf("Enter the 2 number: ");
     scanf("%d",&b);
     printf("Enter the operation number: ");
     scanf("%d",&c);
     
     switch (c)
     {
     case 1:
        printf("%d",a+b);
        break;
     case 2:
     printf("%d",a-b);
     break;

     case 3:
     printf("%d",a*b);
     break;
     case 4 :
     printf("%d",a/b);
     break;

     default:
     printf("No operation is given");
        break;
     }

     return 0;
}