#include <stdio.h>
#include <windows.h>
int main()
{
    char name[25], mov = 0;
    int a = 12, b = 40;
    COORD c;
    c.X = a;
    c.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("Enter a name: ");
    gets(name);
    system("cls");
    gotoxy(a, b);
  /* while(1)
    {
        mov = getch();
        switch(mov)
        {
            case ('W' || 'w'):
                a--;
                goto(a, b);
                break;
        }
        system("cls");
        gotoxy(a, b);
        printf("%s", name);
    } */
    return 0;
}
