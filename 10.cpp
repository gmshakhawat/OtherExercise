/* Write a program which will take three number input
and out put the maximum number if else if */

#include<stdio.h>

int main()
{

    int a , b, c;


    printf("\nEnter three number:");
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        printf("\nMaximum Number is: %d", a);
    }

    else if(b>=c)
    {
        printf("\nMaximum Number is: %d", b);
    }
    else
    {
        printf("\nMaximum Number is: %d", c);
    }




    return 0;
}

