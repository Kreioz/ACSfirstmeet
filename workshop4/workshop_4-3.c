#include<stdio.h>

// section : counting 10 to 1

int main() {  
    int i = 1;
    int num10 = 10;
    int num;
    printf("%d",num10 );
    while (i < 10)
    {
        num = num10-i;
        printf(" %d",num);
        i++;
    }
    

return 0;
}