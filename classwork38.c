#include <stdio.h>


    int gcd(int a,int b){
        if(b==0){
            return a;
        }return gcd(b,a%b);
    }
    int main(){
         int c,d;
         if (c>0 && d>0 && c<20 && d <20){
             printf("Enter the number: ");
             scanf("%d %d",&c,&d);
             printf("%d",gcd(c,d));
             return 0;
            }
            else printf("Invalid input");
    }
