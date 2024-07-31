#include<stdio.h>

// section : triangle asterisk

int main() {  
    int i = 1;
    int j = 0;
    int n;
    scanf("%d",&n);
    
    for (i; i <= n; i++)
    {
        for (j; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        j = 0;
        
    }
    
    
return 0;
}