// #include <stdio.h>

// void function(){
//     int x = 10;
//     auto int y = 20;
//     printf("Auto variable: %d",y);

// }


// int main(){
//      function();
//      return 0;
// }
// #include <stdio.h>

// void function(){
//     int x = 10;
//      int y = 20;
//     printf("Auto variable: %d\n",y);

// }


// int main(){
//     auto int y = 30;
//      function();
//      printf("Auto Variable: %d",y);
//      return 0;
// }
#include <stdio.h>

void function(){
    int x = 10;
     int y ;
    printf("Auto variable: %d\n",y);

}


int main(){
    auto int y = 30;
     function();
     printf("Auto Variable: %d",y);
     return 0;
}