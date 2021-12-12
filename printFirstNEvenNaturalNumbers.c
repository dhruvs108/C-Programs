#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the no. of even numbers you want to print: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d\n", i * 2);
    return 0;
}
