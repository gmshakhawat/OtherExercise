#include<stdio.h>
#include<math.h>

int main ()
{
    int s,ss,m,mm,h;


    printf("Enter blue");
    scanf("%d",&s);




   // printf("Enter red ");

    m=s/60;
    ss=s%60;

    h=s%3600;



    printf("h %d m %d s %d ",h,m,ss);




}
