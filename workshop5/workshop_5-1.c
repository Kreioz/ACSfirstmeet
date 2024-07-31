#include<stdio.h>

//section : sum of array

int main() {  
    int i = 0;
    int a = 0;
    int arr[5] = {0};
    int sum = 0;
    int j = 0;

    for (i; i < 5; i++)
    {
        scanf("%d", &a);
       
        arr[i] = a; 
        j++;
        sum = a + sum;
        
    }
    printf("Sum of entered numbers: %d",sum);
    printf("\nNumbers in array:");
    j = 0;
    for (i = 0; i < 5; i++)
    {
        printf(" %d",arr[i]);
        j++;
    }

return 0;
}