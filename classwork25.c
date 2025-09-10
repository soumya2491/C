#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
     switch(number)
{
   case 1: 
                printf("Welcome to Erangel Map. You are Inside a Forest");
                break;
   case 2: 
                printf("Welcome to Miramar Map. You are Inside a Desert");
                break;
   case 3: 
                printf("Welcome to Sanhok Map. You are Inside a Rain Forest");
                break;
   case 4: 
                printf("Welcome to Vikendi Map. You are Inside a Snow Forest"); 
                break;
   default: 
              printf("Invalid Input");
}
     return 0;
}
