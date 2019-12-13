
#include<stdio.h>
int main()
{
    int n=5,a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max ,max2=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        else if(max2<a[i])
        {
            max2=a[i];
        }
    }

    printf("%d",max2);
}
