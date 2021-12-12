#include <stdio.h>

int main()
{
    int n1, n2, HCF;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    while(1)
        if(n1 % HCF == 0 && n2 % HCF == 0)
            break;
        else
            HCF--;

    printf("HCF of %d and %d is %d", n1, n2, HCF);
    return 0;
}
