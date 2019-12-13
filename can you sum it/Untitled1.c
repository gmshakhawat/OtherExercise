#include<stdio.h>

int main()
{
    int N,i,r=0,n=0;

    for(i=0;i<10;i++)
    {
        printf("please give an integer number : ");
        scanf("%d",&N);

   if(N>0 && N<10000)
    { for(i=1 ; i<=N ;i++)
        {
           r=n+i;
            n=r;


        }
        printf(" sum is %d \n\n",r);

    }
    else
    { N=-N;

    for(i=1 ; i<=N ;i++)
        {
           r=n+i;
            n=r;


    }
    printf(" sum2 is -%d \n\n",r);
    }
  }
  return 0;
}
