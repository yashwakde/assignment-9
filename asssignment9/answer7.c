#include<stdio.h>
int main()
{
    float unit,amount,total;
    printf("enter the unit:\n");
    scanf("%f",&unit);
    switch(unit<=50)
    {   
        case 1:
        amount = 0.5*unit;
        break;
        
            case 0:
            switch(unit<=150)
           {   case 1:
               amount = 25+(unit -50)*0.75;
                break;
               case 0:
                 switch(unit<=250)
             { 
                case 1:
                 amount =25 +75+(unit-150)*1.20;
                break;
                 case 0:
                  amount = 220+(unit -250)*1.5;
                 break;
             }
             break;
           }
           break;
    }
     
     total =amount*0.2+amount;
     printf("tota amount is %.2f",total);
}
            