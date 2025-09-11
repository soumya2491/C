// #include <stdio.h>

// int main(){
//      int a ,b =0, c = 1,d;
//      printf("Enter the number : ");
//      scanf("%d",&a);
    
//         if(a==1){
//             printf("%d",b);
//         }
//         else if (a==2){
//             printf("%d %d", b,c);

//         }
//         else{

//             for (int i = 3; i <=a ; i++)
//             {
//             d = b + c;
//             printf("%d %d",b,c);
//             b = c;
//             c = d;
//             }
//         }
        

    
//      return 0;
// }
#include <stdio.h>

int main() {
    int a, b = 0, c = 1, d;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("%d", b);
    } else if (a == 2) {
        printf("%d %d", b, c);
    } else {
        printf("%d %d ", b, c); 
        for (int i = 3; i <= a; i++) {  
            d = b + c;
            printf("%d ", d);
            b = c;
            c = d;
        }
    }

    return 0;
}
// #include <stdio.h>

// int main() {
//     printf("Enter the number: ");
//     fflush(stdout); // Force prompt to appear immediately
//     int a;
//     scanf("%d", &a);
//     printf("You entered: %d\n", a);
//     return 0;
// }
