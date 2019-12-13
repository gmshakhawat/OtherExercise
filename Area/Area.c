#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,d,area,r;

    printf("Enter X1");
    scanf("%f",&a);
    printf("Enter Y1 ");
    scanf("%f",&b);
    printf("Enter X2 ");
    scanf("%f",&c);
    printf("Enter Y2 ");
    scanf("%f",&d);
    r=(c-a)*(c-a)+(d-b)*(d-b);

   // s=(a+b+c)/2; Shakhawat
   // e=s*(s-a)*(s-b)*(s-c);

    //printf("S = %.2f",s);
    r=sqrt(r);
    area=(3.154*(r*r));
    printf("\n Area: %.2f",area);

    getch();
}
