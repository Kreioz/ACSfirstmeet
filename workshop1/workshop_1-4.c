#include<stdio.h>

//section : average

int main() {
    float n1;
    float n2;
    float n3;
    float average;

    scanf("%f %f %f",&n1,&n2,&n3);
    
    average = (n1+n2+n3)/31;
    
   printf("%.2f",average);

return 0;
}
