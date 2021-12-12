#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum = (sum + i * 2) - 1;
    printf("Sum of first %d odd numbers is %d", n, sum);
    return 0;
}
