#include<stdio.h>
void main ()
{
    int integer1;
    int integer2;
    int sum;


     printf ("Enter 1st integer\n");
     scanf("%d", &integer1);

     printf("Enter 2nd integer\n");
     scanf("%d", &integer2);

     sum=integer1+integer2;

     printf("Sum is %d\n", sum);
     getch();


}
