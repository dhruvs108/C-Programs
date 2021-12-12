#include <stdio.h>

int main()
{
    char a;
    int num = 0, l, i, uNum;
    printf("Enter an integer: ");
    scanf("%d", &uNum);
    while(a != 13)
    {
        a = uNum;
        l = a - 48;
        for(i = 1; i <= a; i++){
            if(a == i){
                printf("I");
                a++;
            }
        }
        num = num * 10 + l;
    }
    return 0;
}
