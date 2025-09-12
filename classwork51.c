#include <stdio.h>
int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
int main(){
     printf("Enter the number: ");
     int n;
        scanf("%d",&n);
        int a = factorial(n) ;
        printf("%d",a);
     return 0;
}
#include <stdio.h>

int main(){
    
    return 0;
}