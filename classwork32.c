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
// #include <stdio.h>

// int main() {
//     int n, i;
//     long long factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

   
//     if (n < 0) {
//         printf("Factorial does not exist for negative numbers.\n");
//     } else {
        
//         for (i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         printf("Factorial of %d is %lld\n", n, factorial);
//     }

//     return 0;
// }
