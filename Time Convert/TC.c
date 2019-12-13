#include<stdio.h>


int main()
{
int s,ss,m,mm,h,hh,d;

printf("Input your Seconds please : ");
scanf("%d",&s);

ss=s%60;
m=s/60;
mm=m%60;
h=m/60;
d=h/24;
hh=h%24;

if (h>23)
{
    printf("\n%d Seconds means_\n%d Days %d Hours %d Munites %d Seconds\n\n",s,d,hh,mm,ss);
}
else
{
    printf("\n%d Seconds means_\n%d Hours %d Munites %d Seconds\n\n",s,h,mm,ss);
}


    return 0;
}
