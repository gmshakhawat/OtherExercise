#include<stdio.h>

int main()
{
     int a,b;

     printf("print the number from");
     scanf("%d",&a);
     printf(" to ");
     scanf("%d",&b);

     while(a<=b){
          printf("%d\n",a++);
     }
}
