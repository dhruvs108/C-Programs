#include <stdio.h>

int main()
{
    int num, r = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(n != 0)
    {
        r = r + n % 10;
        n = n / 10;
    }
    printf("Sum of digits of %d is %d", num, r);
    return 0;
}
