#include <stdio.h>
float simple_interest();
int main(){
    float p ,t,s,amount;
    printf("Enter your principle amount: ");
    scanf("%d",&p);
    printf("Enter your time: ");
    scanf("%d",&t);
     s = simple_interest(p,t);
     amount = s + p;
     printf("Amount to be returned %d",amount);
     return 0;
}
float simple_interest(int p, int t){
    float simple,r = 11;
    simple= (p*r*t)/100;
    return simple;
}