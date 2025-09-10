#include <stdio.h>

int main(){
     int a,b;
     printf("Enter your age : ");
     scanf("%d",&a);
     printf("Enter your weight : ");
     scanf("%d",&b);
     if (a>=12){
        if(b>40 && b<110){
            printf("Yes you can do\n ");
        }
        else{
            printf("No you can't");
        }

     }
     else{
        printf("No you can't");
     }
     return 0;
}