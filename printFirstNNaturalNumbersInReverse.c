#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter how many natural numbers you want to print in reverse: ");
    scanf("%d", &n);
    for(i = n; i > 0; i--)
        printf("%d\n", i);
    return 0;
}
