// #include <stdio.h>

// int main(){
//     int num[5];
// for (int i = 0; i < 5; i++)
// {
    
//     printf("Enter a number: ");
//     scanf("%d", &num[i]);
// }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", num[i]);
// }

//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int num[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter a number: ");
//         scanf("%d", &num[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", num[i]);
//     }

//         return 0;
//     } 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements for the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[2 * n];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];    
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr2[i]);
        arr3[n + i] = arr2[i];
        }

    printf("The combined array is:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}