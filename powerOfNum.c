#include <stdio.h>

int main()
{
    int num, pow, i, result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    for(i = 0; i < pow; i++)
    {
        result = result * num;
    }
    printf("Result: %d", result);
    return 0;
}
