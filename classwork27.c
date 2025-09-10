// #include <stdio.h>  
// int main () {  
//   
//  int i = 10;  
// intj= 20;  
//    
//    switch(i) {  
//      
//       case 10:   
//          printf("the value of i evaluated in outer switch: %d\n",i);  
//       case 20:  
//          switch(j) {  
//             case 20:  
//                printf("The value of j evaluated in nested switch: %d\n",j);  
//          }  
//    }       
//    printf("Exact value of i is : %d\n", i );  
//    printf("Exact value of j is : %d\n", j );  
//    
//    return 0;  
// }  
#include <stdio.h>

int main(){
     int i ;
     printf("Enter the value of i : ");
     scanf("%d",&i);
      int j = 20;
      if (i==10){
        printf("The value of i in outer switch is %d\n",i);
        
      }
      else if (i == 20){
        if(j==20){
            printf("The value of j is %d\n",j);
        }
        else {
            printf("The value of j is not 20\n");
        }
      }
      printf("The exact value of i is %d\n",i);
      printf("The exact value of j is %d\n",j);
     return 0;
}