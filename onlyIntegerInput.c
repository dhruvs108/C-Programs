#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    a = OnlyIntegerInput();
    printf("Your number is %d.", a);
    return 0;
}
int OnlyIntegerInput(){

    char ch;
    int n = 0;
    do
    {
        ch = getch();
        if(ch > 47 && ch < 58)
            printf("%d", ch - 48);
        else if(ch != 13)
            continue;
        else
            break;
        n = n * 10 + (ch - 48);
    }while(1);
    printf("\n");
    return n;
}

