#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fact, i;
    printf("Enter a number to calculate the factorial of: ");
    scanf("%d", &n);
    fact = n;
    for(i=1; i<n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d: %d", n, fact);
    return 0;
}
