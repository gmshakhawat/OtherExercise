/* Write a program which will take up to digit number and output the reverse number */

#include<stdio.h>

int main()
{

    int num, dig1,dig2,dig3,temp;

    printf("\nEnter a number up to three digit:");
    scanf("%d",&num);

        dig1=num%10;
        temp=num/10;
        dig2=temp%10;
        dig3=temp/10;

    if(num>0 && num<10)
       {
           printf("\nreverse value : %d", dig1);
       }
    else if(num>9 && num<100)
    {
        printf("\nReverse of %d is %d%d", num,dig1,dig2);
    }

    else if (num>99 && num<1000)
    {

        printf("\nReverse value is %d%d%d", dig1, dig2,dig3);
    }
    else
    {
        printf("\nOUT OF RANGE");
    }

 return 0;
}

