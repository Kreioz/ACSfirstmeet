#include<stdio.h>

// section : sumary

int main() {  
    int i = 1;
    int one;
    int sum = 0;

    
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&one);
        sum = one+sum;
        

        if (one <= 0)
        {
            break;
        }
        one = 0;
    }

    printf("%d",sum);
    
return 0;
}