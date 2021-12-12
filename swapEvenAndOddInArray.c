#include <stdio.h>

int main()
{
    int a[5], i, j;
    printf("Enter 5 integers:-\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    j = i;
    printf("The elements of array are:-\n");
    for(i = 0; i < 5; i++){
        printf("%d  ", a[i]);
    }
    for(i = 0; i < 5; i++){
        while(a[i]%2 != 0 && a[j]%2 == 0)
        {
            a[i] = a[j];
            j--;
        }
    }
    printf("\nAfter swapping, the elements of array are:-\n");
    for(i = 0; i < 5; i++){
        printf("%d  ", a[i]);#include <stdio.h>

int main()
{
    int a[6], i, j;
    printf("Enter 5 integers:-\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements of array are:-\n");
    for(i = 0; i < 6; i++){
        printf("%d  ", a[i]);
    }
    i = 0;
    for(j = 0; i < 5; j++){
        a[j] =  a[i+1];
        i++;
    }
    printf("\nAfter swapping, the elements of array are:-\n");
    for(i = 0; i < 6; i++){
        printf("%d  ", a[i]);
    }
}

    }
}
