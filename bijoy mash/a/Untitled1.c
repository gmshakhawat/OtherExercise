#include<stdio.h>

int main()
{
    int n,i,len[100],p,q;


    scanf("%d",&n);
    char ch[n][100000];
    for(i=0;i<n;i++)
    {
        scanf("%s",&ch[i]);
        len[i]=strlen(ch[i]);

    }
    for(i=0;i<n;i++)
    {
        p=len[i];
        q=p-1;
        if(p>10)
        {
           printf("%c%d%c\n",ch[i][0],p-2,ch[i][q]);
        }
        else
        {
            printf("%s\n",ch[i]);
        }
    }
return 0;
}
