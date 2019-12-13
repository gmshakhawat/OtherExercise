#include<stdio.h>

int main()
{
     printf("\n\tGrocery shop");
     printf("\n\n\n");
     printf("\tSerial");
     printf("\tProduct");
     printf("\tPrice");
     printf("\n\n");
     printf("\t1");
     printf("\tPotato");
     printf("\t20");
     printf("\n");
     printf("\t2");
     printf("\tTomato");
     printf("\t200");
     printf("\n");
     printf("\t3");
     printf("\tRice");
     printf("\t50");
     printf("\n");
     printf("\t4");
     printf("\tDal");
     printf("\t160");
     printf("\n\n\n");


     int serial,quantity,price;


     printf("\tPlease Chose the product and please Enter the no. : ");
     scanf("%d",&serial);
     if(serial==1)
     {
          printf("\n\n\tThe price of Potato is 20tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Potato",quantity);
          price=quantity*20;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else if(serial==2)
     {
          printf("\n\n\tThe rate of Tomato is 200tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of tomato",quantity);

          price=quantity*200;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else if(serial==3)
     {
          printf("\n\n\tThe rate of Rice is 50tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Rice",quantity);

          price=quantity*50;
          printf("\n\n\ttotal price = %d\n\n\t",price);
     }
     else if(serial==4)
     {
          printf("\n\n\tThe rate of Dal is 160tk per kg");
          printf("\n\tEnter the product quantity");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Dal ",quantity);
          price=quantity*160;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else
     {
          printf("\n\tSorry,We are out of stock");


     }


     return 0;
}
