#include <stdio.h>

int main(){
     int a;
     printf("Enter which scope you have: ");
     scanf("%d",&a);
     if(a==8){
        printf("use snipper gun");

     }
     else if(a==6){
        printf("use AUG A3, GROZA,QBZ,M1");
     }
     else if (a==4){
        printf("Use UMP9, AKM, SCAR-L,Crossbow");
     }
     else{
        printf("You don't have any scope ,find one");
     }
     return 0;
}