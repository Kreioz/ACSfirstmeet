#include<stdio.h>

// sorting ไม่บังคับ 

int main(){

int i = 0 , arr[10] = {} , j = 0 , temp = 0;

for (i=0; i < 10; i++)
{
    scanf("%d",&arr[i]);

    //5 3 8 6 2 7 4 1 9 0
}

for ( i = 0; i < 10; i++){
       
for (j = 0; j < 10-i-1; j++)
    {
        if (arr[j] < arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }   
}
        
        
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    

}
