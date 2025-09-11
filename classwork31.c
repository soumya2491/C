// #include <stdio.h>

// int main(){
//      int a ;
//      printf("Enter The number : ");
//      scanf("%d",&a);
//      if(a%2==0){
//         printf("The number is even.");

//      }
//      else{
//         printf("The number is odd.");
//      }
//      return 0;
// }
// #include <stdio.h>

// int main(){
//      int a;
//      printf("Enter the number : ");
//      scanf("%d",&a);
//      if ((a & 1) == 0){
//         printf("The number is even");
//      }
//      else {
//         printf("The number is odd");
//      }
//      return 0;
// }
// #include <stdio.h>

// int main(){
//      int a;
//      printf("Enter the number : ");
//      scanf("%d",&a);
//      ((a & 1) == 0)? (printf("The number is even")): printf("The number is odd");
//      return 0;
// }

// #include <stdio.h>

// int main(){
//      int a ;
//      printf("Enter the char : ");
//      scanf("%c",&a);
//      if(a == 65 || a ==4){
//         printf("The")
//      }
//      return 0;
// }

#include <stdio.h>

int main(){
     int a;
     printf("Enter you year : ")
     ;
     scanf("%d",&a);
     if ((a%4==0 && a %100!=0)||(a%400==0)){

        printf("The year is a leap year .");
        
     }
     else{
        printf("The year is not a leap year .");
     }
     return 0;
}