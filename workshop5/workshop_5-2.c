#include<math.h>
#include<stdio.h>

//section : max min

int main() {  
    int i = 0;
    int num = 0;
    int array[10] = {0};

    for (i; i < 10; i++)
    {
        scanf("%d",&num);
        array[i]= num;
    }

   i = 0; 
    int max = -INFINITY;

    for (i; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        else{
            max = max;
        }
        
    }
    printf("Maximum number: %d\n",max);

    i = 0; 
    int min = INFINITY;

    for (i; i < 10; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        else{
            min = min;
        }
        
    }
    printf("Minimum number: %d",min);
    


    
return 0;
}