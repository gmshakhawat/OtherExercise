#include<stdio.h>
int main()
{
    int i,n,k,c=0,p=0;
    int an[10000];

    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&an[i]);
        p=p+an[i];
    }
    if(p>0)
    {
    for(i=0;i<n;i++)
    {
        if(an[k]<=an[i])
        {
            c++;
        }
    }
    printf("%d\n",c);
    }
    else
    {
        printf("%d\n",c);
    }
}
