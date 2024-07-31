#include<stdio.h>
#include<math.h>

int main(){
    int arr[3][3] = {0} , i = 0 , j = 0 ;
    //1 2 3
    // 4 5 6
    // 7 8 9
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d",arr[i][j]); 
    //     }
        
    // }
   

    i = 0; 
    int max = -INFINITY;

    for (i; i < 3; i++)
    {
        for (j = 0; j < 3; j++){
        if (max < arr[i][j])
        { 
            max = arr[i][j];
        }
        else{
            max = max;
        }
        }
        
    }
    printf("The maximum value in the matrix is: %d",max);
    



    return 0 ;
}