#include <stdio.h>

int main(){
     int a;
     printf("Choose any one : ");
     scanf("%d",&a);
     switch (a)
     {
     case 1:
     printf("You choose school of engineering\n");
        int b;
        printf("Choose any one : ");
        scanf("%d",&b);
        switch (b)
        {
        case 1 :
        printf("You choose Department of Mechanical Engineering");
            
            break;
            case 2 :
            printf("You choose Department of Civil Engineering");
            break;
            case 3: 
            printf("You choose Department of Computer Science Engineering");
            break;
        
        default:
        printf("Invalid Number");
            
        }
        break;
        case 2:
        printf("You choose School of Business\n");
        
        int c;
        printf("Choose one : ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("You choose Department of Commerce");
             break;
            case 2 :
            printf("YOu choose Department of purchasing\n");
              break;
        
        default:
            break;
        }
        break;
     case 3:
     printf("You choose School of pharmacy");
     break;

     default:
     printf("Invalid option");
        break;
     }
     
     return 0;
}