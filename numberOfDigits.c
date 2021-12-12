#include <stdio.h>

int main(){

    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0)
        printf("The number is 1 digit long.");
    else{
        for(i = 0; num != 0; i++){
            num = num/10;
            }
        printf("The number is %d digits long.", i);
        }
    return 0;
}
