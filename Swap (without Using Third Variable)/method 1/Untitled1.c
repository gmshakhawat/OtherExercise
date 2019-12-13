#include<stdio.h>

int main() {
   float a, b;

   printf("\nEnter value for A ");
   scanf("%f", &a);
   printf("\nEnter value for B ");
   scanf("%f", &b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("\nAfter swapping value of A : %.2f", a);
   printf("\nAfter swapping value of B : %.2f", b);

   return (0);
}
