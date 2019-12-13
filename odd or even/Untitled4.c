#include<stdio.h>

int main()
{

int i,e,n;



for (i=0 ; i<10 ; i++)
    {

printf("please give a Number ");
scanf("%d",&n);

if(n==0)
{
    printf("\nNumber is Zero  \n");
}

else if (n/2==0)
{
    printf("Even Number \n ");
}
else
{
    printf("Odd  Number \n");
}
printf("\n\n");
    printf(" if want to exit enter 0 : ");
    scanf("%d",&e);

    if( e==0)
    {
        break;
    }
    else
    {
        continue;
    }


    }


return 0;

}
