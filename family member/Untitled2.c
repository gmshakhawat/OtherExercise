#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,i,a,b,c,d;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
    scanf("%d%d%d",&a,&b,&c);
       d=a+b+c;
   printf("Family %d: %d",i,d);
   }

    return 0;
}

