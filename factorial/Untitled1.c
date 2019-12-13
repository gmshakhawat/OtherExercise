#include<stdio.h>
int main()
{
    int i,n,l;
    scanf("%d",&n);
    char ar[1000]={'1'};
    int in[10001];
    //char ar[1][10000]={1};
   //*in=atoi(ar);
    //printf("%s",ar);

if(n==0)
{
    printf("1");
}
else
{

     for(i=1;i<=n;i++)
     {

       *ar=*ar*i;
       //strcpy(in,ar);

     }

     l=strlen(*ar);
      printf("%d\n",l);
     for(i=0;i<=l;i++)
     {
         in[i]=ar[i];
     }


     printf("%d",in);

}
}
