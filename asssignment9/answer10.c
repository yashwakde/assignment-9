#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,value1 ,value2,imaginary;
    printf("enter the number:\n");
    scanf("%f%f%f",&a,&b,&c);
    d= b*b-4*a*c;
   switch(d>0)
   {
    case 1:
    value1= (-b +sqrt(d)/2*a);
    value2= (-b -sqrt(d)/2*a);
    printf("two real and distinct is %f and %f",value1 ,value2);
    break;
    case 0:
    switch (d<0)
    { case 1:
    value1 =value2 = -b/(2*a);
    imaginary = sqrt(-d)/2*a;
    printf("two imaginary   number  are %.2f +i%.2f and %.2f -i%.2f",value1,imaginary,value2,imaginary);
    break;
    case 0:
    value1 =value2 =-b/(2*a);
    printf("two equal and real are %.2f and %.2f",value1,value2);
    break; 
  }
  
  }
  return 0;
    }

   


