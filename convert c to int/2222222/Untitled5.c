
#include<stdio.h>

int main() {
     int arr[6];
    int i,b,c,n;
    char cha[6];

    scanf("%d",&n);
  if(n>0 && n<=100)
  {
   for(i=1;i<=n;i++)
   {
    scanf("%s",cha);

    arr [0] = cha[0] - '0';
    arr [1] = cha[1] - '0';
    arr [2] = cha[2] - '0';
    arr [3] = cha[3] - '0';
    arr [4] = cha[4] - '0';
    arr [5] = cha[5] - '0';



    b=arr[0]+arr[1]+arr[2];
    c=arr[3]+arr[4]+arr[5];

    if(b==c)
    {
        printf("Case %d: LUCKY CARD\n",i);
    }
    else
    {
        printf("Case %d: You are not Lucky enough!\n",i);

    }

   }



  }
  else
  {

  }
    return 0;
}
