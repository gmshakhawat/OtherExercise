#include<stdio.h>
void main ()
{
    int integer1;
    int integer2,b,c,d;
    int sum;

     printf ("Enter 1st integer\n");
     scanf("%d", &integer1);

     printf("Enter 2nd integer\n");
     scanf("%d", &integer2);

     printf ("Enter 3st integer\n");
     scanf("%d", &b);

     printf ("Enter 4st integer\n");
     scanf("%d", &c);

     printf ("Enter 5 integer\n");
     scanf("%d", &d);



     sum=(integer1-integer2)+(b+c+d);

     printf("Sum is %d\n", sum);
     getch();


}

