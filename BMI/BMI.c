#include<stdio.h>

int main()
{
      float weight,BMI,height;

    printf("Your Height please : ");
    scanf("%f",&height);

    printf("Your Weight please : ");
    scanf("%f",&weight);

    BMI=weight/(height*height);

    printf("BMI = %0.2f \n\n",BMI);

    return 0;
}
