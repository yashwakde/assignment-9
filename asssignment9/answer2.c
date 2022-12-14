#include<stdio.h>
int main()
{
    int x,a,b;
  
  
   printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.DIVISION\n");
    printf("4.MULTPLICATION\n");
    printf("5.EXIT\n");

    printf("enter your choice:\n");
    scanf("%d",&x);
   
   switch(x)
    {
        case 1:
        printf("enter two number:\n");
        scanf("%d%d",&a,&b);
        a+b;
        printf("addition is %d",a+b); 
        break;
         case 2:
        printf("enter two number:\n");
        scanf("%d%d",&a,&b);
        a-b;
        printf("subtraction is %d",a-b);
        break;
         case 3:
        printf("enter two number:\n");
        scanf("%d%d",&a,&b);
        a/b;
        printf("division is %d",a/b);
        break;
         case 4:
        printf("enter two number:\n");
        scanf("%d%d",&a,&b);
        a*b;
        printf("multiplication is %d",a*b);
        break;
        default:
        if(x==5)
        printf("EXIT\n");
        break;
      
    }
    printf("\n");

return 0;
}