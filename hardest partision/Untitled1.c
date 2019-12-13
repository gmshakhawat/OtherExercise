#include<stdio.h>
int main()
{
    int l,i,s=0,j,k,m=0;
    char in[10000];
    scanf("%s",&in);
    l=strlen(in);
    //printf("%d",l);

    for(i=1;s<l;i++)
    {
        s=s+i;
        //printf("%d",i);
    }
    i=i-1;

   // printf("%d",i);
    if(l==s)
    {
        for(j=i;j>=1;j--)
        {
            for(k=1;k<=j;k++)
            {

                if(m<l)
                {
                    printf("%c",in[m]);
                }
                m=m+1;

            }
            printf("\n");
        }
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}
