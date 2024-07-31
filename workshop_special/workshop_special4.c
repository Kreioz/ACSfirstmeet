#include<stdio.h>

int main()
{

    float choice=0 , wdth = 0 , hght = 0 , area_ = 0;
    //int choice_1 = 0;
    
    printf("1. Rectangle\n2. Triangle\n3. Circle\nEnter your choice: ");
    scanf("%f",&choice);
    if (choice == 1) //1 -5 10
    {
        printf("Enter the width: ");
        scanf("%f",&wdth);
        printf("Enter the height: ");
        scanf("%f",&hght);
        if (wdth < 0 || hght < 0)
        {
            printf("The area of the rectangle is: Error");
            
        }
        else
        {
            area_ = wdth * hght;
            printf("The area of the rectangle is: %.2f",area_);
        }
        
    }
    else if(choice == 2)//2 6 8
    {
        printf("Enter the base: ");
        scanf("%f",&wdth);
        printf("Enter the height: ");
        scanf("%f",&hght);
        if (wdth < 0 || hght < 0)
        {
            printf("The area of the trinagle is: Error");
            
        }
        else
        {
            area_ = (wdth * hght)/2;
            printf("The area of the triangle is: %.2f",area_);
        }
        
    }
    else if(choice == 3)// 3 7
    {
        printf("Enter the radius: ");
        scanf("%f",&wdth);
        
        if (wdth < 0)
        {
            printf("The area of the circle is: Error");
            
        }
        else
        {
            area_ = wdth*wdth*(3.14);
            printf("The area of the circle is: %.2f",area_);
        }
        
    }
    else{
        printf("Invalid choice");
    }
    
    return 0;
}