#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d\n", a & 1);
    getch();
    if((a & 1) == 0)
        printf("The given number is even.");
    else
        printf("The given number is odd.");
    return 0;
}
