//use of if

#include<stdio.h>

int main()
{

    int num1;

    printf("\nEnter a number");
    scanf("%d", &num1);


    if(num1>70)
    {
        printf("\nHurray you won the lottery !!!");

    }
    {
    if (num1<=70)
        printf("\n Ahha !!! You Missed this time");
    }

    return 0;
}

