#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the no. of odd numbers you want to print in reverse: ");
    scanf("%d", &n);
    for(i = n; i != 0; i--)
        printf("%d\n", i * 2 - 1);
    return 0;
}
