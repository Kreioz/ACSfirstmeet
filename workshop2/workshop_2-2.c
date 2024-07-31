#include<stdio.h>
//section : leap yaer

int main() {  
    int year;

    scanf("%d",&year);
    if(year % 400 == 0)
    { 
        printf("%d is a leap year. February has 29 days.",year);

    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year. February has 28 days.",year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year. February has 29 days.",year);
    }
    
    else
    {
        printf("%d is not a leap year. February has 28 days.",year);
    }   

return 0;
}