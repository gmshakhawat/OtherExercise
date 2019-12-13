#include <stdio.h>
int main()
{
    int n,t,i,re=0, remainder, or;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d", &n);

    or = n;
    while( n!=0 )
    {
        remainder = n%10;
        re = re*10 + remainder;
        n /= 10;

    }
    if (or == re)
       {
           printf("%d is a palindrome.", or);
       }
    else
        {
            printf("%d is not a palindrome.", or);
        }

    }

    return 0;
}
