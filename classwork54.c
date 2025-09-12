// #include <stdio.h>
// #include <time.h>
// int main(){
//      time_t t;
//         time(&t);
//         printf("Today's date and time : %s",ctime(&t));
//      return 0;
// }
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int c;
      srand(time(NULL));
      c = rand();
        printf("Random number: %d",c);
     return 0;
}
