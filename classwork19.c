#include <stdio.h>

int main(){
     int a,b;
     printf("Enter the age : ");
     scanf("%d",&a);
     printf("Enter the weight : ");
     scanf("%d",&b);
     if ((a>18) && (b>50)){
        printf("Yes you can donate blood");
        
     }
     else{
        printf("Sorry you can't donate blood");
     }
     return 0;
}