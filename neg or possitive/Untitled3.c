#include<stdio.h>

int main()
{
    float i,a,e;


    for ( i=0 ; i<10 ; i++)
    {

    printf("please enter your number ");
    scanf("%f",&a);

    if (a>0)
    {
        printf("\nPositive number \n ");
    }
    else if(a==0)
    {
        printf("\n Non negative \n");
    }
    else
    {
        printf("\nNegative number \n");
    }





    printf("\n if want to exit enter 0 : ");
    scanf("%d",&e);

    printf("\n\n");




    if( e==0)
    {
        break;
    }
    else
    {
        continue;
    }


    }


    return 0;
}
