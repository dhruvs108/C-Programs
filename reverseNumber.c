#include <stdio.h>

int main()
{
    int n, r = 0, l, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;

    while(n != 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    printf("%d reversed is %d", num, r);
    return 0;
}
