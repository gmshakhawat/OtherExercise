/* Write a program which will take a two digit number and output the reverse number */

#include<stdio.h>

int main()
{

    int num, dig1,dig2;

    printf("\nEnter a two digita number:");
    scanf("%d",&num);

    if(num>9 && num<100)
    {
        dig1=num/10;
        dig2=num%10;

        printf("\nReverse of %d is %d%d", num,dig2,dig1);
    }
    else
    {
        printf("\nWRONG INPUT");
    }

 return 0;
}
