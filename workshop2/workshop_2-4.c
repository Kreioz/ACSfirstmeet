#include<stdio.h>

//section : mbti

float main() {  
    float wgh,hgh,bmi_cal;

    scanf("%f %f",&wgh,&hgh);
    bmi_cal = wgh/(hgh*hgh);
    if (bmi_cal < 18.5)
    {
        printf("Your BMI is %.2f\nYou are underweight.",bmi_cal);
    }
    else if (bmi_cal <= 24.9)
    {
        printf("Your BMI is %.2f\nYou are normal weight.",bmi_cal);
    }
     else if (bmi_cal <= 29.9)
    {
        printf("Your BMI is %.2f\nYou are overweight.",bmi_cal);
    }
    else{
        printf("Your BMI is %.2f\nYou are obese.",bmi_cal);
    }

return 0;
}