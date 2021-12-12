#include <stdio.h>
#include <math.h>
int count(int);
int main()
{
    unsigned int n, c, copy, l = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    c = count(n);
    printf("%d\n", c);
    copy = n;

    while(copy != 0)
    {
        l = l + pow(copy % 10, c);
        copy = copy / 10;
    }

    if(l == n)
        printf("%d is an Armstrong Number!", n);
    else
        printf("%d is not an Armstrong Number.", n);
    return 0;
}

int count(int num)
{
    int i;
    for(i = 0; num != 0; i++)
        num = num / 10;
    return i;
}
