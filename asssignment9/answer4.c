#include<stdio.h>
int main()
{
    int x,a,b,c;
  
  
   printf("1.isosceles triangle\n");
    printf("2.right angle traingle\n");
    printf("3.equilateral triangle\n");
    printf("4.exit\n");
   
    printf("enter your choice:\n");
    scanf("%d",&x);
   
   switch(x)
    {
     case 1:
        printf("enter three sides:\n");
        scanf("%d%d%d",&a,&b,&c);
        if( a == b ||b == c||c == a)
        {
            printf("it is isoceles triangle");
        }
        else 
        printf("it is not isoceles triangle") ;
        break;
     case 2:
        printf("enter three sides:\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
        {
            printf("it is right angle triangle");
        }
        else
        printf("it is not right angle triangle");
        break;
     case 3:
        printf("enter three sides:\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a == b && b == c && c == a)
       {
         printf("it is equilateral traingle");
       }
        else 
        printf("it is not equilateral traingle");
        break;
     default:
        if(x==4)
        printf("EXIT\n");
        break;
      
    }
    printf("\n");

return 0;
}