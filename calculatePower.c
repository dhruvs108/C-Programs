#include <stdio.h>

int main()
{
    int n, p, i, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power of number: ");
    scanf("%d", &p);
    result = n;
    for(i = 1; i < p; i++)
    {
        result = result * n;
    }

    printf("%d raised to the power %d is %d", n, p, result);
    return 0;
}
