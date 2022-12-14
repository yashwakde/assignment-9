#include<stdio.h>
int main()
{
      int x;
      printf("enter your days:\n");
      scanf("%d",&x);
      switch(x)
        {    case 1:
             printf("january and its has 31 days");  
                break; 
             case 2:
                printf("feburary and its has 28\29 days");
                break; 
             case 3:
                printf("march and its has 31 days");
                break; 
             case 4:
                printf("april and its has 30 days");
                break;    
             case 5:
                printf("may and its has 31 days");
                break;    
             case 6:
                printf("june and its has 30 days");
                break;     
             case 7:
                printf("july and its has 31 days");
                break;      
             case 8:
                printf("august and its has 31 days");
                break;      
             case 9:
                printf("september and its has 30days");
                break;       
             case 10:
                printf("october and its has 30 days");
                break;       
             case 11:
                printf("november and its has 30 days");
                break;        
             case 12:
                printf("december and its has 31 days");
                break;       
          default:
          printf("invalid days");
         }
     
 
}
