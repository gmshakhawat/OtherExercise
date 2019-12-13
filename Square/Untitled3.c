#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c;

    printf("Enter Number");
    scanf("%f",&a);
    printf("Enter Power ");
    scanf("%f",&b);

    c=pow(a,b);

    printf("%.2f",c);
}
