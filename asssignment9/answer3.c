#include<stdio.h>
int main()
{
      int x;
      printf("enter your days:\n");
      scanf("%d",&x);
      switch(x)
        {    case 1:
             printf("monday\n");  
              printf("do not store your dream in your eyes");  
                break; 
             case 2:
                printf("tuesday\n");
                 printf("may god be with you today and always");  
                break; 
             case 3:
                printf("wednesday\n");
                 printf("have a good day ");  
                break; 
             case 4:
                printf("thursday\n");
                 printf("have a awesome day");  
                break;    
             case 5:
                printf("friday\n");
                 printf("welcome");  
                break;    
             case 6:
                printf("saturday\n");
                 printf("god bless you");  
                break;     
             case 7:
                printf("sunday\n");
                 printf("god will sent gift for you");  
                break;      
             default :
                printf("invalid day\n");
        } 
        return 0;
}