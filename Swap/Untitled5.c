#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b,c;


    printf("Enter blue");
    scanf("%d",&a);
    printf("Enter red ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;


    printf("Blue %d Red %d  ",a,b);




}
