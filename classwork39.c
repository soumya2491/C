#include <stdio.h>
int add();
int main(){
     int a=add(5,2);
     printf("%d",a);
     return 0;
}
int add(int x, int y){
  int  result = x + y;
    return result;
}