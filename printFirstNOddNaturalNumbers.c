#include <stdio.h>

int main()
{
    int i, n, o = 0;
    printf("Enter the number of odd numbers you want to print: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d\n", i + o);
        o++;
    }
    return 0;
}
