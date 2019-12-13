#include <stdio.h>

int main()
{
    int a,b,sum,reminder;
    float Divition;


    printf("Enter you 1st number ");
    scanf("%d",&a);
    printf("Enter you 2nd number ");
    printf("Enter you 2nd number ");
    scanf("%d",&b);

    if(b==0)
    {
        printf("\nNumber can not divided by Zero");
    }
    else{
      Divition=a/b;
      printf("\nDivition :%.2f",Divition);
    }


   // sum=a+b;

    //printf("\nSum :%d",sum);
   // reminder=a%b;
   // printf("\nSum :%d",Divition);
    //printf("\nSum :%d",reminder);
}
