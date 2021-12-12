#include <stdio.h>

int main()
{
    int y;
    printf("Enter an year: ");
    scanf("%d", &y);
    if(y % 100 == 0)
        if(y % 400 == 0)
            printf("Leap Year!");
        else
            printf("Normal Year");
    else if(y % 4 == 0)
        printf("Leap Year!");
    else
        printf("Normal Year");
    return 0;
}
