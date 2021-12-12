#include <stdio.h>

int main()
{
    int n, i, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;

    for(i = 0; n != 0; i++)
        n = n/10;

    printf("%d is %d digits long.", num, i);
    return 0;
}
