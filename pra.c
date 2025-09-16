// #include <stdio.h>

// int main(){
//      int n,prime = 1;
//      scanf("%d",&n);
//      if (n < 2) prime = 0;
//      else
//      {for (int i = 2; i < n; i++)
//      {
//         if (n%i==0) {
//             prime = 0;
//             break;
//         }
//      }
//      }
//      if (prime) printf("Prime");
//      else printf("Non Prime");
//      return 0;
// }
#include<stdio.h>
void main() {
for(int i = 1; i <= 2; i++) {
for(int j = 1; j <= 2; j++)
printf("%d%d", i, j);
}
}