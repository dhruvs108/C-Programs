#include <stdio.h>

int main()
{
    int n, i, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 1 || n == -1)
        printf("%d is neither a prime nor a composite number!", n);
    if(n < 0)
        num = -n;
    else
        num = n;
    for(i = num - 1; i >= 1; i--)
        if(num % i == 0 && i > 1)
        {
            printf("%d is a composite (non-prime) number!", n);
            break;
        }
        else if(i == 1)
        {
            printf("%d is a prime number!", n);
            break;
        }
        else
            continue;
    return 0;
}
