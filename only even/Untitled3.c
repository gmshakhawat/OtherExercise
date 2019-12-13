#include<stdio.h>

int main()
{
     int a=0,b;

     printf("plese enter the number for \aeven : ");
     scanf("%d",&b);


     while (a<b){
          a=a+1;
          if(a%2==0){
               continue;
          }
          printf("\t%d\n",a);
     }
}
