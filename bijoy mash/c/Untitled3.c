#include<stdio.h>
int main()
{
    int n,i,p=0,f=0,th=0,thh=0,t=0,o=0,rs=0,q=0,tp=0;
    scanf("%d",&n);

    if(n>=1 && n<=100000)
    { int no[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&no[i]);

        if(no[i]==4)
        {
            f++;
        }
        else if(no[i]==3)
        {
            th++;
        }
        else if(no[i]==2)
        {
            t++;
        }
        else if(no[i]==1)
        {
            o++;
        }
    }
         thh=(th*4)-(th*3);
         o=thh-(o*1);
         if(o<0)
        {
             o=-o;
         }
         tp=(t*2)%4;
         t=(t*2)/4;
         p=o+tp;
         q=p%4;
         if(q>0)
         {
             p=(p/4)+1;
         }
         else
         {
             p=p/4;
         }
         rs=f+th+t+p;
             printf("%d",rs);
    }
    return 0;
}
