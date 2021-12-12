#include <stdio.h>
//Even Odd without Modulus or Bitwise Operators
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
        num = -1 * num;
    while(num > 0)
        num = num - 2;
    if(num == 0)
        printf("The given number is even.");
    else
        printf("The given number is odd.");
    return 0;
}
