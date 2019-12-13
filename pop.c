#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,d,v,g,ch,t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t++;
    }

    g:
    printf("\n1. Pop \n2. Exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:


        if(t>0)
        {
            d=a[t-1];
            printf("%d has been poped \nNow Stack is : ",d);
            t--;
            for(i=0;i<t;i++)
            {
                printf("%d ",a[i]);
            }
        }
        else
        {
            printf("\nStack is Underflow !!!\n");
        }
        goto g;
        break;
    case 2:
        break;
    default:
        printf("Wrong Input !! try again !!\n");
        goto g;
    }



}


