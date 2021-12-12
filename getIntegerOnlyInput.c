#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int getIntegerOnly(void);
int main()
{
    int a;
    a = getIntegerOnly();
    printf("%d", a);
    return 0;
}

int getIntegerOnly()
{
    int num;
    printf("Enter an integer: ");
    while(1)
    {
        num = getch();
        if(num >= 48 && num < 58){
            printf("%d", num-48);
            num = ((num - 48) * 10);
        else if(num == 13)
            break;
        else
            continue;
    }
}
