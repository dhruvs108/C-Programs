#include <stdio.h>

int main()
{
    int n, i, e = 0;
    printf("Enter the number of even numbers you want to print in reverse: ");
    scanf("%d", &n);
    for(i = n; i != 0; i--)
        printf("%d\n", i * 2);
    return 0;
}
