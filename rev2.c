/* Write a program which will take a three digit number and output the reverse number */

#include<stdio.h>

int main()
{

    int num,dig1,dig2,dig3;
    int temp;

    printf("\nEnter a three digita number:");
    scanf("%d",&num);

    dig1=num%10;
    num=num/10;
    dig2=num%10;
    dig3=num/10;

    printf("\nReverse value is %d%d%d", dig1, dig2,dig3);

  return 0;
}
