#include<stdio.h>
#include<conio.h>


int main()
{
     char a,b,c,d,e;
     char f,g,h,i,j;

     printf("Enter Password\n");


     a=getch();
     printf("*");
     b=getch();
     printf("*");
     c=getch();
     printf("*");
     d=getch();
     printf("*");
     e=getch();
     printf("*");


     printf("\nRe-name password\n");


    f=getch();
     printf("*");
    g=getch();
     printf("*");
     h=getch();
     printf("*");
     i=getch();
     printf("*");
     j=getch();
     printf("*");


     if(a==f && b==g && c==h && d==i && e==j)
     {

          printf("\nPassword Correct");
                         }
          else
          {
          printf("\nwrong password");
          }


getch();

     return 0;
}
