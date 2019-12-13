#include<stdio.h>
#include<math.h>

int main()
{

    float  height,weight,BMI;
    int i,e;



    tolower(e);

    for (i=0 ; i<10 ; i++)
    {

    printf("\nYour Height please : ");
    scanf("%f",&height);

    printf("Your Weight please : ");
    scanf("%f",&weight);

    BMI=weight/(height*height);
    printf("BMI = %0.2f \n\n",BMI);



    printf(" if want to exit enter 0 : ");
    scanf("%d",&e);




    if( e==0)
    {
        break;
    }
    else
    {
        continue;
    }


    }

   /* printf("Your Height please : ");
    scanf("%f",&height);

    printf("Your Weight please : ");
    scanf("%f",&weight);

    BMI=weight/(height*height);

    printf("BMI = %0.2f \n\n",BMI);
*/
    return 0;
}
