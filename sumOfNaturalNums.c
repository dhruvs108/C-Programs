#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the no. of natural numbers you want to calculate the sum of: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum = sum + i;
    printf("Sum: %d", sum);
    return 0;
}
