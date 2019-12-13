#include<stdio.h>
#include<math.h>

int main()
{
      float a,b,c,d,Area,f;

    printf("Enter X1");
    scanf("%f",&a);
    printf("Enter Y1 ");
    scanf("%f",&b);
    printf("Enter X2 ");
    scanf("%f",&c);
    printf("Enter Y2 ");
    scanf("%f",&d);
    f=sqrt((c-a)*(c-a)+(d-b)*(d-b));


    Area=f*f;
    printf("Leanth of One side area %.2f\n",f);
    printf("Particular Area is %.2f\n",Area);


}
