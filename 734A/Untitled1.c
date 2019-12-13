#include<stdio.h>
int main()
{
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char tk[n];

    scanf("%s",&tk);

    for(i=0;i<n;i++)
    {
        if('A'== tk[i])
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if(a==d)
    {
        printf("Friendship");
    }
    else if(a>d)
    {
        printf("Anton");
    }
    else
    {
        printf("Danik");
    }
}
