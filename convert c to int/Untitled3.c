#include<stdio.h>
int main()
{

int arr[6];
int i;
char var1[6];

printf("Please enter a 4 digit number: ");
scanf("%s", var1);

for (i = 0; i < 6; i++ ) {
    arr [i] = var1[i] - '0'; // convert char to int
    printf("%d\n", arr[i]);
}
printf("\n");

return 0;
}
