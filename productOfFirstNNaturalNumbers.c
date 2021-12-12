#include <stdio.h>

int main()
{
    int n, i, product = 1;
    printf("Enter the number to which you want to calculate product of numbers: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
        product = product * i;
    printf("Result is %d", product);
    return 0;
}
