#include <stdio.h>

int main(){
     int a,b,c;
     printf("Enter the first number : ");
     scanf("%d",&a);
     printf("Enter the second number :");
     scanf("%d",&b);
     printf("Enter the second number :");
     scanf("%d",&c);
     if(a>b && b>c){
        printf("The value of a is %d\n",a);
     }
     else if(b>c){
        printf("The value of b is %d\n",b);
     }
     else{
        printf("The value of c is %d\n",c);
     }
     if(a>b){
        printf("a is greater than b\n");
     }
     else if(a==b){
        printf("a is equal to b\n");
     }
     else{
        printf("b is greater than a\n");
     }
     return 0;
}