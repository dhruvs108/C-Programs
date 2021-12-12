#include <stdio.h>

int main(){

    int num, i;
    printf("Enter a number to generate multiplication table: ");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
        printf("Multiplication of %d by %d is %d\n", num, i, num * i);
    printf("Program ended!");
    return 0;
}
