#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,d,Area,r,R,perimeter;

    printf("Enter X1");
    scanf("%f",&a);
    printf("Enter Y1 ");
    scanf("%f",&b);
    printf("Enter X2 ");
    scanf("%f",&c);
    printf("Enter Y2 ");
    scanf("%f",&d);
    r=(c-a)*(c-a)+(d-b)*(d-b);

   // s=(a+b+c)/2;
   // e=s*(s-a)*(s-b)*(s-c);

    //printf("S = %.2f",s);
    R=sqrt(r);
    printf("\nRedious : %.2f",R);

    Area=3.1416*R*R;
    printf("Area :%f",Area);

    perimeter=2*3.1416*r;
    printf("Perimeter : %.2f",perimeter);

    getch();
}
