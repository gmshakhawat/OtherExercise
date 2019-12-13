#include<stdio.h>
int main()
{
    int n=5,a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max ;
    max=a[0];
    for(i=0;i<n-1;i++)
    {
        if((a[i]<a[i+1])&&(max<a[i+1]))
        {

            max=a[i];

        }
        else if(max<a[i])
        {
            max=a[i];
        }
    }

    printf("%d",max);
}
