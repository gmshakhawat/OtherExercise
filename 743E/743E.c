#include<stdio.h>
int main()
{
    int i,n,m,p=1,t,c=0,q=0;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0 || a[i]>8)
        {
            q++;
            break;
        }

    }
    if(q==0)
    {

    for(i=1;i<n;i++)
    {
        t=a[0];
        if(t==a[i])
        {
            p++;
            t=a[i];

        }
    }
    if(n==p)
    {
        printf("%d",c+1);
    }
    else
    {
         for(i=0;i<n;i++)
        {
            if(i<n-1)
            {
                m=a[i]-a[i+1];
            }
            else
            {
                m=a[i]-a[0];
            }

            if(m<=1)
            {
                c++;
            }

        }
        printf("%d",c);
    }

    }
    else
    {

    }

    }

return 0;
}
