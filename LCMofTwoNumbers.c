#include <stdio.h>

int main()
{
    int a, b, n1, n2, i = 1, j = 2, t;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    if(n1 < n2)
    {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    a = n1;
    b = n2;
    while(1)
    {
        if(a == b)
            break;
        a = n1 * i;
        while(b <= a)
        {
            if(a == b)
                break;
            b = n2 * j;
            j++;
        }
        i++;
    }

    printf("LCM of %d and %d is %d", n1, n2, a);
    return 0;
}
