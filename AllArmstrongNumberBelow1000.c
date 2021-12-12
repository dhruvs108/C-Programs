#include <stdio.h>
#include <math.h>
int count(int);
int main()
{
    int n, l, i, c;
    printf("All Armstrong Numbers below 1000 are:-\n");
    for(i = 1; i <= 1000; i++)
    {
        n = i;
        c = count(n);
        l = 0;
        while(n != 0)
        {
            l = l + pow(n % 10, c);
            n = n / 10;
        }
        if(l == i)
            printf("%d\n", l);
    }
    return 0;
}

int count(int num)
{
    int i;
    for(i = 0; num != 0; i++)
        num = num / 10;
    return i;
}
