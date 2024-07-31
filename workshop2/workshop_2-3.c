#include<stdio.h>

int main() {  
//     int score;

//     scanf("%d",&score);
// switch (score)
// {
//     case 80:
//     printf("Grade :A");
//     case score >= 75:
//     printf("Grade :B+");break;
//     case score >= 70:
//     printf("Grade :B");break;
//     case score >= 65:
//     printf("Grade :C+");break;
//     case score >= 60:
//     printf("Grade :C");break;
//     case score >= 55:
//     printf("Grade :D+");break;
//     case score >= 50:
//     printf("Grade :D");break;
//     default:
//     printf("Grade :F");break;

// }

    int score;

    //section : Grade 

    scanf("%d",&score); 
if (score >= 80)
{
    printf("Grade :A");
}
    else if(score >= 75){
    printf("Grade :B+");
    }
    else if(score >= 70){
    printf("Grade :B");
    }
    else if(score >= 65){
    printf("Grade :C+");
    }
    else if(score >= 60){
    printf("Grade :C");
    }
    else if(score >= 55)
    {
    printf("Grade :D+");
    }
    else if(score >= 50){
    printf("Grade :D");
    }
    else{
    printf("Grade :F");
    }

    return 0;
}