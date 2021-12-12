#include <stdio.h>
int main()
{
#define PRODUCT(a, b) a * b ///"PRODUCT" is the name of Macro
    printf("%d\n", PRODUCT(3+3,4+1));
#undef PRODUCT
    printf("%d", PRODUCT(2,3));
    return 0;
}
