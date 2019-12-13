#include<stdio.h>

int main()
{
     /*int n;
     double x;

     x=10.5;
     n= (int)x;

     printf("value id %d\n",n);
     printf("value is %lf\n",x);*/

     int a,cal;

     scanf("%d",&a);

     cal=((a/2)*2);

     if(cal==a)
     {
          printf("%d is even",a);
     }
     else{
          printf("%d is odd",a);
     }

     return 0;

}
