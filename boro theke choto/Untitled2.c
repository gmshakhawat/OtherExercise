#include<stdio.h>
int main()
{
    int a,b,c;

        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c)
        {
           printf(" all are equal ");
        }
        else if(a>b && a>b)
        {
            if (b>c)
           {
               printf("%d %d %d",a,b,c);
           }
            else
            {
              printf("%d %d %d",a,c,b);
            }
        }
        else if(b>a && b>c)
        {
            if (a>c)
           {
               printf("%d %d %d",b,a,c);
           }
            else
            {
              printf("%d %d %d",b,b,c);
            }
        }
        else
        {
            if (b>a)
           {
               printf("%d %d %d",c,b,a);
           }
            else
            {
              printf("%d %d %d",c,a,b);
            }
        }

    return 0;
}

