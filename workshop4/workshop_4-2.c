// break = stoploop
// continue = skiploop 1 times
// #include<stdio.h>
// float main() {  
//     float i = 3;

//     scanf("weight : %f kg  height : %f m",&wgh,&hgh);

//     while (i < 3)
//     {
//         printf("eiei\n");
//         i = i + 1
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("eiei2\n");
//         break;
//     }
    
// return 0;
// }

#include<stdio.h>

//section : Fimonacci sequence

int main() {  
    int i;
    int F0 = 0;
    int F1 = 1;
    int F2;
    printf("%d %d ",F0,F1);
for (i=0; i < 8; i++)
{
    F2 = F0 + F1;
    printf("%d ",F2);
    F0 = F1;
    F1 = F2;

}

    

return 0;
}

