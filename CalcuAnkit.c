#include <stdio.h>
int main()
{
    int n1, n2;
    char a, oper;
    printf("Do you want to use the Calculator? Y or N: ");
    scanf("%c", & a);
    switch (a)
    {
        case 'Y':
        printf("\nEnter the first number: ");
        scanf("%d", & n1);
        fflush(stdin);
        printf("\nEnter the operator: ");
        scanf("%c", & oper);
        printf("\nEnter the second number: ");
        scanf("%d", & n2);
        switch (oper)
        {
            case '+':
                printf("Sum of the numbers is: %d", n1 + n2);
                break;
            case '-':
                printf("Difference of the numbers is: %d", n1 - n2);
                break;
            case '*':
                printf("Product of the numbers is: %d", n1 * n2);
                break;
            case '/':
                printf("Division of the numbers is: %d", n1 / n2);
                break;
            default:
                printf("Invalid Operator Chosen.");
        }
        break;
    case 'N':
        printf("You have chosen not to use the Calculator! Thank you.");
        break;
    default:
        printf("Invalid Option Chosen");
    }
    getch();
    return 0;
}
