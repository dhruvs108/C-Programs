#include <stdio.h>

int main()
{
    int a[6], i, j;
    printf("Enter 6 integers:-\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements of array are:-\n");
    for(i = 0; i < 6; i++){
        printf("%d  ", a[i]);
    }
    for(i = 0; i < 6; i++){
        if(i == 4){
            a[5] = a[4];
        }
        if(i != 5){
        a[i] =  a[i+1];
        }
    }
    printf("\nAfter swapping, the elements of array are:-\n");
    for(i = 0; i < 6; i++){
        printf("%d  ", a[i]);
    }
}
