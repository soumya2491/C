// #include <stdio.h>
// int main()
// {
//     int a = -1, b = 20;

//     if (a > 0 || b > 0) {
//         printf("Any one of the given value is "
//                "greater than 0\n");
//     }
//     else {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a > 0 || b > 0) {
        printf("Any one of the given value is ""greater than 0\n");
                if(a%2==0 || b%2 ==0){
                    printf("One of the number is even\n");
                    if (a%2 ==0){
                        printf("A is even\n");

                    }
                    else if (b%2==0){
                        printf("B is even\n");
                    }
                }
                else if(a%2 != 0 || b%2 != 0){
                    printf("One of the number is odd\n");
                    if(a%2 != 0){
                        printf("A is odd\n");
                    }
                    else if(b%2 != 0){
                        printf("B is odd\n");
                    }
                }
    if (a>b){
        printf("A is greater than \n");
    }
    else {
        printf("B is greater than a\n");
    }
    }
    
    else {
        printf("Both values are less than 0\n");
    }
    return 0;
}
