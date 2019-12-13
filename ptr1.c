#include<stdio.h>

int main(void)
{
    int arr[5], i, *ptr;
    i = 0;

    ptr = arr;

    while(i<5) {
        //scanf("%d", &arr[i]);
        scanf("%d", ptr+i);
        i++;
    }

    i = 0;
    while(i<5) {
        //printf("%d\t", arr[i]);
        printf("%d\t", *(ptr+i));
        i++;
    }

    return 0;
}
