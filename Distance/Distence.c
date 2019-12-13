#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,d,dis,f;

    printf("Enter X1");
    scanf("%f",&a);
    printf("Enter Y1 ");
    scanf("%f",&b);
    printf("Enter X2 ");
    scanf("%f",&c);
    printf("Enter Y2 ");
    scanf("%f",&d);
    f=(c-a)*(c-a)+(d-b)*(d-b);

   // s=(a+b+c)/2;
   // e=s*(s-a)*(s-b)*(s-c);

    //printf("S = %.2f",s);
    dis=sqrt(f);
    printf("\nDistance : %.2f",dis);

    getch();
}
