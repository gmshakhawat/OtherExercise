#include<stdio.h>

int main()
{

int i,e, num ;



for (i=0 ; i<10 ; )
    {

printf("please enter the marks :");
 scanf("%d",&num);
 if (num>100 || num>0)

{
    printf(" its not possible ");
 }

 else if (num>=40)
 {
printf("passed ");
 }
 else
 {

     printf("failed");
 }

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
