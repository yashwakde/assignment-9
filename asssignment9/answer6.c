#include<stdio.h>
int main()
{
    int x;
    printf("enter the value:\n");
    scanf("%d",&x);
    switch(x%100 == 0)
    {   
        case 1:
        switch(x%400 ==0)
        {
            case 0:
            printf("it is leap year");
            break;
            case 1:
            printf("it is not leap year");
            break;
        }
      break;
        case 0:
        switch (x%4==0)
        {
            case 1:
            printf("it is leap year");
            break;
            case 0:
            printf("it is not leap year");
            break;
        }
        
    }
    }