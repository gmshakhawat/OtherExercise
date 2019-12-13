#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,avg;

    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    avg=(a+b+c+d+e+f)/6;
    printf("Average Value of %.2f, %.2f, %.2f, %.2f, %.2f, %.2f,  is %.2f ",a,b,c,d,e,f,avg);

    return 0;
}
