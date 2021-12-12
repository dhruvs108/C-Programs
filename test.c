#include <stdio.h>
#include <stdlib.h>
///swap two nums without third variable
int main()
{
    int a =  3, b = 4;
    printf("Before swapping, a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, a = %d and b = %d\n", a, b);
    return 0;
}
