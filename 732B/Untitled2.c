#include<stdio.h>
int main()
{
    int n,k,i,ex=0,p=0,s=0,m;
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    b[0]=a[0];
    for(i=1;i<n;i++)
    {

        s=m+a[i];

        p=k-s;
        if(p>0)
        {
            b[i]=a[i]+p;
            ex=ex+p;
        }
        else
        {
            b[i]=a[i];
        }
        m=b[i];
    }
    printf("%d\n",ex);
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
