#include<stdio.h>

int main ()
{
    char n;
    int a;
    float b;
    char c;


    printf("Please Enter your Name: ");
    scanf("%s",&n);

    printf("please Enter your Age: ");
    scanf("%d",&a);

    printf("Please Enter your G.P.A: ");
    scanf("%f",&b);


    printf("Please Enter your Gender: ");
    scanf("%s",&c);



    printf("hello %s !! \n You are %d  year old \n Your G.P.A is %f\n And Your are %s",n,a,b,c);



    getch();
    return 0;
}

