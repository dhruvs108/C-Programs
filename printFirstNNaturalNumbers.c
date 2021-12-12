#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter how many natural numbers you want to print: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d\n", i);
    return 0;
}
