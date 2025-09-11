#include <stdio.h>

int fact(int s);
int main(){
     int s;
     scanf("%d",&s);
    printf("%d",fact(s));
     return 0;
}int fact(int s){
    if(s==0 || s ==1) return 1;
    else return s*fact(s-1);
}
// #include <stdio.h>
// double fact (int n);
// int main(){
//      double n,f;
//      printf("Enter the number ");
//      scanf("%d",&n);
//     double  f = fact(n);
//      printf("factorial = %lld", f);

//      return 0;
// } double fact(int n)
// {
//     if(n ==0 || n ==1)
//     return 1;
//     else return n*fact(n-1);
// }