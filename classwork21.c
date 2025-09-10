#include <stdio.h>

int main(){
     int a;
     printf("Enter the scope you have : ");
     scanf("%d",&a);
     if(a%2==0 && a<=8){
        if(a==8){
            printf("use snipper");

        }
        else if(a==6){
            printf("use AUG A3");
        }
        else if(a==4){
            printf("use UMP9");
        }
        else {
            printf("You can use all guns");
        }
     }
     else {
        printf("Find one");
     }
     

     return 0;
}